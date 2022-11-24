/*
 * numbers.c
 *
 *  Created on: May 22, 2022
 *      Author: Victor
 */

#include "numbers.h"
#include <stdio.h>
#include "stm32746g_discovery_lcd.h"



void disp0_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,0,1,1,1,0,0,0,
			0,1,1,1,1,1,0,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			0,1,1,1,1,1,0,0,
			0,1,1,1,1,1,0,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp1_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,0,0,1,1,1,0,0,
			0,0,0,1,1,1,0,0,
			0,0,1,1,1,1,0,0,
			1,1,1,1,1,1,0,0,
			1,1,0,1,1,1,0,0,
			0,0,0,1,1,1,0,0,
			0,0,0,1,1,1,0,0,
			0,0,0,1,1,1,0,0,
			0,0,0,1,1,1,0,0,
			0,0,0,1,1,1,0,0
		};

	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
			 switch (piece_data[k]) {
				  case 0:
					 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
					 break;
				  case 1:
					  BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
					  break;
			 	 }
			 k++;
		 }
	 }
}

void disp2_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,1,0,0,0,
			1,1,1,1,1,1,0,0,
			1,1,1,0,1,1,1,0,
			0,0,0,0,1,1,1,0,
			0,0,0,0,1,1,1,0,
			0,0,0,1,1,1,0,0,
			0,0,1,1,1,0,0,0,
			0,1,1,1,0,0,0,0,
			1,1,1,1,1,1,1,0,
			1,1,1,1,1,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp3_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,1,0,0,0,
			1,1,1,1,1,1,0,0,
			1,1,1,0,1,1,1,0,
			0,0,0,0,1,1,1,0,
			0,0,0,1,1,1,0,0,
			0,0,0,1,1,1,0,0,
			0,0,0,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,1,1,1,0,0,
			0,1,1,1,1,0,0,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp4_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,0,0,0,0,1,1,0,
			0,0,0,0,1,1,1,0,
			0,0,0,1,1,1,1,0,
			0,0,1,1,0,1,1,0,
			0,1,1,0,0,1,1,0,
			1,1,1,0,0,1,1,0,
			1,1,1,1,1,1,1,0,
			1,1,1,1,1,1,1,0,
			0,0,0,0,0,1,1,0,
			0,0,0,0,0,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp5_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,1,1,1,0,
			0,1,1,1,1,1,1,0,
			0,1,1,0,0,0,0,0,
			1,1,1,1,1,1,0,0,
			1,1,1,1,1,1,1,0,
			0,1,0,0,1,1,1,0,
			0,0,0,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,1,1,1,0,0,
			0,1,1,1,1,0,0,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp6_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,0,1,1,1,1,0,0,
			0,1,1,1,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,0,0,0,0,
			1,1,1,0,1,1,0,0,
			1,1,1,1,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			0,1,1,1,1,1,1,0,
			0,0,1,1,1,1,0,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp7_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			1,1,1,1,1,1,1,0,
			1,1,1,1,1,1,1,0,
			0,0,0,0,1,1,0,0,
			0,0,0,1,1,1,0,0,
			0,0,0,1,1,0,0,0,
			0,0,1,1,1,0,0,0,
			0,0,1,1,1,0,0,0,
			0,1,1,1,0,0,0,0,
			0,1,1,1,0,0,0,0,
			0,1,1,1,0,0,0,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp8_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,1,1,0,0,
			1,1,1,1,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			0,1,1,1,1,1,0,0,
			0,1,1,1,1,1,0,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,1,1,1,1,0,
			0,1,1,1,1,1,0,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp9_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,1,0,0,0,
			1,1,1,1,1,1,0,0,
			1,1,1,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,1,1,1,1,0,
			0,1,1,0,1,1,1,0,
			0,0,0,0,1,1,1,0,
			1,1,1,0,1,1,1,0,
			1,1,1,1,1,1,0,0,
			0,1,1,1,1,0,0,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void dispPoint_18pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};

	char piece_data[] = {
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,1,1,1,0,0,0,0,
			0,1,1,1,0,0,0,0,
			0,1,1,1,0,0,0,0
	};
	int i,j,k=0;
	 for(j=0;j<10;j++) {
		 for (i = 7; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+10, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void DispScoreList(int number, int row){
	int tab[7]={0,0,0,10,0,0,0};
	int i=6;
	if(number>=1000000){
		number=999999;
	}
	while (number!=0)
	    {
	        tab[i]=number%10;
	        number=number/10;
	        i--;
	        if(i==3){
	        	tab[i]=10;
	        	i--;
	        }
	    }
	for (i=0;i<7;i++){
		switch(tab[i]){
			case 0:
				disp0_18pt(139-i*8,325+row*26);
				break;
			case 1:
				disp1_18pt(139-i*8,325+row*26);
				break;
			case 2:
				disp2_18pt(139-i*8,325+row*26);
				break;
			case 3:
				disp3_18pt(139-i*8,325+row*26);
				break;
			case 4:
				disp4_18pt(139-i*8,325+row*26);
				break;
			case 5:
				disp5_18pt(139-i*8,325+row*26);
				break;
			case 6:
				disp6_18pt(139-i*8,325+row*26);
				break;
			case 7:
				disp7_18pt(139-i*8,325+row*26);
				break;
			case 8:
				disp8_18pt(139-i*8,325+row*26);
				break;
			case 9:
				disp9_18pt(139-i*8,325+row*26);
				break;
			case 10:
				dispPoint_18pt(139-i*8,325+row*26);
				break;
		}
	}
}

void DispLevel(int level){

}

void disp0_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,0,
			1,1,0,1,0,
			1,1,0,1,0,
			1,1,0,1,0,
			0,1,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp1_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,0,1,0,0,
			0,1,1,0,0,
			0,0,1,0,0,
			0,0,1,0,0,
			0,0,1,0,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp2_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,0,
			1,1,0,1,0,
			0,0,1,1,0,
			0,1,1,0,0,
			1,1,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp3_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,0,
			0,0,0,1,0,
			0,0,1,1,0,
			0,1,0,1,0,
			0,1,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp4_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,0,1,1,0,
			0,1,1,1,0,
			1,1,0,1,0,
			1,1,1,1,1,
			0,0,0,1,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}


void disp5_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,0,
			0,1,0,0,0,
			1,1,1,1,0,
			0,0,0,1,0,
			0,1,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void disp6_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,0,
			1,1,0,0,0,
			1,1,1,1,0,
			1,1,0,1,0,
			0,1,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}


