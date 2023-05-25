#include <stdio.h>

int main() {
	
    float hidraulica[24], turbinacion[24], nuclaer[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float solarfoto[24];
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    int i;
       
    FILE *pf;
    pf = fopen(fichero1, "r");
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
    
    // Carbon
    for (i = 0; i < 8; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &carbon[i]);
        }
    }
    
    // Motor diesel
    for (i = 0; i < 9; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &motor[i]);
        }
    }
    
    
    // Turbina gas
    for (i = 0; i < 10; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinag[i]);
        }
    }


    // Turbina vapor
    for (i = 0; i < 11; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinav[i]);
        }
    }
    
    // Ciclo combinado
    for (i = 0; i < 12; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &ciclo[i]);
        }
    }
    
    // Hidroelectrica
    for (i = 0; i < 13; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &hidroelectrica[i]);
        }
    }
    
    // Solarfotovoltaica
    for (i = 0; i < 14; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &solarfoto[i]);
        }
    }

    fclose(pf);
    
    
    
    // Imprimir vectores

    printf("Hidraulica: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", hidraulica[i]);
    }
    printf("\n\n");
    
    printf("Turbinacion: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", turbinacion[i]);
    }
    printf("\n\n");
    
    printf("Nuclaer: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", nuclaer[i]);
    }
    printf("\n\n");
    
    printf("Carbon: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", carbon[i]);
    }
    printf("\n\n");
    
    printf("Motor diesel: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", motor[i]);
    }
    printf("\n\n");
    
    printf("Turbina gas: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", turbinag[i]);
    }
    printf("\n\n");
    
    printf("Turbina vapor: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", turbinav[i]);
    }
    printf("\n\n");
    
    printf("Ciclo combinado: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", ciclo[i]);
    }
    printf("\n\n");
    
    printf("Hidroelctrica: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", hidroelectrica[i]);
    }
    printf("\n\n");
    
    printf("Solar fotovoltaica: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", solarfoto[i]);
    }
    printf("\n\n");
    
    

    return 0;
}

