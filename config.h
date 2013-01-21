/*
 * @author dhuertas
 * @email huertas.dani@gmail.com
 */
#include <stdint.h>

typedef struct config {
	char *server_name;
	uint16_t listen_port;
	uint8_t output_level;
	char *document_root;
	char *http_version;
	char *charset;
	char **directory_index;
	uint16_t directory_index_count;
} config_t;

void read_config(char *conf_file_name);