#include <stdio.h>

int main() {
    float hidraulica[24], nuclear[24];
    // Otros vectores para almacenar los valores correspondientes a diferentes tecnologías
    
    int i;
    char c;
    int nLineas = 0;

    FILE *pf;
    pf = fopen("c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv", "r");
    if (pf == NULL) {
        printf("No se ha podido abrir el fichero.\n");
        return 1;
    }

    // Saltar las líneas de encabezado y las primeras 5 líneas
    while (nLineas < 5 && fscanf(pf, "%*[^\n]%*c") != EOF) {
        nLineas++;
    }
    
    // Leer los valores del archivo y guardarlos en los vectores correspondientes
    if (nLineas == 6) {
        fscanf(pf, "%*[^,],%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f", &hidraulica[0], &hidraulica[1], &hidraulica[2], 
		&hidraulica[3], &hidraulica[4], &hidraulica[5], &hidraulica[6], &hidraulica[7], &hidraulica[8], &hidraulica[9], &hidraulica[10], &hidraulica[11], 
		&hidraulica[12], &hidraulica[13], &hidraulica[14], &hidraulica[15], &hidraulica[16], &hidraulica[17], &hidraulica[18], &hidraulica[19], 
		&hidraulica[20], &hidraulica[21], &hidraulica[22] , &hidraulica[23], &hidraulica[24]);
    }
    
    fclose(pf);

    printf("Generación por tecnologia (Hidráulica):\n");
    for (i = 0; i < 24; i++) {
        printf("%f ", hidraulica[i]);
        // Imprimir los valores de los otros vectores también
    }
    printf("\n\n");

    return 0;
}


