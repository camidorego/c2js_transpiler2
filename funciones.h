#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

FILE *output_file;

void create_output_file() {
    output_file = fopen("output_file.js", "w");
    if (!output_file) {
        perror("Error al crear el archivo de salida");
        exit(EXIT_FAILURE);
    }
}

void append_in_jsFile(char *s){
	fputs(s, output_file);
}

void write_declaration(const char *declaration) {
    if (output_file) {
        fprintf(output_file, "%s;\n", declaration);
        printf("Writing declaration: %s\n", declaration);
    } else {
        fprintf(stderr, "Archivo de salida no está abierto.\n");
    }
}

void close_output_file() {
    if (output_file) {
        fclose(output_file);
        output_file = NULL;
    } else {
        fprintf(stderr, "Archivo de salida ya está cerrado o nunca se abrió.\n");
    }
}
