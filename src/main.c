#include "context.h"
#include "frontend/frontend.h"
#include "color.h"
#include <stdio.h>
#include <raylib.h>

#define MK_DEFAULT_SCREEN_WIDTH 850
#define MK_DEFAULT_SCREEN_HEIGHT 450

void mk_print_help(void) {
	printf("Usage: milk <options>\n");
}

void mk_context_init(struct mk_context *ctx) {
	ctx->ticket_cats = NULL;
	ctx->n_ticket_cats = 0;

	ctx->screen_width = MK_DEFAULT_SCREEN_WIDTH;
	ctx->screen_height = MK_DEFAULT_SCREEN_HEIGHT;
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

	// int numRects = 0;
	InitWindow(ctx.screen_width, ctx.screen_height, "milk");

	SetTargetFPS(10);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		/* TODO: find an equation to get text in the center of a rectangle
			 using only the screen width and height */
		/*
		DrawText(TextFormat("+C0"), screenWidth/5*4+7, 360, 80, WHITE);
		DrawText(TextFormat("SolidWorks"), screenWidth/(5*5)-6, 128, 20, WHITE);
		DrawText(TextFormat("AutoCAD"), screenWidth/(5/1)+35, 128, 20, WHITE);
		DrawText(TextFormat("Water Damage"), screenWidth/(5/2)-72, 128, 20, WHITE);
		DrawText(TextFormat("Matlab"), screenWidth/(5/2)+128, 128, 20, WHITE);
		*/
		// TODO: Instantiate the structs


		// TODO: Input handling
		/*
		if (IsKeyPressed(43) == 1) {
			add_item(&numRects);
		}*/

		mk_draw(&ctx);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}
