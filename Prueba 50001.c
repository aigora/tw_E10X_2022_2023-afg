#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    float hidraulica[24];
    int i;
    
    char fichero1[] = "C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";

    fp = fopen(fichero1, "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }
    
    char buffer[256];
    fgets(buffer, sizeof(buffer), fp); // Leer la primera línea y descartarla
    
    for (i = 0; i < 24; i++) {
        fgets(buffer, sizeof(buffer), fp); // Leer una línea completa del archivo
        
        // Separar los valores utilizando strtok y convertirlos a float
        char *token = strtok(buffer, ",");
        int j = 0;
        while (token != NULL) {
            if (j == i + 1) { // El valor que corresponde a la columna i+1
                hidraulica[i] = atof(token);
                break;
            }
            token = strtok(NULL, ",");
            j++;
        }
    }
    
    fclose(fp);
    
	for (i = 0; i < 24; i++) {
    	printf("%.6f\n", hidraulica[i]);
	}

    
    return 0;
}

