#include "context.h"
#include "frontend/frontend.h"
#include <stdio.h>
#include <raylib.h>

// Color palette
#define LIMEGREEN = (Color){}

void mk_print_help(void) {
	printf("Usage: milk <options>\n");
}

void mk_context_init(struct mk_context *ctx) {
	ctx->ticket_cats = NULL;
	ctx->n_ticket_cats = 0;
}

int main(int argc, char **argv) {
	if (argc <= 1) {
		mk_print_help();
		return 0;
	}

	// TODO: Parse arguments

	struct mk_context ctx;
	mk_context_init(&ctx);

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);

	const int screenWidth  = 800;
	const int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "milk");

	SetTargetFPS(10);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		// TODO: refactor into func/colors.h

		Color limeGreen = {2, 249, 9, 255};
		Color rainforestGreen = {0, 158, 117, 255};
		Color moderatePink = {228, 91, 217, 255};
		Color moderateBlue = {63, 85, 198, 255};
		Color berryPurple = {99, 85, 137, 255};
		
		DrawRectangle(0, 0, screenWidth/5, screenHeight, limeGreen);
		DrawRectangle(screenWidth/5, 0, screenWidth/5, screenHeight, rainforestGreen);
		DrawRectangle(screenWidth/5*2, 0, screenWidth/5, screenHeight, moderatePink);
		DrawRectangle(screenWidth/5*3, 0, screenWidth/5, screenHeight, moderateBlue);
		DrawRectangle(screenWidth/5*4, 0, screenWidth/5, screenHeight, berryPurple);

		DrawText(TextFormat("+C0"), screenWidth/5*4+7, 360, 80, WHITE);

		/* TODO: find an equation to get text in the center of a rectangle
			 using only the screen width and height */
		DrawText(TextFormat("SolidWorks"), screenWidth/(5*5)-6, 128, 20, WHITE);
		DrawText(TextFormat("AutoCAD"), screenWidth/(5/1)+35, 128, 20, WHITE);
		DrawText(TextFormat("Water Damage"), screenWidth/(5/2)-72, 128, 20, WHITE);
		DrawText(TextFormat("Matlab"), screenWidth/(5/2)+128, 128, 20, WHITE);

		// TODO: Input handling


		mk_draw(&ctx);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}
