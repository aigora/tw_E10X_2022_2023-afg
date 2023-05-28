#include <stdio.h>
#include <math.h>

void vectores_energia (char* fichero, float v[24], int x); //Esta funcion coge los datos del fichero y los guarda vectores.
void informacion_general (); //En esta funcion esta el texto de la informacion general, para que no ocupe espacio en el main.
void imprimir_vectores (float v[24], int exp, char* fichero2); //Hace lo que dice el nombre, imprimir un vector.
void imprimir_energia (float v[24], int ano, int total, int exp, char* fichero2); //Imprime un calculo estadistico u otro en funcion de lo que haya elegido el usuario.
void imprimir_energia_mes (float v[24], int mes, int ano, int total, int exp, char* fichero2); //Hace lo mismo, pero hace los calculos con todas las energias.
void buscar_datos (float v[24]); //La funcion imprime el dato que haya elgido el usuario
void ordenar_de_menor_a_mayor (float v [24]); //Al usuario se le da la opcion de ordenar los datos de menor a mayor o viceversa.
void ordenar_de_mayor_a_menor (float v [24]); 
void diagrama (float v[24], int exp, char* fichero2); //Imprime el diagrama de barras de la energia que haya elegido el usuario.

typedef struct {
	int ano;
	int mes;
}fecha;

typedef struct {
	int energia;
	int eleccion;
	int eleccion2;
	fecha e, b;  //e: Calculos estadisticos; b: Busqueda de datos
}variables;

typedef struct {
	float datos [24];
}fichero;

