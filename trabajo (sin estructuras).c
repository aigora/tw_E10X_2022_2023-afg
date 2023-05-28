#include <stdio.h>
#include <math.h>

void vectores_energia(char* fichero, float v[24], int x);
void informacion_general ();
void imprimir_vectores(float v[24], int exp, char* fichero2);
void imprimir_energia(float v[24], int ano, int total, int exp, char* fichero2);
void imprimir_energia_mes(float v[24], int mes, int ano, int total, int exp, char* fichero2);
void buscar_datos (float v[24]);
void ordenar_de_menor_a_mayor (float v [24]);
void ordenar_de_mayor_a_menor (float v [24]);
void diagrama(float v[24], int exp, char* fichero2);

int main() {
	
    float hidraulica[24], turbinacion[24], nuclear[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float eolica[24], solarfoto[24], solarter[24], renovables[24], cogeneracion[24], residuosnor[24], residuosr[24], generaciontotal[24];
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    char fichero2[] = "c:/Users/arnol/Downloads/Exportacion_datos.txt";
    int i;
    
    //Variables busqueda de datos
    int dato;
    
    // Variables ordenar datos
    int eleccion, orden;
    
    // Variables estadisticas 
    int ano, mes, energia, total, exp;
    
    // Variables menu
    int opcion;
    
    // Vectores 
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
    
    // Menu
    printf("=== Red Electrica Espanola ===\n\n");
    
    printf("Bienvenido a este programa acerca de la forma de generacion de energia electrica en Espana durante los anos 2021 y 2022\n\n");
    do {
        // Imprimir el menú
        
        printf("\nA continuacion, dispone del menu de opciones que ofrecemos:\n\n");
        
        printf("1. Informacion general \n");
        printf("2. Datos del gasto energetico\n");
        printf("3. Calculos estadisticos\n");
        printf("4. Buscar datos\n");
        printf("5. Ordenar elementos\n");
        printf("6. Diagrama de barras\n");
        printf("7. Salir\n\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        printf("\n");

        // Realizar acciones según la opción seleccionada
        switch (opcion) {
            case 1:
                informacion_general ();
                break;
            case 2: //gasto energético
                printf("Has seleccionado la opcion 2 (Datos del gasto energetico). \n"); 
                
                printf ("Hidraulica (1)  Turbinacion Bombeo (2)  Nucelar (3)  Carbon (4)  Motores Diesel (5)  Turbina Gas (6)  Turbina Vapor (7) ");
				printf ("Ciclo combinado (8)  Hidroelectrica (9)  Eolica (10)  Solar Fotovoltaica (11)  Solar Térmica (12)  Otras renovables (13) ");
				printf ("Cogeneracion (14)  Residuos no Renovables (15)  Residuos Renovables (16)  Todas (17)\n\n");

				printf("Elegir tipo de energia: ");
				scanf("%i", &energia);
				printf("\n");
				printf("1 - Exportar   2 - Imprimir   Elegir opcion: ");
				scanf("%i", &exp);
				printf("\n");
	
					switch (energia) {
						case 1:
							printf ("(1)  ");
							imprimir_vectores(hidraulica, exp, fichero2);
							break;
						case 2:
							printf ("(2)  ");
							imprimir_vectores(turbinacion, exp, fichero2);
							break;
						case 3:
							printf ("(3)  ");
							imprimir_vectores(nuclear, exp, fichero2);
							break;
						case 4:
							printf ("(4)  ");
							imprimir_vectores(carbon, exp, fichero2);
							break;
						case 5:
							printf ("(5)  ");
							imprimir_vectores(motor, exp, fichero2);
							break;
						case 6:
							printf ("(6)  ");
							imprimir_vectores(turbinag, exp, fichero2);
							break;
						case 7:
							printf ("(7)  ");
							imprimir_vectores(turbinav, exp, fichero2);
							break;
						case 8:
							printf ("(8)  ");
							imprimir_vectores(ciclo, exp, fichero2);
							break;
						case 9:
							printf ("(9)  ");
							imprimir_vectores(hidroelectrica, exp, fichero2);
							break;
						case 10:
							printf ("(10)  ");
							imprimir_vectores(eolica, exp, fichero2);
							break;
						case 11:
							printf ("(11)  ");
							imprimir_vectores(solarfoto, exp, fichero2);
							break;
						case 12:
							printf ("(12)  ");
							imprimir_vectores(solarter, exp, fichero2);
							break;
						case 13:
							printf ("(13)  ");
							imprimir_vectores(renovables, exp, fichero2);
							break;
						case 14:
							printf ("(14)  ");
							imprimir_vectores(cogeneracion, exp, fichero2);
							break;
						case 15:
							printf ("(15)  ");
							imprimir_vectores(residuosnor, exp, fichero2);
							break;
						case 16:
							printf ("(16)  ");
							imprimir_vectores(residuosr, exp, fichero2);
							break;
						case 17:
							printf ("(1)  ");
							imprimir_vectores(hidraulica, exp, fichero2);
							printf ("(2)  ");
							imprimir_vectores(turbinacion, exp, fichero2);
							printf ("(3)  ");
							imprimir_vectores(nuclear, exp, fichero2);
							printf ("(4)  ");
							imprimir_vectores(carbon, exp, fichero2);
							printf ("(5)  ");
							imprimir_vectores(motor, exp, fichero2);
							printf ("(6)  ");
							imprimir_vectores(turbinag, exp, fichero2);
							printf ("(7)  ");
							imprimir_vectores(turbinav, exp, fichero2);
							printf ("(8)  ");
							imprimir_vectores(ciclo, exp, fichero2);
							printf ("(9)  ");
							imprimir_vectores(hidroelectrica, exp, fichero2);
							printf ("(10)  ");
							imprimir_vectores(eolica, exp, fichero2);
							printf ("(11)  ");
							imprimir_vectores(solarfoto, exp, fichero2);
							printf ("(12)  ");
							imprimir_vectores(solarter, exp, fichero2);
							printf ("(13)  ");
							imprimir_vectores(renovables, exp, fichero2);
							printf ("(14)  ");
							imprimir_vectores(cogeneracion, exp, fichero2);
							printf ("(15)  ");
							imprimir_vectores(residuosnor, exp, fichero2);
							printf ("(16)  ");
							imprimir_vectores(residuosr, exp, fichero2);
							break;
						default:
							printf("Energia icnorrecta. \n\n");
							break;
						}
                break;
  			case 3:
				printf("Has seleccionado la opcion 3 (Calculos estadisticos). \n\n"); //cálculos estadísticos
				
				printf("1 - Calcular energia generada en un ano   2 - Calcular energia generada en un mes   Elegir opcion: ");
				scanf("%i", &opcion);
				printf("\n");
				
				switch (opcion){
					case 1:
					printf ("Hidraulica (1)  Turbinacion Bombeo (2)  Nucelar (3)  Carbon (4)  Motores Diesel (5)  Turbina Gas (6)  Turbina Vapor (7) ");
					printf ("Ciclo combinado (8)  Hidroelectrica (9)  Eolica (10)  Solar Fotovoltaica (11)  Solar Térmica (12)  Otras renovables (13) ");
					printf ("Cogeneracion (14)  Residuos no Renovables (15)  Residuos Renovables (16)\n\n");
					printf("Tipo de energia: ");
					scanf("%i", &energia);
					printf("\n");
					printf("Insertar ano (Si se desea calcular el de los anos 2021 y 2022 conjuntamnete introducir '3'): ");
					scanf("%i", &ano);
					printf("\n");
					printf("1 - Calcular energia total   2 - Calcular energia media   3 - Calcular energia total y media   Elegir opcion: ");
					scanf("%i", &total);
					printf("\n");
					printf("1 - Exportar   2 - Imprimir   Elegir opcion: ");
					scanf("%i", &exp);
					printf("\n");
						
						switch (energia) {
    						case 1:
        						imprimir_energia(hidraulica, ano, total, exp, fichero2);
        					break;
    						case 2:
        						imprimir_energia(turbinacion, ano, total, exp, fichero2);
       						break;
   							case 3:
        						imprimir_energia(nuclear, ano, total, exp, fichero2);
      						break;
   							case 4:
        						imprimir_energia(carbon, ano, total, exp, fichero2);
        					break;
    						case 5:
        						imprimir_energia(motor, ano, total, exp, fichero2);
        					break;
    						case 6:
        						imprimir_energia(turbinag, ano, total, exp, fichero2);
        					break;
    						case 7:
        						imprimir_energia(turbinav, ano, total, exp, fichero2);
        					break;
    						case 8:
        						imprimir_energia(ciclo, ano, total, exp, fichero2);
        					break;
    						case 9:
        						imprimir_energia(hidroelectrica, ano, total, exp, fichero2);
       						break;
    						case 10:
        						imprimir_energia(eolica, ano, total, exp, fichero2);
        					break;
    						case 11:
     						   imprimir_energia(solarfoto, ano, total, exp, fichero2);
      						break;
    						case 12:
        						imprimir_energia(solarter, ano, total, exp, fichero2);
        					break;
    						case 13:
       							imprimir_energia(renovables, ano, total, exp, fichero2);
        					break;
    						case 14:
        						imprimir_energia(cogeneracion, ano, total, exp, fichero2);
        					break;
    						case 15:
        						imprimir_energia(residuosnor, ano, total, exp, fichero2);
        					break;
    						case 16:
        						imprimir_energia(residuosr, ano, total, exp, fichero2);
        					break;
    						default:
        						printf("Energia incorrecta. \n\n");
        					break;			
						}
					break;	
					case 2:
					printf("Insertar mes: ");
					scanf("%i", &mes);
					printf("\n");
					printf("Insertar ano: ");
					scanf("%i", &ano);
					printf("\n");
					printf("1 - Calcular energia total   2 - Calcular energia media   3 - Calcular energia total   Elegir opcion: ");
					scanf("%i", &total);
					printf("\n");
					printf("1 - Exportar   2 - Imprimir   Elegir opcion: ");
					scanf("%i", &exp);
					printf("\n");
					imprimir_energia_mes(generaciontotal, mes, ano, total, exp, fichero2);
                	break;
                }
                break;
            case 4:
                printf("Has seleccionado la opcion 4: (Busqueda de datos\n"); //Busqueda de datos
                printf ("Elija que dato quiere consultar:\n");
    			printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
				printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
				printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n(17) Generacion total\n");
				scanf ("%i", &dato);
	
				switch (dato) {
					case 1:
						buscar_datos (hidraulica);
						break;
					case 2:
						buscar_datos (turbinacion);
						break;
					case 3:
						buscar_datos (nuclear);
						break;
					case 4:
						buscar_datos(carbon);
						break;
					case 5:
						buscar_datos (motor);
						break;
					case 6:
						buscar_datos (turbinag);
						break;
					case 7:
						buscar_datos (turbinav);
						break;
					case 8:
						buscar_datos (ciclo);
						break;
					case 9:
						buscar_datos (hidroelectrica);
						break;
					case 10:
						buscar_datos (eolica);
						break;
					case 11:
						buscar_datos (solarfoto);
						break;
					case 12:
						buscar_datos (solarter);
						break;
					case 13:
						buscar_datos (renovables);
						break;
					case 14:
						buscar_datos (cogeneracion);
						break;
					case 15:
						buscar_datos (residuosnor);
						break;
					case 16:
						buscar_datos (residuosr);
						break;
					case 17:
						buscar_datos (generaciontotal);
						break;														
				}
                break;
            case 5:
            	printf ("Has seleccionado la opcion 5: (Ordenar datos)\n"); //Ordenar datos
                printf ("Determine que datos quiere ordenar:\n");
    			printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
				printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
				printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n(17) Generacion total\n");
				scanf ("%i", &eleccion);
				
				switch (eleccion) {
					case 1:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
			
						if (orden == 1) {
							ordenar_de_menor_a_mayor (hidraulica);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (hidraulica);
						}
						break;
					case 2:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (turbinacion);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (turbinacion);
						}
						break;
					case 3:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (nuclear);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (nuclear);
						}
						break;
					case 4:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (carbon);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (carbon);
						}
						break;
					case 5:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (motor);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (motor);
						}
						break;
					case 6:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (turbinag);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (turbinag);
						}
						break;
					case 7:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (turbinav);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (turbinav);
						}
						break;
					case 8:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (ciclo);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (ciclo);
						}
						break;
					case 9:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (hidroelectrica);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (hidroelectrica);
						}
						break;
					case 10:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (eolica);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (eolica);
						}
						break;
					case 11:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (solarfoto);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (solarfoto);
						}
						break;
					case 12:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (solarter);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (solarter);
						}
						break;
					case 13:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (renovables);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (renovables);
						}
						break;
					case 14:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (cogeneracion);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (cogeneracion);
						}
						break;
					case 15:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (residuosnor);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (residuosnor);
						}
						break;
					case 16:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (residuosr);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (residuosr);
						}
						break;
					case 17:
						printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
						scanf ("%i", &orden);
						
						if (orden == 1) {
							ordenar_de_menor_a_mayor (generaciontotal);
						}
						else if (orden == 2) {
							ordenar_de_mayor_a_menor (generaciontotal);
						}
						break;
						}
                break;
            case 6:
            	printf("Has seleccionado la opcion 6 (Diagrama de barras). \n"); 
                
                printf ("Hidraulica (1)  Turbinacion Bombeo (2)  Nucelar (3)  Carbon (4)  Motores Diesel (5)  Turbina Gas (6)  Turbina Vapor (7) ");
				printf ("Ciclo combinado (8)  Hidroelectrica (9)  Eolica (10)  Solar Fotovoltaica (11)  Solar Térmica (12)  Otras renovables (13) ");
				printf ("Cogeneracion (14)  Residuos no Renovables (15)  Residuos Renovables (16)  Todas (17)\n\n");

				printf("Elegir tipo de energia: ");
				scanf("%i", &energia);
				printf("\n");
				printf("1 - Exportar   2 - Imprimir   Elegir opcion: ");
				scanf("%i", &exp);
				printf("\n");
	
					switch (energia) {
						case 1:
							printf ("Hidraulica (1) \n\n");
							diagrama(hidraulica, exp, fichero2);
							break;
						case 2:
							printf ("Turbinacion Bombeo (2) \n\n");
							diagrama(turbinacion, exp, fichero2);
							break;
						case 3:
							printf ("Nuclear (3) \n\n");
							diagrama(nuclear, exp, fichero2);
							break;
						case 4:
							printf ("Carbon (4) \n\n");
							diagrama(carbon, exp, fichero2);
							break;
						case 5:
							printf ("Motores Diesel (5) \n\n");
							diagrama(motor, exp, fichero2);
							break;
						case 6:
							printf ("Turbina Gas (6) \n\n");
							diagrama(turbinag, exp, fichero2);
							break;
						case 7:
							printf ("Turbina Vapor (7) \n\n");
							diagrama(turbinav, exp, fichero2);
							break;
						case 8:
							printf ("Ciclo Combinado (8) \n\n");
							diagrama(ciclo, exp, fichero2);
							break;
						case 9:
							printf ("Hidroelectrica (9) \n\n");
							diagrama(hidroelectrica, exp, fichero2);
							break;
						case 10:
							printf ("Eolica (10) \n\n");
							diagrama(eolica, exp, fichero2);
							break;
						case 11:
							printf ("Solar Fotovoltaica (11) \n\n");
							diagrama(solarfoto, exp, fichero2);
							break;
						case 12:
							printf ("Solar Termica (12) \n\n");
							diagrama(solarter, exp, fichero2);
							break;
						case 13:
							printf ("Otras renovables (13) \n\n");
							diagrama(renovables, exp, fichero2);
							break;
						case 14:
							printf ("Cogeneracion (14) \n\n");
							diagrama(cogeneracion, exp, fichero2);
							break;
						case 15:
							printf ("Residuos no Renovables (15) \n\n");
							diagrama(residuosnor, exp, fichero2);
							break;
						case 16:
							printf ("Residuos Renovables (16) \n\n");
							diagrama(residuosr, exp, fichero2);
							break;
						default:
							printf("Energia icnorrecta. \n\n");
							break;
					}
        }	        		
    } while (opcion != 7);
    printf("Saliendo del programa...\n");
    
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

