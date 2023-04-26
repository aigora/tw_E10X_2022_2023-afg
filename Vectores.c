#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000
#define MAX_NUMBERS_PER_LINE 100

int main() {
	
	int i;
    FILE *input_file = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22.csv", "r");
    if (input_file == NULL) {
        printf("Error al abrir el archivo de entrada.\n");
        exit(1);
    }
    
    char line[MAX_LINE_LENGTH];
    int line_number = 0;
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        line_number++;
        
        // Reemplazar comas por puntos
        char *p = line;
        while (*p) {
            if (*p == ',') {
                *p = '.';
            }
            p++;
        }
        
        // Parsear números entre comillas
        char *numbers[MAX_NUMBERS_PER_LINE];
        int num_numbers = 0;
        char *token = strtok(line, "\"");
        while (token != NULL) {
            if (strlen(token) > 0 && token[0] != ',' && token[0] != '\n') {
                numbers[num_numbers] = token;
                num_numbers++;
            }
            token = strtok(NULL, "\"");
        }
        
        // Crear vector de números
        double vector[MAX_NUMBERS_PER_LINE];
        for (i = 0; i < num_numbers; i++) {
            vector[i] = atof(numbers[i]);
        }
        
        // Imprimir vector
        printf("Vector %d: ", line_number);
        for (i = 0; i < num_numbers; i++) {
            printf("%f ", vector[i]);
        }
        printf("\n");
    }
    
    fclose(input_file);
    return 0;
}

