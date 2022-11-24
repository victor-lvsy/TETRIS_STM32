/*
 * function.c
 *
 *  Created on: May 16, 2022
 *      Author: Victor
 */


#include "function.h"
#include "base_piece.h"
#include "small_piece.h"
#include "stm32746g_discovery_lcd.h"
#include "game_over.h"
#include "main.h"

extern LIST* pieces_globales;
extern int boucleur;
extern int prgm_counter;

int grid[14][26];
int pieces[7][4][4][2];
int coord[2];

void init_grid(int grid[14][26]){
    int i,j;
    for (i=0;i<26;i++){
        grid[0][i]=2;
        grid[1][i]=2;
        grid[12][i]=2;
        grid[13][i]=2;
    };
    for (i=2;i<12;i++){
        grid[i][24]=2;
        grid[i][25]=2;
    };
    for (i=0;i<24;i++){
        for(j=2;j<12;j++){
            grid[j][i]=0;
        };
    };
};

void init_pieces(int pieces[7][4][4][2],int tab[224]){
    int i,j,k,l,m;
    m=0;
    for(i=0;i<7;i++){
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                for(l=0;l<2;l++){
                    pieces[i][j][k][l]=tab[m];
                    m=m+1;
                }
            }
        }
    }
};

PIECE* create_piece(){
    PIECE* new_piece;
    new_piece=calloc(1,sizeof (PIECE));
    new_piece->typepiece=rand()%7;
    new_piece->position=rand()%4;
    switch (new_piece->typepiece){
        	case 0:
        		new_piece->design=design1;
        	break;
        	case 1:
        		new_piece->design=design1;
        		break;
        	case 2:
        		new_piece->design=design2;
        		break;
        	case 3:
        		new_piece->design=design3;
        		break;
        	case 4:
        		new_piece->design=design3;
        		break;
        	case 5:
        		new_piece->design=design2;
        		break;
        	case 6:
        		new_piece->design=design1;
        		break;
        }
    return new_piece;
};

LIST* BuildList(PIECE* one, PIECE* two, PIECE* three){
    LIST* list;
    list=(LIST*)malloc(sizeof(LIST));
    list->first=one;
    list->second=two;
    list->last=three;
    return list;
}

LIST* SwapList(LIST* list){
    PIECE* NewPiece;
    NewPiece=create_piece(NULL);
    list->first=list->second;
    list->second=list->last;
    list->last=NewPiece;
}

void dispGrid(int grid[14][26])
{
    int i,j;
    for(i=4;i<25;i++){
        for(j=2;j<13;j++){
            	switch(grid[j][i]){
            		case 0 :
            			dispVoid((j-3)*16+zone_de_jeuX,(i-4)*16+zone_de_jeuY);
            			break;
            		case 3 :
            			dispPiece1((j-3)*16+zone_de_jeuX,(i-4)*16+zone_de_jeuY);
            			break;
            		case 4:
            			dispPiece2((j-3)*16+zone_de_jeuX,(i-4)*16+zone_de_jeuY);
            		     break;
            		case 5 :
            			dispPiece3((j-3)*16+zone_de_jeuX,(i-4)*16+zone_de_jeuY);
            		     break;
            		case 6 :
            			dispPiece1((j-3)*16+zone_de_jeuX,(i-4)*16+zone_de_jeuY);
            		       break;
            		case 7:
            			dispPiece2((j-3)*16+zone_de_jeuX,(i-4)*16+zone_de_jeuY);
            		     break;
            		case 8 :
            			dispPiece3((j-3)*16+zone_de_jeuX,(i-4)*16+zone_de_jeuY);
            		     break;
            	};
        }
    }
}

void dispNextPiece(PIECE* NextPiece, int pieces[7][4][4][2]){
	int grid[4][4];
	int i,j;
	for (i=0;i<4;i++){
	        for(j=0;j<4;j++){
	            grid[j][i]=0;
	        };
	    };
	switch (NextPiece->design){
	    	case design1:
	    		for(i=0;i<4;i++){
	    			grid[2+pieces[NextPiece->typepiece][NextPiece->position][i][0]]
						[2+pieces[NextPiece->typepiece][NextPiece->position][i][1]]=3;
	    		};
	    	break;
	    	case design2:
	    		for(i=0;i<4;i++){
	    			grid[2+pieces[NextPiece->typepiece][NextPiece->position][i][0]]
						[2+pieces[NextPiece->typepiece][NextPiece->position][i][1]]=4;
	    		        };
	    		break;
	    	case design3:
	    		for(i=0;i<4;i++){
	    			grid[2+pieces[NextPiece->typepiece][NextPiece->position][i][0]]
						[2+pieces[NextPiece->typepiece][NextPiece->position][i][1]]=5;
	    		    		};
	    		break;}

	for(i=0;i<4;i++){
	        for(j=0;j<4;j++){
	            	switch(grid[j][i]){
	            		case 0 :
	            			dispSmallVoid(j*12+5,i*12+230);
	            			break;
	            		case 3 :
	            			dispSmallPiece1(j*12+5,i*12+230);
	            			break;
	            		case 4:
	            			dispSmallPiece2(j*12+5,i*12+230);
	            		     break;
	            		case 5:
							dispSmallPiece3(j*12+5,i*12+230);
							break;
	            	};
	        }
	    }
}

