/* See LICENSE file for copyright and license details. */

const unsigned int interval     = 1000;
static const char unknown_str[] = "NULL";

#define MAXLEN 2048

static const struct arg args[] = {
	/* function    format     argument */
	{ uptime,      "%s        ",   NULL },	 
	{ cpu_perc,    "%s%%        ",   NULL },	
	{ ram_perc,    "%s%%        ", NULL },
	{ datetime,    "%s",      "%a %d %b  %l:%M%p" },
};
