#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FUNC 0 // identificamos functions con 0
#define VAR 1 // identificamos variables con 1

// estructura de la linea donde se utiliza el simbolo
typedef struct line_of_usage{
    int line_number;
    struct Line_node* next_line;
};

// estructura de un simbolo
typedef struct symbol {
    char *name;
    int data_type;
    int is_const;
    int arguments; // para funciones
    int dimension; // 1 para arrays, 2 para matriz, 0 para otro
    unsigned int line_of_declaration; // linea del cod donde se declara el simbolo
    line_of_usage *lines_of_usages; //lineas donde se utiliza el simbolo
    void *address; // direccion de memoria
    unsigned int scope; 
    struct symbol *next; // siguiente simbolo de la lista
};

symbol* table = NULL;

void imprimir_tabla() {
    symbol *symbl = table;
    printf("Tabla de Simbolos: ");
    while (symbl != NULL) {
        if (symbl->data_type == VAR) {
            if(symbl->dimension==1){ // variables
                printf("VAR %s(%s, lineas de uso:%s)-> ", symbl->name, symbl->is_const ? "constante":"no constante", symbl->lines_of_usages);
            }else{ // array y matriz
                printf("VAR %s(%s, lineas de uso:%s, dimension: %s)-> ", symbl->name, symbl->is_const ? "constante":"no constante", symbl->lines_of_usages, symbl->dimension);
            }
        }
        else { // funcion
            printf("%s (%s, lineas de uso: %s, argumentos: ) -> ", symbl->name, symbl->is_const ? "constante":"no constante", symbl->lines_of_usages, symbl->arguments);
        } 
        symbl = symbl->next;
    }
}

symbol *put_symbol(char const *name, int type, int obligatory_arguments_counter, int optional_arguments_counter, int is_array) {
    symbol *sym = (symbol *) malloc(sizeof(symbol));
    sym->name = strdup(name);
    sym->data_type = type;
    sym->arguments = obligatory_arguments_counter;
    sym->dimension = is_array;
    sym->next = symbol_table;
    symbol_table = sym;
    print_symbols();
    return sym;
}

symbol *get_symbol(char const *name) {
    for (symbol *s = symbol_table; s; s = s->next) {
        if (strcmp(s->name, name) == 0) {
            return s;
        }
    }
    return NULL;
}

int is_argument_count_correct(char *function_name, char *arguments) {
    char *ptr = arguments;
    symbol *entry = get_symbol(function_name);
    int argument_count = 0;
    if (strlen(arguments) > 0) {
        argument_count++;
        while ((ptr = strchr(ptr, ',')) != NULL) {
            argument_count++;
            ptr++;
        }
        printf("Argument count in function call: %d, obligatory: %d, optional: %d\n", argument_count, entry->obligatory_argument_counter, entry->optional_argument_counter);
    }
    if (argument_count > (entry->obligatory_argument_counter + entry->optional_argument_counter) ||
        argument_count < entry->obligatory_argument_counter) {
        return 0;
    }
    return 1;
}

int is_array_variable(char *variable_name) {
    symbol *entry = get_symbol(variable_name);
    if (entry == NULL) {
        printf("Entry not found for variable %s\n", variable_name);
    }
    return entry->dimension;
}


