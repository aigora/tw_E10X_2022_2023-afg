#include <stdio.h>

void imprimir_vectores (float v[24], int exp, char* fichero2);

int main () { 
	
	void imprimir_vectores (float v[24], int exp, char* fichero2);
	
	return 0;
}

void imprimir_vectores(float v[24], int exp, char* fichero2) {
	
    int i;
    
	if (exp == 1) {
        FILE* fp = fopen (fichero2, "w");
        if (fp == NULL) {
            printf ("Error al abrir el archivo.\n");
            return;
        }
        
        for (i = 0; i < 24; i++) {
            fprintf (fp, "%f ", v[i]);
        }
        fclose (fp);
        
        printf ("Vector exportado correctamente al archivo: Exportacion_datos\n");
    } 
	else if (exp == 2) {
        for (i = 0; i < 24; i++) {
            printf("%f ", v[i]);
        }
        printf ("\n\n");
    }
	else {
        printf ("Opcion invalida.\n");
    }
}

