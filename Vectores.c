#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_COLUMN_COUNT 24
#define MAX_TITLE_LENGTH 128
#define MAX_DATE_LENGTH 8
#define MAX_MAGNITUDE_LENGTH 4

int main() {
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    char title[MAX_TITLE_LENGTH];
    char system[MAX_TITLE_LENGTH];
    char magnitude[MAX_MAGNITUDE_LENGTH];
    char date[MAX_DATE_LENGTH];
    double data[MAX_COLUMN_COUNT][MAX_COLUMN_COUNT];
    int row = 0, col = 0;
    int i, j;

    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo.\n");
        exit(EXIT_FAILURE);
    }

    // Leer el título del archivo
    fgets(line, MAX_LINE_LENGTH, fp);
    sscanf(line, "%[^,],%[^,],%[^,]", title, system, magnitude);

    // Saltar las siguientes dos líneas que no contienen datos
    fgets(line, MAX_LINE_LENGTH, fp);
    fgets(line, MAX_LINE_LENGTH, fp);

    // Leer los datos de cada línea
    while (fgets(line, MAX_LINE_LENGTH, fp)) {
        // Leer la fecha
        sscanf(line, "%[^,],", date);

        // Leer los datos de cada mes
        col = 0;
        char *tok = strtok(line, ",");
        while (tok != NULL) {
            // Ignorar la primera columna que contiene las fechas
            if (col > 0) {
                sscanf(tok, "%lf", &data[row][col - 1]);
            }
            tok = strtok(NULL, ",");
            col++;
        }
        row++;
    }

    // Imprimir los datos almacenados
    printf("%s\n%s\n%s\n", title, system, magnitude);
    printf("Fecha\t");
    for (i = 0; i < col - 1; i++) {
        printf("%d/%d\t", i % 12 + 1, i / 12 + 2021);
    }
    printf("\n");
    for (i = 0; i < row; i++) {
        printf("%s\t", date);
        for (j = 0; j < col - 1; j++) {
            printf("%.2f\t", data[i][j]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}






   



