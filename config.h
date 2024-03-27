/* See LICENSE file for copyright and license details. */

const unsigned int interval     = 1000;
static const char unknown_str[] = "NULL";

#define MAXLEN 2048

static const struct arg args[] = {
	/* function    format     argument */
	{ cpu_perc,    "%s%% CPU | ",   NULL },	
	{ ram_perc,    "%s%% RAM | ", NULL },
	{ datetime,    "%s",      "%a %d %b  %l:%M%p" },
};
