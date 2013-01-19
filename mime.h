/*
 * @author dhuertas
 * @email huertas.dani@gmail.com
 */
 typedef struct mime {
 	char *ext;
 	char *type;
 } mime_t;
 
static mime_t mime_types[9] = {
	{"bmp",		"image/bmp"},
	{"html", 	"text/html"},
	{"htm", 	"text/html"},
	{"jpg",  	"image/jpeg"},
	{"js", 		"text/javascript"},
	{"json",	"application/json"},
	{"log", 	"text/plain"},
	{"png", 	"image/png"},
	{"txt", 	"text/plain"}
};

static char default_mime_type[] = "text/html";

int get_mime_type(char *ext, char **mime_type);