// FUNCION INFORMACION GENRAL 
void informacion_general () {
	 printf("Has seleccionado la opcion 1 (Informacion general.\n\n");
                
    printf("Durante los anos 2021 y 2022, Espana combino fuentes convencionales y renovables en su generacion de energia electrica.\nDestacaron la energia"); 
	printf("eolica y solar como principales fuentes renovables.\nSe instalaron nuevos parques eolicos y plantas solares, aprovechando los recursos naturales del pais.\n"); 
	printf("Aunque las fuentes convencionales como la energia nuclear y los combustibles fosiles tuvieron un papel importante,\nse observo una disminucion gradual en la"); 
	printf("generacion de electricidad a partir del carbon.\nSe realizaron avances en infraestructuras de transporte y almacenamiento de energia, implementando tecnologias de ");
	printf("almacenamiento\npara una gestion eficiente de la energia renovable.\n\nEn resumen, Espana avanzo hacia una generacion mas sostenible, combinando fuentes renovables y");
	printf("convencionales para satisfacer la demanda\nelectrica y reducir las emisiones de gases de efecto invernadero.\n\n");
}


// FUNCION IMPRIMIR VECTORES DEL FICHERO 
void imprimir_vectores(float v[24], int exp, char* fichero2) {
    int i;
    
	if (exp == 1) {
        FILE* fp = fopen(fichero2, "w");
        if (fp == NULL) {
            printf("Error al abrir el archivo.\n");
            return;
        }
        
        for (i = 0; i < 24; i++) {
            fprintf(fp, "%f ", v[i]);
        }
        fclose(fp);
        
        printf("Vector exportado correctamente al archivo: Exportacion_datos\n");
    } 
	else if (exp == 2) {
        for (i = 0; i < 24; i++) {
            printf("%f ", v[i]);
        }
        printf("\n\n");
    }
	else {
        printf("Opcion invalida.\n");
    }
}


