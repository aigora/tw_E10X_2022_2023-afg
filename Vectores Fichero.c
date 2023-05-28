#include <stdio.h>

void vectores_energia(char* fichero, float v[24], int x);

int main () {
	
	float hidraulica[24], turbinacion[24], nuclear[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float eolica[24], solarfoto[24], solarter[24], renovables[24], cogeneracion[24], residuosnor[24], residuosr[24], generaciontotal[24];
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    
    vectores_energia(fichero1, hidraulica, 5);
    vectores_energia(fichero1, turbinacion, 6);
    vectores_energia(fichero1, nuclear, 7);
    vectores_energia(fichero1, carbon, 8);
    vectores_energia(fichero1, motor, 9);
    vectores_energia(fichero1, turbinag, 10);
    vectores_energia(fichero1, turbinav, 11);
    vectores_energia(fichero1, ciclo, 12);
    vectores_energia(fichero1, hidroelectrica, 13);
    vectores_energia(fichero1, eolica, 14);
    vectores_energia(fichero1, solarfoto, 15);
    vectores_energia(fichero1, solarter, 16);
    vectores_energia(fichero1, renovables, 17);
    vectores_energia(fichero1, cogeneracion, 18);
    vectores_energia(fichero1, residuosnor, 19);
    vectores_energia(fichero1, residuosr, 20);
    vectores_energia(fichero1, generaciontotal, 21);
	
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
