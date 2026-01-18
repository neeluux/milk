#include "frontend.h"
#include <raylib.h>

void mk_draw(const struct mk_context *ctx) {
	ClearBackground(RAYWHITE);
	//DrawText("MILK", 190, 200, 20, LIGHTGRAY);
}

void draw_rects(int rectangles, int screenWidth, int screenHeight) {
	if (rectangles <= 5) {
		for (int RECT = rectangles; RECT > 0; RECT--) {
			// This is for the middle of the text, will be used in the future.
			//int width = screenWidth / (2*RECT);
			
			/* The horizontal position of the rectangle is determined 
			   by the screenWidth divided by the number of rectangles
			   passed, then multiplied by the rectangle the loop is
			   currently on. */
			DrawRectangle(RECT*(screenWidth/rectangles), 0, 
				screenWidth/rectangles, screenHeight, MODERATEPINK);
		}

		// Draw the first rectangle last to prevent division by zero.
		DrawRectangle(0, 0, screenWidth/rectangles, screenHeight, MODERATEPINK);
	}
}