// FUNCIONES CALCULOS ESTADÍSTICOS
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
    
    desviacion = sqrt(desviacion / 24);

    if (total == 1 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia total generada en 2021: %f\n", suma);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia total generada en 2021: %f\n", suma);
        }
    } else if (total == 2 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia media generada en 2021: %f\n", media);
                fprintf(fp, "Desviacion tipica en 2021: %f\n", desviacion);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia media generada en 2021: %f\n", media);
            printf("Desviacion tipica en 2021: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia total generada en 2021: %f\n", suma);
                fprintf(fp, "Energia media generada en 2021: %f\n", media);
                fprintf(fp, "Desviacion tipica en 2021: %f\n", desviacion);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia total generada en 2021: %f\n", suma);
            printf("Energia media generada en 2021: %f\n", media);
            printf("Desviacion tipica en 2021: %f\n", desviacion);
        }
    } else if (total == 1 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia total generada en 2022: %f\n", suma);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia total generada en 2022: %f\n", suma);
        }
    } else if (total == 2 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia media generada en 2022: %f\n", media);
                fprintf(fp, "Desviacion tipica en 2022: %f\n", desviacion);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia media generada en 2022: %f\n", media);
            printf("Desviacion tipica en 2022: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia total generada en 2022: %f\n", suma);
                fprintf(fp, "Energia media generada en 2022: %f\n", media);
                fprintf(fp, "Desviacion tipica en 2022: %f\n", desviacion);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia total generada en 2022: %f\n", suma);
            printf("Energia media generada en 2022: %f\n", media);
            printf("Desviacion tipica en 2022: %f\n", desviacion);
        }
    } else if (total == 1 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia total generada en 2021 y 2022: %f\n", suma);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia total generada en 2021 y 2022: %f\n", suma);
        }
    } else if (total == 2 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia media generada en 2021 y 2022: %f\n", media);
                fprintf(fp, "Desviacion tipica en 2021 y 2022: %f\n", desviacion);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia media generada en 2021 y 2022: %f\n", media);
            printf("Desviacion tipica en 2021 y 2022: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia total generada en 2021 y 2022: %f\n", suma);
                fprintf(fp, "Energia media generada en 2021 y 2022: %f\n", media);
                fprintf(fp, "Desviacion tipica en 2021 y 2022: %f\n", desviacion);
                fclose(fp);
                printf("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf("Energia total generada en 2021 y 2022: %f\n", suma);
            printf("Energia media generada en 2021 y 2022: %f\n", media);
            printf("Desviacion tipica en 2021 y 2022: %f\n", desviacion);
        }
    } else {
        printf("Fecha invalida.\n");
    }
}