int main() {
	
	variables m, ge, ce, bd, od, db; 
	//m: Menu
	//ge: Gasto energetico
	//ce: Calculos estadisticos
	//bd: Busqueda de datos
	//od: Ordenar datos
	//db: Diagrama de barras
	
	//Estas variables estan en una estructura porque teniamos multiples variables diferentes que servian para lo mismo.
	
	fichero energias[17];
	//Cada elemento correspode a cada tipo de energia del fichero, en el mismo orden.
	//Las energias estan inicializadas en un vector de estructuras para no inicializar 17 vectores diferentes.
	
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    //El fichero con los datos usados en el trabajo.
    char fichero2[] = "c:/Users/arnol/Downloads/Exportacion_datos.txt";
    //En la opcion del diagrama de barras el usuario puede elegir exportar el diagrama a este fichero.
    int i, exp;
    
    // Vectores  
    vectores_energia (fichero1, energias[0].datos, 5);
    vectores_energia (fichero1, energias[1].datos, 6);
    vectores_energia (fichero1, energias[2].datos, 7);
    vectores_energia (fichero1, energias[3].datos, 8);
    vectores_energia (fichero1, energias[4].datos, 9);
    vectores_energia (fichero1, energias[5].datos, 10);
    vectores_energia (fichero1, energias[6].datos, 11);
    vectores_energia (fichero1, energias[7].datos, 12);
    vectores_energia (fichero1, energias[8].datos, 13);
    vectores_energia (fichero1, energias[9].datos, 14);
    vectores_energia (fichero1, energias[10].datos, 15);
    vectores_energia (fichero1, energias[11].datos, 16);
    vectores_energia (fichero1, energias[12].datos, 17);
    vectores_energia (fichero1, energias[13].datos, 18);
    vectores_energia (fichero1, energias[14].datos, 19);
    vectores_energia (fichero1, energias[15].datos, 20);
    vectores_energia (fichero1, energias[16].datos, 21);
    
    // Menu
    printf("=== Red Electrica Espanola ===\n\n");
    
    printf ("Bienvenido a este programa acerca de la forma de generacion de energia electrica en Espana durante los anos 2021 y 2022\n\n");
    printf ("\nA continuacion, dispone del menu de opciones que ofrecemos:\n\n");
    do {
        // Imprimir el menú
        
        printf ("1. Informacion general \n");
        printf ("2. Datos del gasto energetico\n");
        printf ("3. Calculos estadisticos\n");
        printf ("4. Buscar datos\n");
        printf ("5. Ordenar elementos\n");
        printf ("6. Diagrama de barras\n");
        printf ("7. Salir\n\n");
        printf ("Ingrese una opcion: ");
        scanf ("%i", &m.eleccion);
        printf ("\n");

        // Realizar acciones según la opción seleccionada
        switch (m.eleccion) {
            case 1:
                informacion_general ();
                break;
            case 2: //gasto energético
                printf("Ha seleccionado la opcion 2: Datos del gasto energetico\n\n"); 
                
                printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
				printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
				printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n(17) Generacion total\n(18) Todas\n\n");

				printf ("Elegir tipo de energia: ");
				scanf ("%i", &ge.energia);
				printf ("\n");
				
				printf ("1 - Exportar\n2 - Imprimir\nElegir opcion: ");
				scanf ("%i", &exp);
				printf ("\n");
						
	
					switch (ge.energia) {
								case 1:
									printf ("(1)  ");
									imprimir_vectores (energias[0].datos, exp, fichero2);
									break;
								case 2:
									printf ("(2)  ");
									imprimir_vectores (energias[1].datos, exp, fichero2);
									break;
								case 3:
									printf ("(3)  ");
									imprimir_vectores (energias[2].datos, exp, fichero2);
									break;
								case 4:
									printf ("(4)  ");
									imprimir_vectores (energias[3].datos, exp, fichero2);
									break;
								case 5:
									printf ("(5)  ");
									imprimir_vectores (energias[4].datos, exp, fichero2);
									break;
								case 6:
									printf ("(6)  ");
									imprimir_vectores (energias[5].datos, exp, fichero2);
									break;
								case 7:
									printf ("(7)  ");
									imprimir_vectores (energias[6].datos, exp, fichero2);
									break;
								case 8:
									printf ("(8)  ");
									imprimir_vectores (energias[7].datos, exp, fichero2);
									break;
								case 9:
									printf ("(9)  ");
									imprimir_vectores (energias[8].datos, exp, fichero2);
									break;
								case 10:
									printf ("(10)  ");
									imprimir_vectores (energias[9].datos, exp, fichero2);
									break;
								case 11:
									printf ("(11)  ");
									imprimir_vectores (energias[10].datos, exp, fichero2);
									break; 
								case 12:
									printf ("(12)  ");
									imprimir_vectores (energias[11].datos, exp, fichero2);
									break; 
								case 13:
									printf ("(13)  ");
									imprimir_vectores (energias[12].datos, exp, fichero2);
									break;
								case 14:
									printf ("(14)  ");
									imprimir_vectores (energias[13].datos, exp, fichero2);
									break;
								case 15:
									printf ("(15)  ");
									imprimir_vectores (energias[14].datos, exp, fichero2);
									break;
								case 16:
									printf ("(16)  ");
									imprimir_vectores (energias[15].datos, exp, fichero2);
									break;
								case 17:
									printf ("(17)  ");
									imprimir_vectores (energias[16].datos, exp, fichero2);
									break;
								case 18:
									printf ("(1)  ");
									imprimir_vectores (energias[0].datos, exp, fichero2);
									
									printf ("(2)  ");
									imprimir_vectores (energias[1].datos, exp, fichero2);
									
									printf ("(3)  ");
									imprimir_vectores (energias[2].datos, exp, fichero2);
									
									printf ("(4)  ");
									imprimir_vectores (energias[3].datos, exp, fichero2);
									
									printf ("(5)  ");
									imprimir_vectores (energias[4].datos, exp, fichero2);
									
									printf ("(6)  ");
									imprimir_vectores (energias[5].datos, exp, fichero2);
									
									printf ("(7)  ");
									imprimir_vectores (energias[6].datos, exp, fichero2);
									
									printf ("(8)  ");
									imprimir_vectores (energias[7].datos, exp, fichero2);
									
									printf ("(9)  ");
									imprimir_vectores (energias[8].datos, exp, fichero2);
									
									printf ("(10)  ");
									imprimir_vectores (energias[9].datos, exp, fichero2);
									
									printf ("(11)  ");
									imprimir_vectores (energias[10].datos, exp, fichero2);
									
									printf ("(12)  ");
									imprimir_vectores (energias[11].datos, exp, fichero2);
									
									printf ("(13)  ");
									imprimir_vectores (energias[12].datos, exp, fichero2);
									
									printf ("(14)  ");
									imprimir_vectores (energias[13].datos, exp, fichero2);
									
									printf ("(15)  ");
									imprimir_vectores (energias[14].datos, exp, fichero2);
									
									printf ("(16)  ");
									imprimir_vectores (energias[15].datos, exp, fichero2);
									
									printf ("(17)  ");
									imprimir_vectores (energias[16].datos, exp, fichero2);
									break;
								default: 
									printf ("Energia incorrecta. \n\n");
									break;
								}
                break;
  			case 3:
				printf ("Has seleccionado la opcion 3: Calculos estadisticos\n\n"); //cálculos estadísticos
				
				printf ("1 - Calcular energia generada en un ano\n2 - Calcular energia generada en un mes\n");
				printf ("Elegir opcion: ");
				scanf ("%i", &ce.eleccion);
				printf ("\n");
				
				switch (ce.eleccion){
					case 1:
					printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
					printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
					printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n\n");
					printf ("Tipo de energia: ");
					scanf ("%i", &ce.energia);
					printf ("\n");
					
					printf ("Insertar ano (Si se desea calcular el de los anos 2021 y 2022 conjuntamnete introducir 2122): ");
					scanf ("%i", &ce.e.ano);
					printf ("\n");
					
					printf ("1 - Calcular energia total\n2 - Calcular energia media\n3 - Calcular energia total y media\n");
					printf ("Elegir opcion: ");
					scanf ("%i", &ce.eleccion2);
					printf ("\n");
					
					printf ("1 - Exportar\n2 - Imprimir\nElegir opcion: ");
					scanf ("%i", &exp);
					printf ("\n");
						
						switch (ce.eleccion2) {
    						case 1:
        						imprimir_energia (energias[0].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 2:
        						imprimir_energia (energias[1].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
       							break;
   							case 3:
        						imprimir_energia (energias[2].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
      							break;
   							case 4:
        						imprimir_energia (energias[3].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 5:
        						imprimir_energia (energias[4].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 6:
        						imprimir_energia (energias[5].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 7:
        						imprimir_energia (energias[6].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 8:
        						imprimir_energia (energias[7].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 9:
        						imprimir_energia (energias[8].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
       							break;
    						case 10:
        						imprimir_energia (energias[9].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 11:
     							imprimir_energia (energias[10].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
      							break;
    						case 12:
        						imprimir_energia (energias[11].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        							break;
    						case 13:
       							imprimir_energia (energias[12].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 14:
        						imprimir_energia (energias[13].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 15:
        						imprimir_energia (energias[14].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						case 16:
        						imprimir_energia (energias[15].datos, ce.e.ano, ce.eleccion2, exp, fichero2);
        						break;
    						default:
        						printf ("Energia incorrecta. \n\n");
        						break;			
						}
					break;	
					case 2:
						printf ("Insertar mes: ");
						scanf ("%i", &ce.e.mes);
						printf ("\n");
						
						printf ("Insertar ano: ");
						scanf ("%i", &ce.e.ano);
						printf ("\n");
						
						printf ("1 - Calcular energia total\n2 - Calcular energia media\n3 - Calcular energia total y media\n");
						printf ("Elegir opcion: ");
						scanf ("%i", &ce.eleccion2);
						printf ("\n");
						
						printf ("1 - Exportar\n2 - Imprimir\nElegir opcion: ");
						scanf ("%i", &exp);
						printf ("\n");
						
						imprimir_energia_mes (energias[16].datos, ce.e.mes, ce.e.ano, ce.eleccion2, exp, fichero2);
                		break;
                }
                break; // ESTE
            case 4:
                printf ("Ha seleccionado la opcion 4: Busqueda de datos\n\n"); //Busqueda de datos
                printf ("Elija que dato quiere consultar:\n\n");
    			printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
				printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
				printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n(17) Generacion total\n");
				scanf ("%i", &bd.energia);
	
				switch (bd.energia) {
					case 1:
						buscar_datos (energias[0].datos);
						break;
					case 2:
						buscar_datos (energias[1].datos);
						break;
					case 3:
						buscar_datos (energias[2].datos);
						break;
					case 4:
						buscar_datos (energias[3].datos);
						break;
					case 5:
						buscar_datos (energias[4].datos);
						break;
					case 6:
						buscar_datos (energias[5].datos);
						break;
					case 7:
						buscar_datos (energias[6].datos);
						break;
					case 8:
						buscar_datos (energias[7].datos);
						break;
					case 9:
						buscar_datos (energias[8].datos);
						break;
					case 10:
						buscar_datos (energias[9].datos);
						break;
					case 11:
						buscar_datos (energias[10].datos);
						break;
					case 12:
						buscar_datos (energias[11].datos);
						break;
					case 13:
						buscar_datos (energias[12].datos);
						break;
					case 14:
						buscar_datos (energias[13].datos);
						break;
					case 15:
						buscar_datos (energias[14].datos);
						break;
					case 16:
						buscar_datos (energias[15].datos);
						break;
					case 17:
						buscar_datos (energias[16].datos);
						break;
					default:
						printf("Energia incorrecta. \n\n");
						break;														
				}
                break; 
            case 5:
            	printf ("Ha seleccionado la opcion 5: Ordenar datos\n\n"); //Ordenar datos
                printf ("Determine que datos quiere ordenar:\n\n");
    			printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
				printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
				printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n(17) Generacion total\n");
				scanf ("%i", &od.energia);
				
				switch (od.energia) {
					case 1:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
			
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[0].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[0].datos);
						}
						break;
					case 2:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[1].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[1].datos);
						}
						break;
					case 3:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[2].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[2].datos);
						}
						break;
					case 4:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[3].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[3].datos);
						}
						break;
					case 5:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[4].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[4].datos);
						}
						break;
					case 6:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[5].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[5].datos);
						}
						break;
					case 7:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[6].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[6].datos);
						}
						break;
					case 8:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[7].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[7].datos);
						}
						break;
					case 9:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[8].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[8].datos);
						}
						break;
					case 10:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[9].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[9].datos);
						}
						break;
					case 11:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[10].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[10].datos);
						}
						break;
					case 12:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[11].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[11].datos);
						}
						break;
					case 13:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[12].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[12].datos);
						}
						break;
					case 14:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[13].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[13].datos);
						}
						break;
					case 15:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[14].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[14].datos);
						}
						break;
					case 16:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[15].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[15].datos);
						}
						break;
					case 17:
						printf ("1 - De menor a mayor\n2 - De mayor a menor\n");
						scanf ("%i", &od.eleccion);
						
						if (od.eleccion == 1) {
							ordenar_de_menor_a_mayor (energias[16].datos);
						}
						else if (od.eleccion == 2) {
							ordenar_de_mayor_a_menor (energias[16].datos);
						}
						break;
						}
					default:
						printf("Energia incorrecta. \n\n");
						break;
                break;
            case 6:
            	printf ("Ha seleccionado la opcion 6:Diagrama de barras\n\n"); 
                
                printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
				printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
				printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n(17) Generacion total\n");

				printf("Elegir tipo de energia: ");
				scanf("%i", &db.energia);
				printf("\n");
				
				printf ("1 - Exportar\n2 - Imprimir\nElegir opcion: ");
				scanf ("%i", &exp);
				printf ("\n");
	
					switch (db.energia) {
						case 1:
							printf ("Hidraulica (1) \n\n");
							diagrama (energias[0].datos, exp, fichero2);
							break;
						case 2:
							printf ("Turbinacion Bombeo (2) \n\n");
							diagrama (energias[1].datos, exp, fichero2);
							break;
						case 3:
							printf ("Nuclear (3) \n\n");
							diagrama (energias[2].datos, exp, fichero2);
							break;
						case 4:
							printf ("Carbon (4) \n\n");
							diagrama (energias[3].datos, exp, fichero2);
							break;
						case 5:
							printf ("Motores Diesel (5) \n\n");
							diagrama (energias[4].datos, exp, fichero2);
							break;
						case 6:
							printf ("Turbina Gas (6) \n\n");
							diagrama (energias[5].datos, exp, fichero2);
							break;
						case 7:
							printf ("Turbina Vapor (7) \n\n");
							diagrama (energias[6].datos, exp, fichero2);
							break;
						case 8:
							printf ("Ciclo Combinado (8) \n\n");
							diagrama (energias[7].datos, exp, fichero2);
							break;
						case 9:
							printf ("Hidroelectrica (9) \n\n");
							diagrama (energias[8].datos, exp, fichero2);
							break;
						case 10:
							printf ("Eolica (10) \n\n");
							diagrama (energias[9].datos, exp, fichero2);
							break;
						case 11:
							printf ("Solar Fotovoltaica (11) \n\n");
							diagrama (energias[10].datos, exp, fichero2);
							break;
						case 12:
							printf ("Solar Termica (12) \n\n");
							diagrama (energias[11].datos, exp, fichero2);
							break;
						case 13:
							printf ("Otras renovables (13) \n\n");
							diagrama (energias[12].datos, exp, fichero2);
							break;
						case 14:
							printf ("Cogeneracion (14) \n\n");
							diagrama (energias[13].datos, exp, fichero2);
							break;
						case 15:
							printf ("Residuos no Renovables (15) \n\n");
							diagrama (energias[14].datos, exp, fichero2);
							break;
						case 16:
							printf ("Residuos Renovables (16) \n\n");
							diagrama (energias[15].datos, exp, fichero2);
							break;
						case 17:
							printf ("Generacion Total (17) \n\n");
							diagrama (energias[16].datos, exp, fichero2);
						default:
							printf ("Energia incorrecta\n\n");
							break;
					}
        }	        		
    } while (m.eleccion != 7);
    printf ("Saliendo del programa...\n");
    
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

