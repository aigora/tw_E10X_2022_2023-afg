//Funciones Ordenar datos.

#include <stdio.h>

void ordenar_de_menor_a_mayor (float v[24]);
void ordenar_de_mayor_a_menor (float v[24]);

int main () {
	
	void ordenar_de_menor_a_mayor (float v[24]);
	void ordenar_de_mayor_a_menor (float v[24]);
	
	return 0;
}

void ordenar_de_menor_a_mayor (float v[24]) {
	int i, j;
	float k;
	
	for (i = 0; i < 24; i++) {
		for (j = i + 1; j < 24; j++) {
			if (v [i] > v [j]) {
				k = v [i];
				v [i] = v [j];
				v [j] = k;
			}
		}
	}
	for (i = 0; i < 24; i++) {
		printf ("%f  ", v [i]);
	}
	printf ("\n\n");
}

void ordenar_de_mayor_a_menor (float v[24]) {
	int i, j;
	float k;
	
	for (i = 0; i < 24; i++) {
		for (j = i + 1; j < 24; j++) {
			if (v [i] < v [j]) {
				k = v [i];
				v [i] = v [j];
				v [j] = k;
			}
		}
	}
	for (i = 0; i < 24; i++) {
		printf ("%f  ", v [i]);
	}
	printf ("\n\n");
}
