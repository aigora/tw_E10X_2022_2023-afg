#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 500

int main() {
    FILE* fp;
    char line[MAX];
    char* token;
    char* vect[MAX];
    char** vectors[MAX];
    int i = 0, j, k;
    int num_vectors = 0;

    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22.csv", "r");

    if (fp == NULL) {
        printf("No se pudo abrir el archivo.\n");
        exit(EXIT_FAILURE);
    }

    while (fgets(line, MAX, fp) != NULL) {
    	
        // Reemplazar comas por puntos
        for (j = 0; j < strlen(line); j++) {
            if (line[j] == ',') {
                line[j] = '.';
            }
        }
        
        
        // reemplazar las vocales con tildes
        for (j = 0; j < strlen(line); j++) {
            if (line[j] == 'á') {
                line[j] = 'a';
            }
        }
        
        for (j = 0; j < strlen(line); j++) {
            if (line[j] == 'é') {
                line[j] = 'e';
            }
        }
        
        for (j = 0; j < strlen(line); j++) {
            if (line[j] == 'í') {
                line[j] = 'i';
            }
        }
        
        for (j = 0; j < strlen(line); j++) {
            if (line[j] == 'ó') {
                line[j] = 'o';
            }
        }
        
        for (j = 0; j < strlen(line); j++) {
            if (line[j] == 'ú') {
                line[j] = 'u';
            }
        }


        // Eliminar comillas
        for (j = 0; j < strlen(line); j++) {
            if (line[j] == '\"') {
                for (k = j; k < strlen(line); k++) {
                    line[k] = line[k+1];
                }
            }
        }

        // Crear vector por cada fila
        token = strtok(line, ".");
        while (token != NULL) {
            vect[i] = token;
            i++;
            token = strtok(NULL, ",");
        }

        // Guardar vector en variable
        vectors[num_vectors] = malloc(sizeof(char*) * i);
        for (j = 0; j < i; j++) {
            vectors[num_vectors][j] = vect[j];
        }
        num_vectors++;

        // Reiniciar contador
        i = 0;
    }
  
    fclose(fp); 

    // Imprimir vectores guardados en variables
    for (j = 0; j < num_vectors; j++) {
        for (k = 0; k < i; k++) {
            printf("%s  ", vectors[j][k]);
        }
        printf("\n");
    }

    // Liberar memoria
    for (j = 0; j < num_vectors; j++) {
        free(vectors[j]);
    }
    

    return 0;
} 

