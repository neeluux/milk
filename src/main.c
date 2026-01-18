#include "context.h"
#include "frontend/frontend.h"
#include <stdio.h>
#include <raylib.h>
#include "color.h"

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

		DrawRectangle(0, 0, screenWidth/5, screenHeight, LIMEGREEN);
		DrawRectangle(screenWidth/5, 0, screenWidth/5, screenHeight, RAINFORESTGREEN);
		DrawRectangle(screenWidth/5*2, 0, screenWidth/5, screenHeight, MODERATEPINK);
		DrawRectangle(screenWidth/5*3, 0, screenWidth/5, screenHeight, MODERATEBLUE);
		DrawRectangle(screenWidth/5*4, 0, screenWidth/5, screenHeight, BERRYPURPLE);

		DrawText(TextFormat("+C0"), screenWidth/5*4+7, 360, 80, WHITE);

		/* TODO: find an equation to get text in the center of a rectangle
			 using only the screen width and height */
		DrawText(TextFormat("SolidWorks"), screenWidth/(5*5)-6, 128, 20, WHITE);
		DrawText(TextFormat("AutoCAD"), screenWidth/(5/1)+35, 128, 20, WHITE);
		DrawText(TextFormat("Water Damage"), screenWidth/(5/2)-72, 128, 20, WHITE);
		DrawText(TextFormat("Matlab"), screenWidth/(5/2)+128, 128, 20, WHITE);
		
		// TODO: Instantiate the structs


		// TODO: Input handling


		mk_draw(&ctx);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}
