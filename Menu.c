#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 1000
#define MAX_CHARS_PER_COL 100

int main() {
    FILE *fp;
    char filename[] = "C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22.csv";
    char line[MAX_COLS * MAX_CHARS_PER_COL];
    char *token;
    char *cols[MAX_COLS];
    int i, num_cols;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("No se pudo abrir el archivo %s.\n", filename);
        return 1;
    }

    while (fgets(line, MAX_COLS * MAX_CHARS_PER_COL, fp) != NULL) {
        num_cols = 0;
        token = strtok(line, ",");
        while (token != NULL) {
            cols[num_cols++] = token;
            token = strtok(NULL, ",");
        }
        for (i = 0; i < num_cols; i++) {
            for (int j = 0; j < strlen(cols[i]); j++) {
                if (cols[i][j] == ',') {
                    cols[i][j] = '.';
                }
                else if (cols[i][j] == '\"') {
                    memmove(&cols[i][j], &cols[i][j + 1], strlen(cols[i]) - j);
                    j--;
                }
            }
            printf("%s ", cols[i]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}