void imprimir_energia_mes(float v[24], int mes, int ano, int total, int exp, char* fichero2) {
    float energia_total, energia_media;

    if (ano == 2021) {
        ano = 0;
    } else if (ano == 2022) {
        ano = 12;
    }

    energia_total = v[mes + ano - 1];
    energia_media = (1.0 / 16.0) * energia_total;

    if (mes >= 1 && mes <= 24) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                if (total == 1) {
                    fprintf(fp, "Energia total : %f\n", energia_total);
                } else if (total == 2) {
                    fprintf(fp, "Energia media: %f\n\n", energia_media);
                } else if (total == 3) {
                    fprintf(fp, "Energia total : %f\n", energia_total);
                    fprintf(fp, "Energia media: %f\n\n", energia_media);
                }

                fclose(fp); 
                printf("Datos exportado correctamente al archivo: Exportacion_datos\n\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } 
		else if (exp == 2) {
            if (total == 1) {
                printf("Energia total : %f\n", energia_total);
            } else if (total == 2) {
                printf("Energia media: %f\n\n", energia_media);
            } else if (total == 3) {
                printf("Energia total : %f\n", energia_total);
                printf("Energia media: %f\n\n", energia_media);
            }
        }
    } else {
        printf("Fecha invalida.\n\n");
    }
}


