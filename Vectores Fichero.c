#include <stdio.h>

void vectores_energia (char* fichero, float v[24], int x);

int main () {
	
	char fichero1[] = "c:/Users/Fernanda/OneDrive/Desktop/Trabajo/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
	
	void vectores_energia (char* fichero, float v[24], int x);
	
	return 0;
}

void vectores_energia (char* fichero, float v[24], int x) {
	
    FILE* fp = fopen(fichero, "r");
    if (fp == NULL) {
        printf ("No se ha podido abrir el fichero.\n");
        return;
    }
    
    int i;
    for (i = 0; i < x; i++) {
        fscanf (fp, "%*[^\n]%*c");
    }

    if (fscanf(fp, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf (fp, "%f,", &v[i]);
        }
    }

    fclose (fp);
    
}
