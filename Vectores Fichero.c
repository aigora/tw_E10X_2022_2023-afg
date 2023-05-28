#include <stdio.h>

void vectores_energia(char* fichero, float v[24], int x);

int main () {
	
	float hidraulica[24], turbinacion[24], nuclear[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float eolica[24], solarfoto[24], solarter[24], renovables[24], cogeneracion[24], residuosnor[24], residuosr[24], generaciontotal[24];
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    
	
	return 0;
}

void vectores_energia(char* fichero, float v[24], int x) {
	
    FILE* fp = fopen(fichero, "r");
    if (fp == NULL) {
        printf("No se ha podido abrir el fichero.\n");
        return;
    }
    
    int i;
    for (i = 0; i < x; i++) {
        fscanf(fp, "%*[^\n]%*c");
    }

    if (fscanf(fp, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(fp, "%f,", &v[i]);
        }
    }

    fclose(fp);
    
}