// FUNCION BUSCAR DATOS 
void buscar_datos (float v[24]) {
	
	int fecha, a, m, m1, i;
	
	printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
	printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
	scanf ("%i", &fecha);
	
	switch (fecha) {
		case 2021:
			a = 1;
			break;
		case 2022:
			a = 2;
			break;
		case 2122:
			a = 3;
			break;
	}
	printf ("Mes:\n");
	printf ("Si quiere ver los datos de todos los meses pulse (24)\n");
	scanf ("%i", &m);
	m = m - 1;
			
	if (a == 1) {
		if (m != 23) {
			printf ("%f\n", v [m]);
		}
		else if (m == 23) {
			for (i = 0; i < 11; i++) {
				printf ("%f  ", v [i]);
			}
		}
	}
	if (a == 2) {
		if (m != 23) {
			m = m + 12;
			printf ("%f \n", v [m]);
		}
		else if (m == 23) {
			for (i = 12; i < m; i++) {
				printf ("%f  ", v [i]);
			}	
		}
	}
	if (a == 3) {
		if (m != 23) {
			m1 = m + 12;
			printf ("%f\n", v [m]);
			printf ("%f\n", v [m1]);
		}
		else if (m == 23) {
			for (i = 0; i < m; i++) {
				printf ("%f  ", v [i]);
			}
		}
	}
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

void diagrama(float v[24], int exp, char* fichero2) {
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
        FILE* fp = fopen(fichero2, "w");
        if (fp == NULL) {
            printf("Error al abrir el archivo.\n");
            return;
        }
        
        for (i = 0; i < 24; i++) {
            fprintf(fp, "%s ", fechas[i]);
            for (j = 0; j < (v[i] / max_v) * 100; j++) {
                fprintf(fp, "|");
            }
            fprintf(fp, "\n");
        }
        fclose(fp);
        
        printf("Diagrama exportado correctamente al archivo: Exportacion_datos\n");
    } 
	else if (exp == 2) {
        for (i = 0; i < 24; i++) {
            printf("%s ", fechas[i]);
            for (j = 0; j < (v[i] / max_v) * 100; j++) {
                printf("|");
            }
            printf("\n");
        }
    }
	else {
        printf("Opcion invalida.\n");
    }
}