void informacion_general () {
	
	printf ("Ha seleccionado la opcion 1: Informacion general\n\n");
                
    printf ("Durante los anos 2021 y 2022, Espana combino fuentes convencionales y renovables en su generacion de energia electrica.\nDestacaron la energia"); 
	printf ("eolica y solar como principales fuentes renovables.\nSe instalaron nuevos parques eolicos y plantas solares, aprovechando los recursos naturales del pais.\n"); 
	printf ("Aunque las fuentes convencionales como la energia nuclear y los combustibles fosiles tuvieron un papel importante,\nse observo una disminucion gradual en la"); 
	printf ("generacion de electricidad a partir del carbon.\nSe realizaron avances en infraestructuras de transporte y almacenamiento de energia, implementando tecnologias de ");
	printf ("almacenamiento\npara una gestion eficiente de la energia renovable.\n\nEn resumen, Espana avanzo hacia una generacion mas sostenible, combinando fuentes renovables y");
	printf ("convencionales para satisfacer la demanda\nelectrica y reducir las emisiones de gases de efecto invernadero.\n\n");
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

void imprimir_energia(float v[24], int ano, int total, int exp, char* fichero2) {
	
    float suma = 0, desviacion = 0, media;
    int i;

    for (i = 0; i < 24; i++) {
        suma = suma + v[i];
    }

    media = suma / 24;

    for (i = 0; i < 24; i++) {
        desviacion = desviacion + pow(v[i] - media, 2);
    }
    
    desviacion = sqrt (desviacion / 24);

    if (total == 1 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2021: %f\n", suma);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2021: %f\n", suma);
        }
    } else if (total == 2 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia media generada en 2021: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2021: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia media generada en 2021: %f\n", media);
            printf ("Desviacion tipica en 2021: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2021: %f\n", suma);
                fprintf (fp, "Energia media generada en 2021: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2021: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2021: %f\n", suma);
            printf ("Energia media generada en 2021: %f\n", media);
            printf ("Desviacion tipica en 2021: %f\n", desviacion);
        }
    } else if (total == 1 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2022: %f\n", suma);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2022: %f\n", suma);
        }
    } else if (total == 2 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia media generada en 2022: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2022: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia media generada en 2022: %f\n", media);
            printf ("Desviacion tipica en 2022: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2022: %f\n", suma);
                fprintf (fp, "Energia media generada en 2022: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2022: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2022: %f\n", suma);
            printf ("Energia media generada en 2022: %f\n", media);
            printf ("Desviacion tipica en 2022: %f\n", desviacion);
        }
    } else if (total == 1 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia total generada en 2021 y 2022: %f\n", suma);
                fclose(fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2021 y 2022: %f\n", suma);
        }
    } else if (total == 2 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia media generada en 2021 y 2022: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2021 y 2022: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia media generada en 2021 y 2022: %f\n", media);
            printf ("Desviacion tipica en 2021 y 2022: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2021 y 2022: %f\n", suma);
                fprintf (fp, "Energia media generada en 2021 y 2022: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2021 y 2022: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2021 y 2022: %f\n", suma);
            printf ("Energia media generada en 2021 y 2022: %f\n", media);
            printf ("Desviacion tipica en 2021 y 2022: %f\n", desviacion);
        }
    } else {
        printf ("Fecha invalida.\n");
    }
}