void dispPiece(PIECE* toBePlaced,int pieces[7][4][4][2],int grid[14][26],int coord[2]){
    int i;
    switch (toBePlaced->design){
    	case design1:
    		for(i=0;i<4;i++){
            grid[coord[0]+pieces[toBePlaced->typepiece][toBePlaced->position][i][0]]
                    [coord[1]+pieces[toBePlaced->typepiece][toBePlaced->position][i][1]]=3;
    		};
    	break;
    	case design2:
    		for(i=0;i<4;i++){
    		            grid[coord[0]+pieces[toBePlaced->typepiece][toBePlaced->position][i][0]]
    		                    [coord[1]+pieces[toBePlaced->typepiece][toBePlaced->position][i][1]]=4;
    		        };
    		break;
    	case design3:
    		for(i=0;i<4;i++){
    		            grid[coord[0]+pieces[toBePlaced->typepiece][toBePlaced->position][i][0]]
    		                    [coord[1]+pieces[toBePlaced->typepiece][toBePlaced->position][i][1]]=5;
    		    		};
    		break;}

};

int test_hit(PIECE* toBeTested,int pieces[7][4][4][2],int grid[14][26],int coord[2]){
    int i;
    for(i=0;i<4;i++){
        if(grid[coord[0]+pieces[toBeTested->typepiece][toBeTested->position][i][0]]
        [coord[1]+pieces[toBeTested->typepiece][toBeTested->position][i][1]]!=0 &&
                grid[coord[0]+pieces[toBeTested->typepiece][toBeTested->position][i][0]]
					 [coord[1]+pieces[toBeTested->typepiece][toBeTested->position][i][1]]!=3 &&
				grid[coord[0]+pieces[toBeTested->typepiece][toBeTested->position][i][0]]
					 [coord[1]+pieces[toBeTested->typepiece][toBeTested->position][i][1]]!=4 &&
				grid[coord[0]+pieces[toBeTested->typepiece][toBeTested->position][i][0]]
					 [coord[1]+pieces[toBeTested->typepiece][toBeTested->position][i][1]]!=5 &&
				grid[coord[0]+pieces[toBeTested->typepiece][toBeTested->position][i][0]]
				){
            return 1;
        };
    }
    return 0;
}

void fall(PIECE* isPlayed,PIECE* NextPiece,int pieces[7][4][4][2],int grid[14][26],int coord[2],int level){
    int i,j,m;
    dispNextPiece(NextPiece,pieces);
    while(test_hit(isPlayed,pieces,grid,coord)==0){
        for(i=0;i<25;i++){
            for(j=2;j<13;j++){
            	if(grid[j][i]==3 || grid[j][i]==4 || grid[j][i]==5){
            		grid[j][i]=0;
            	}
            }
        }
        for(i=0;i<4;i++){
            grid[coord[0]+pieces[isPlayed->typepiece][isPlayed->position][i][0]]
                [coord[1]+pieces[isPlayed->typepiece][isPlayed->position][i][1]]=isPlayed->design;
        }
        dispGrid(grid);
        coord[1]=coord[1]+1;
        m=0;
        while (m!=7000000){
        	m++;
        }
    }
    for(i=0;i<4;i++) {
        grid[coord[0] + pieces[isPlayed->typepiece][isPlayed->position][i][0]]
        [coord[1] - 1 + pieces[isPlayed->typepiece][isPlayed->position][i][1]] = isPlayed->design+3;
    }
    m=0;
    while (m!=7000000){
    	m++;
    }
    dispGrid(grid);
}

int testGameOver(int grid[14][26]){
    int i;
    for(i=3;i<12;i++){
        if(grid[i][3]!=0) {
            return 1;
        };
    };
    return 0;
}

