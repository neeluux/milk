// context.h - App state and common type definitions
// Copyright (C) 2025, Jonathan Henning

#ifndef _CONTEXT_H
#define _CONTEXT_H

#include "stddef.h"

/* ----- TYPES ----- */
struct mk_ticket_cat {
	const char  *title;
	unsigned int count;
};

/* ----- APP STATE ----- */
struct mk_context {
	struct mk_ticket_cat *ticket_cats;
	size_t n_ticket_cats;

	int screen_width;
	int screen_height;
};

#endif
