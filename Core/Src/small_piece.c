/*
 * small_piece.c
 *
 *  Created on: 17 mai 2022
 *      Author: Victor
 */

#include "base_piece.h"
#include "stm32746g_discovery_lcd.h"

void dispSmallPiece1(int X, int Y){
	uint32_t color_map1[3] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_BLUE1,
	                LCD_COLOR_WHITE1};

	char piece_data[] = {
		1,1,1,1,1,1,1,1,1,1,0,0,
		1,1,1,1,1,1,1,1,1,1,0,0,
		1,1,2,2,2,2,2,2,1,1,0,0,
		1,1,2,2,2,2,2,2,1,1,0,0,
		1,1,2,2,2,2,2,2,1,1,0,0,
		1,1,2,2,2,2,2,2,1,1,0,0,
		1,1,2,2,2,2,2,2,1,1,0,0,
		1,1,2,2,2,2,2,2,1,1,0,0,
		1,1,1,1,1,1,1,1,1,1,0,0,
		1,1,1,1,1,1,1,1,1,1,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0
		};

	int i,j,k=0;
	      for(j=0;j<12;j++) {
			 for (i = 11; i >= 0; i--) {
				 switch (piece_data[k]) {
				 case 0:
					 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[0]);
					 break;
				 case 1:
					 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[1]);
					 break;
				 case 2:
					 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[2]);
					 break;
				 case 3:
					 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[3]);
					 break;
				 }
				 k++;
			 }
		 }
}


void dispSmallPiece2(int X, int Y){
	uint32_t color_map1[3] = {
	                LCD_COLOR_BLACK,
	                LCD_COLOR_BLUE1,
	                LCD_COLOR_WHITE1};

	char piece_data[] = {
		2,2,1,1,1,1,1,1,1,1,0,0,
		2,2,1,1,1,1,1,1,1,1,0,0,
		1,1,2,2,2,2,1,1,1,1,0,0,
		1,1,2,2,2,2,1,1,1,1,0,0,
		1,1,2,2,1,1,1,1,1,1,0,0,
		1,1,2,2,1,1,1,1,1,1,0,0,
		1,1,1,1,1,1,1,1,1,1,0,0,
		1,1,1,1,1,1,1,1,1,1,0,0,
		1,1,1,1,1,1,1,1,1,1,0,0,
		1,1,1,1,1,1,1,1,1,1,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0
		};

	int i,j,k=0;
	      for(j=0;j<12;j++) {
			 for (i = 11; i >= 0; i--) {
				 switch (piece_data[k]) {
				 case 0:
					 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[0]);
					 break;
				 case 1:
					 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[1]);
					 break;
				 case 2:
					 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[2]);
					 break;
				 case 3:
					 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[3]);
					 break;
				 }
				 k++;
			 }
		 }
}

void dispSmallPiece3(int X, int Y){
	uint32_t color_map1[3] = {
		                LCD_COLOR_BLACK,
		                LCD_COLOR_BLUE2,
		                LCD_COLOR_WHITE1};

		char piece_data[] = {
			2,2,1,1,1,1,1,1,1,1,0,0,
			2,2,1,1,1,1,1,1,1,1,0,0,
			1,1,2,2,2,2,1,1,1,1,0,0,
			1,1,2,2,2,2,1,1,1,1,0,0,
			1,1,2,2,1,1,1,1,1,1,0,0,
			1,1,2,2,1,1,1,1,1,1,0,0,
			1,1,1,1,1,1,1,1,1,1,0,0,
			1,1,1,1,1,1,1,1,1,1,0,0,
			1,1,1,1,1,1,1,1,1,1,0,0,
			1,1,1,1,1,1,1,1,1,1,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0
			};

		int i,j,k=0;
		      for(j=0;j<12;j++) {
				 for (i = 11; i >= 0; i--) {
					 switch (piece_data[k]) {
					 case 0:
						 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[0]);
						 break;
					 case 1:
						 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[1]);
						 break;
					 case 2:
						 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[2]);
						 break;
					 case 3:
						 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map1[3]);
						 break;
					 }
					 k++;
				 }
			 }
}

void dispSmallVoid(int X, int Y){
	uint32_t color_map[1] = {
			                LCD_COLOR_BLACK};

	int i,j;
	 for(j=0;j<12;j++) {
		 for (i = 11; i >= 0; i--) {
			 BSP_LCD_DrawPixel(j+Y, i+X+12, color_map[0]);
		 }
	 }
}
