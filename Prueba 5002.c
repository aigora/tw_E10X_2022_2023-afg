#include <stdio.h>

int main() {
	int i;
    float hidraulica[24], turbinacion[24], nuclaer[24];

    FILE *pf;
    pf = fopen("c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv", "r");
    if (pf == NULL) {
        printf("No se ha podido abrir el fichero.\n");
        return 1;
    }

    // Hidraulica
    for (i = 0; i < 5; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &hidraulica[i]);
        }
    }
    
    
    // Turbinacion
    for (i = 0; i < 6; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinacion[i]);
        }
    }


    // Nuclear
    for (i = 0; i < 7; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &nuclaer[i]);
        }
    }

    fclose(pf);

    printf("Hidraulica:\n");
    for (i = 0; i < 24; i++) {
        printf("%f ", hidraulica[i]);
    }
    printf("\n\n");
    
    printf("Turbinacion:\n");
    for (i = 0; i < 24; i++) {
        printf("%f ", turbinacion[i]);
    }
    printf("\n\n");
    
    printf("Nuclaer:\n");
    for (i = 0; i < 24; i++) {
        printf("%f ", nuclaer[i]);
    }
    printf("\n\n");

    return 0;
}

