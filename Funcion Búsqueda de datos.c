//Funcion Busqueda de Datos

#include <stdio.h>

void buscar_datos (float v[24]);

int main () {
	
	buscar datos ();
	return 0;
	
}

void buscar_datos (float v[24]) {
	
	variables funcion;
	
	int fecha, m1, i;
	
	printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
	printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
	scanf ("%i", &fecha);
	
	switch (fecha) {
		case 2021:
			funcion.b.ano = 1;
			break;
		case 2022:
			funcion.b.ano = 2;
			break;
		case 2122:
			funcion.b.ano = 3;
			break;
	}
	printf ("Mes:\n");
	printf ("Si quiere ver los datos de todos los meses pulse (24)\n");
	scanf ("%i", &funcion.b.mes);
	funcion.b.mes = funcion.b.mes - 1;
			
	if (funcion.b.ano == 1) {
		if (funcion.b.mes != 23) {
			printf ("%f\n", v [funcion.b.mes]);
		}
		else if (funcion.b.mes == 23) {
			for (i = 0; i < 11; i++) {
				printf ("%f  ", v [i]);
			}
		}
	}
	if (funcion.b.ano == 2) {
		if (funcion.b.mes != 23) {
			funcion.b.mes = funcion.b.mes + 12;
			printf ("%f \n", v [funcion.b.mes]);
		}
		else if (funcion.b.mes == 23) {
			for (i = 12; i < funcion.b.mes; i++) {
				printf ("%f  ", v [i]);
			}	
		}
	}
	if (funcion.b.ano == 3) {
		if (funcion.b.mes != 23) {
			m1 = funcion.b.mes + 12;
			printf ("%f\n", v [funcion.b.mes]);
			printf ("%f\n", v [m1]);
		}
		else if (funcion.b.mes == 23) {
			for (i = 0; i < funcion.b.mes; i++) {
				printf ("%f  ", v [i]);
			}
		}
	}
	
	printf ("\n\n");
}
