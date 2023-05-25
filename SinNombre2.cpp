#include <stdio.h>

#define NUM_MESES 24
#define NUM_TECNOLOGIAS 15

int main() {
    double generacion[NUM_TECNOLOGIAS][NUM_MESES];

    // Aquí se insertan los datos en la matriz generacion
    // Puedes copiar los valores de la tabla proporcionada en el enunciado

    // Imprimir los valores de generacion
    for (int i = 0; i < NUM_TECNOLOGIAS; i++) {
        for (int j = 0; j < NUM_MESES; j++) {
            printf("%.6f\t", generacion[i][j]);
        }
        printf("\n");
    }

    return 0;
}