void disp7_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			1,1,1,1,0,
			0,0,0,1,0,
			0,0,1,0,0,
			0,1,1,0,0,
			0,1,1,0,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}


void disp8_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,0,
			1,1,0,1,0,
			0,1,1,1,0,
			1,1,0,1,0,
			0,1,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}


void disp9_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,1,1,1,0,
			1,1,0,1,0,
			1,1,1,1,0,
			0,0,0,1,0,
			0,1,1,1,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}




void dispPoint_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,0,0,0,0,
			0,0,0,0,0,
			0,0,0,0,0,
			0,0,0,0,0,
			0,1,1,0,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}

void dispVoid_10pt(int X, int Y){
	uint32_t color_map1[2] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_WHITE};
	char piece_data[] = {
			0,0,0,0,0,
			0,0,0,0,0,
			0,0,0,0,0,
			0,0,0,0,0,
			0,0,0,0,0
	};
	int i,j,k=0;
	 for(j=0;j<5;j++) {
		 for (i = 4; i >= 0; i--) {
				 switch (piece_data[k]) {
					  case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[0]);
						 break;
					  case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+5, color_map1[1]);
						 break;
			 }
				 k++;
		 }
	}
}


void DispScoreIG(int number, int TS){
	int tab[7]={0,0,0,10,0,0,0};
	int i=6;
	int row;
	if(number>=1000000){
		number=999999;
	}
	while (number!=0)
	    {
	        tab[i]=number%10;
	        number=number/10;
	        i--;
	        if(i==3){
	        	tab[i]=10;
	        	i--;
	        }
	    }
	for (i=0;i<7;i++){
		if(TS==0){row=0;}
		else{row=1;}
		dispVoid_10pt(44-i*5,74+row*56);
		switch(tab[i]){
			case 0:
				disp0_10pt(44-i*5,74+row*56);
				break;
			case 1:
				disp1_10pt(44-i*5,74+row*56);
				break;
			case 2:
				disp2_10pt(44-i*5,74+row*56);
				break;
			case 3:
				disp3_10pt(44-i*5,74+row*56);
				break;
			case 4:
				disp4_10pt(44-i*5,74+row*56);
				break;
			case 5:
				disp5_10pt(44-i*5,74+row*56);
				break;
			case 6:
				disp6_10pt(44-i*5,74+row*56);
				break;
			case 7:
				disp7_10pt(44-i*5,74+row*56);
				break;
			case 8:
				disp8_10pt(44-i*5,74+row*56);
				break;
			case 9:
				disp9_10pt(44-i*5,74+row*56);
				break;
			case 10:
				dispPoint_10pt(44-i*5,74+row*56);
				break;
		}
	}
}



