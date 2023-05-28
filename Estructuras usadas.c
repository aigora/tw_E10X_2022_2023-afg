//Estructuras usadas

#include <stdio.h>

typedef struct {
	int ano;
	int mes;
}fecha;

typedef struct {
	int energia;
	int eleccion;
	int eleccion2;
	fecha e, b;
}variables;

typedef struct {
	float datos [24];
}fichero;

int main () {
	
	variables m, ge, ce, bd, od, db; //Para las variables que se repetian en cada opcion del menu
	
	fichero energias[17]; //Para los datos del fichero
	
	variables funcion; //Dentro de la funcion buscar_datos
	
	return 0;
}