void imprimir_energia_mes(float v[24], int mes, int ano, int total, int exp, char* fichero2) {
    float suma, media;

    if (ano == 2021) {
        ano = 0;
    } else if (ano == 2022) {
        ano = 12;
    }

    suma = v[mes + ano - 1];
    media = suma / 16.0;

    if (mes >= 1 && mes <= 24) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                if (total == 1) {
                    fprintf (fp, "Energia total : %f\n", suma);
                } else if (total == 2) {
                    fprintf (fp, "Energia media: %f\n\n", media);
                } else if (total == 3) {
                    fprintf( fp, "Energia total : %f\n", suma);
                    fprintf (fp, "Energia media: %f\n\n", media);
                }

                fclose (fp); 
                printf ("Datos exportado correctamente al archivo: Exportacion_datos\n\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } 
		else if (exp == 2) {
            if (total == 1) {
                printf ("Energia total : %f\n", suma);
            } else if (total == 2) {
                printf ("Energia media: %f\n\n", media);
            } else if (total == 3) {
                printf ("Energia total : %f\n", suma);
                printf ("Energia media: %f\n\n", media);
            }
        }
    } else {
        printf ("Fecha invalida.\n\n");
    }
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

void diagrama (float v[24], int exp, char* fichero2) {
	
    int i, j;
    float max_v = 0;
    char fechas[][8] = { "01/2021", "02/2021", "03/2021", "04/2021", "05/2021", "06/2021", "07/2021", "08/2021", "09/2021", "10/2021", "11/2021", "12/2021", "01/2022", "02/2022", 
                        "03/2022", "04/2022", "05/2022", "06/2022", "07/2022", "08/2022", "09/2022", "10/2022", "11/2022", "12/2022" };

    for (i = 0; i < 24; i++) {
        if (v[i] > max_v) {
            max_v = v[i];
        }
    }
 
	if (exp == 1) {
        FILE* fp = fopen (fichero2, "w");
        if (fp == NULL) {
            printf ("Error al abrir el archivo.\n");
            return;
        }
        
        for (i = 0; i < 24; i++) {
            fprintf (fp, "%s ", fechas[i]);
            for (j = 0; j < (v[i] / max_v) * 100; j++) {
                fprintf (fp, "|");
            }
            fprintf (fp, "\n");
        }
        fclose (fp);
        
        printf("Diagrama exportado correctamente al archivo: Exportacion_datos\n");
    } 
	else if (exp == 2) {
        for (i = 0; i < 24; i++) {
            printf ("%s ", fechas[i]);
            for (j = 0; j < (v[i] / max_v) * 100; j++) {
                printf ("|");
            }
            printf ("\n");
        }
    }
	else {
        printf ("Opcion invalida.\n");
    }
    
    printf ("\n\n");
}
