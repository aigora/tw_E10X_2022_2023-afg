#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char linea[500];
    double hidraulica[25], turbinacion_bombeo[25];
    int i = 0, num_hidraulica = 0, num_turbinacion_bombeo = 0;

    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }
    
    // VECTOR HIDRAULICA

    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 6) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &hidraulica[num_hidraulica]);
                    num_hidraulica++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_hidraulica; i++) {
        printf("%lf ", hidraulica[i]);
    }

    printf("\n");
    printf("\n");
    
    
    // VECTOR TURBINACION BOMBEO
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 7) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &turbinacion_bombeo[num_turbinacion_bombeo]);
                    num_turbinacion_bombeo++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_turbinacion_bombeo; i++) {
        printf("%lf ", turbinacion_bombeo[i]);
    }

    printf("\n");

    return 0;
}

