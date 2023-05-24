#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define MAX_LINES 30

int main() {
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    char lines[MAX_LINES][MAX_LINE_LENGTH];
    int i, num_lines = 0;

    char filename[] = "C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    fgets(line, sizeof(line), fp); // Leer la primera línea y descartarla

    while (fgets(line, sizeof(line), fp) != NULL && num_lines < MAX_LINES) {
        int length = strlen(line);
        if (line[length - 1] == '\n') {
            line[length - 1] = '\0'; // Reemplazar el carácter de nueva línea por el carácter nulo
        }
        strcpy(lines[num_lines], line);
        num_lines++;
    }

    fclose(fp);

    for (i = 0; i < num_lines; i++) {
        printf("%s\n", lines[i]);
    }

    return 0;
}