void move_piece(int move,PIECE* isPlayed,int pieces[7][4][4][2],int grid[14][26],int coord[2]){
    int temp[2];
    temp[0]=coord[0]; temp[1]=coord[1];
    switch(move){
        case 0: //move to right
            temp[0]++;
            break;
        case 1: //move to left
            temp[0]--;
            break;
        case 2: //move to bottom
            temp[1]++;
            break;
        case 3: //rotate
            if(isPlayed->position!=3){
                isPlayed->position++;
            }
            else{
                isPlayed->position=0;
            }
            break;
    }
    if(test_hit(isPlayed,pieces,grid,temp)==0){
        coord[0]=temp[0]; coord[1]=temp[1];
    }
}

int test_lines(int grid[14][26],int level){
    int i,j,count=0,temp_score=0,score=0;
    for(i=0;i<24;i++){
        for(j=0;j<14;j++){
            if((grid[j][i])!=0){
                count++;
            }
            if (count==14){
                delete_line(grid,i);
                temp_score=temp_score+1;
            }
        }
        count=0;
    }
    switch (temp_score) {
        case 1:
            score=40*level;
            break;
        case 2:
            score=100*level;
            break;
        case 3:
            score=300*level;
            break;
        case 4:
            score=1200*level;
            break;
        default:
            score=0;
    }
    return score;
}

void delete_line(int grid[14][26],int i){
    int j;
    for(i;i>0;i--){
        for(j=0;j<14;j++)
        grid[j][i]=grid[j][i-1];
    }
}

void core(){
	    int score=0, score_temp, xp=0;
	    int level=1;
	    int tab[224]={-1,0,0,0,-1,-1,0,-1,-1,0,0,0,-1,-1,0,-1,-1,0,0,0,-1,-1,0,-1,-1,0,0,0,-1,-1,0,-1,
	                  -2,0,-1,0,0,0,1,0,0,-2,0,-1,0,0,0,1,-2,0,-1,0,0,0,1,0,0,-2,0,-1,0,0,0,1,
	                  -1,-1,0,-1,0,0,1,0,1,-1,1,0,0,0,0,1,-1,-1,0,-1,0,0,1,0,1,-1,1,0,0,0,0,1,
	                  -1,0,0,0,0,-1,1,-1,1,1,0,0,1,0,0,-1,-1,0,0,0,0,-1,1,-1,1,1,0,0,1,0,0,-1,
	                  -1,-1,-1,0,0,0,1,0,1,-1,0,-1,0,0,0,1,1,1,1,0,0,0,-1,0,-1,1,0,1,0,0,0,-1,
	                  -1,0,0,0,1,0,1,-1,0,-1,0,0,0,1,1,1,1,0,0,0,-1,0,-1,1,0,1,0,0,0,-1,-1,-1,
	                  -1,0,0,0,1,0,0,-1,0,-1,0,0,0,1,1,0,1,0,0,0,-1,0,0,1,0,1,0,0,0,-1,-1,0};

	    PIECE* one;
	    PIECE* two;
	    PIECE* three;
	    init_grid(grid); //initialisation de la grille
	    init_pieces(pieces,tab); //initialisation du tableau référence des pièces
	    one=create_piece(NULL);  //création des 3 premières pièces
	    two= create_piece(NULL);
	    three= create_piece(NULL);
	    pieces_globales=BuildList(one,two,three); //création de la liste globale contenant les 3 pièces à venir
	    coord[0]=rand()%(9-4)+4;  //randomization des coordonnées d'apparition de la pièce à venir
	    coord[1]=2;
	    DispScoreIG(score,0); //affichage du score et du top score
	    DispScoreIG(score,1);
	    while(testGameOver(grid)==0){ //boucle infinie tant que le jeu est possible
	    	dispGrid(grid); // premier affichage de la grille (à vide)


	    	fall(pieces_globales->first,pieces_globales->second,pieces,grid,coord,level); //fonction majeure faisant tomber la pièce et affichant
	    	//																				cette dernière et celle à venir
	        score_temp=score+test_lines(grid,level); //incrémentation du score si nécéssaire
	        if(score_temp>score){
	            xp=xp+(score_temp-score);
	            if(xp>=level*2500){
	                xp=xp-level*250;
	                level++;
	            }
	        }
	        score=score_temp;
	        DispScoreIG(score,0); //mise à jour de l'affichage des scores
	        DispScoreIG(score,1);
	        SwapList(pieces_globales); //création d'une nouvelle pièce est rotation des pièces à venir

	       coord[0]=rand()%(9-4)+4;  //randomization des coordonnées d'apparition de la pièce à venir
	        coord[1]=2;
	    }
	    dispGameOver(); //affichage du game over
	    prgm_counter++;
	    while(boucleur!=1){

	    }


}
