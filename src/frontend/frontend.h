#ifndef _FRONTEND_H
#define _FRONTEND_H

#include "../context.h"
#include "../color.h"

void mk_draw(const struct mk_context *ctx);
void draw_rects(int rectangles, int screenWidth, int screenHeight);

#endif
