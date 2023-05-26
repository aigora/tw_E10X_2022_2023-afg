#include <stdio.h>
#include <math.h>

void imprimir_vectores(float v[24]);
void imprimir_energia(float v[24], int ano, int total);
void imprimir_energia_mes (float v[24], int mes, int ano, int total);

int main() {
	
    float hidraulica[24], turbinacion[24], nuclear[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float eolica[24], solarfoto[24], solarter[24], renovables[24], cogeneracion[24], residuosnor[24], residuosr[24], generaciontotal[24];
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    int i;
    
    // variables estadisticas 
    int ano, mes, energia, total;
    
    // Variables menu
    int opcion;
    
    // Lectura fichero   
       
    FILE *pf;
    pf = fopen(fichero1, "r");
    if (pf == NULL) {
        printf("No se ha podido abrir el fichero.\n");
    }
    
    // Datos en vectores

    // 1 - Hidraulica
    for (i = 0; i < 5; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &hidraulica[i]);
        }
    }
     
    // 2 - Turbinacion
    for (i = 0; i < 6; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinacion[i]);
        }
    }
    
    // 3 - Nuclear
    for (i = 0; i < 7; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &nuclear[i]);
        }
    }
    
    // 4 - Carbon
    for (i = 0; i < 8; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &carbon[i]);
        }
    }
    
    // 5 - Motor diesel
    for (i = 0; i < 9; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &motor[i]);
        }
    }
    
    // 6 - Turbina gas
    for (i = 0; i < 10; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinag[i]);
        }
    }

    // 7 - Turbina vapor
    for (i = 0; i < 11; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinav[i]);
        }
    }
    
    // 8 - Ciclo combinado
    for (i = 0; i < 12; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &ciclo[i]);
        }
    }
    
    // 9 - Hidroelectrica
    for (i = 0; i < 13; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &hidroelectrica[i]);
        }
    }
    
    // 10 - Eolica
    for (i = 0; i < 14; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &eolica[i]);
        }
    }
    
    // 11 - Solarfotovoltaica
    for (i = 0; i < 14; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &solarfoto[i]);
        }
    }
    
    // 12 - Solar termica
    for (i = 0; i < 15; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &solarter[i]);
        }
    }

    // Otras renovables
    for (i = 0; i < 16; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &renovables[i]);
        }
    }
    
    // Cogeneracion
    for (i = 0; i < 17; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &cogeneracion[i]);
        }
    }
    
    // Resudios no renovales
    for (i = 0; i < 18; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &residuosnor[i]);
        }
    }
    
    // Residuos renovables
    for (i = 0; i < 19; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &residuosr[i]);
        }
    }
    
    // Generacion total
    for (i = 0; i < 20; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &generaciontotal[i]);
        }
    }

    fclose(pf);
    
    
    
    // Menu
    printf("=== Red Electrica Espanola ===\n\n");
    
    printf("Bienvenido a este programa acerca de la forma de generacion de energia electrica en Espana durante los anos 2021 y 2022\n\n");
    do {
        // Imprimir el men�
        
        printf("\nA continuacion, dispone del menu de opciones que ofrecemos:\n\n");
        
        printf("1. Informacion general \n");
        printf("2. Datos del gasto energetico\n");
        printf("3. Calculos estadisticos\n");
        printf("4. Buscar elementos\n");
        printf("5. Ordenar elementos\n");
        printf("6. Diagrama de barras\n");
        printf("7. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        printf("\n");

        // Realizar acciones seg�n la opci�n seleccionada
        switch (opcion) {
            case 1:
                printf("Has seleccionado la opcion 1 (Informacion general.\n\n");
                
                printf("Durante los anos 2021 y 2022, Espana combino fuentes convencionales y renovables en su generacion de energia electrica. Destacaron la energia"); 
				printf("eolica y solar como principales fuentes renovables. Se instalaron nuevos parques eolicos y plantas solares, aprovechando los recursos naturales del pais."); 
				printf("Aunque las fuentes convencionales como la energia nuclear y los combustibles fosiles tuvieron un papel importante, se observo una disminucion gradual en la"); 
				printf("generacion de electricidad a partir del carbon. Se realizaron avances en infraestructuras de transporte y almacenamiento de energia, implementando tecnolog�as de");
				printf("almacenamiento para una gestion eficiente de la energia renovable. En resumen, Espana avanzo hacia una generacion mas sostenible, combinando fuentes renovables y");
				printf("convencionales para satisfacer la demanda electrica y reducir las emisiones de gases de efecto invernadero.\n\n");
                
                break;
            case 2: //gasto energ�tico
                printf("Has seleccionado la opcion 2 (Datos del gasto energetico). \n"); 
                
                printf ("Hidraulica (1)  Turbinacion Bombeo (2)  Nucelar (3)  Carbon (4)  Motores Diesel (5)  Turbina Gas (6)  Turbina Vapor (7) ");
				printf ("Ciclo combinado (8)  Hidroelectrica (9)  Eolica (10)  Solar Fotovoltaica (11)  Solar T�rmica (12)  Otras renovables (13) ");
				printf ("Cogeneracion (14)  Residuos no Renovables (15)  Residuos Renovables (16)  Todas (17)\n\n");

				printf("Elegir tipo de energia: ");
				scanf("%i", &energia);
				printf("\n");
	
						switch (energia) {
								case 1:
									printf ("(1)  ");
									imprimir_vectores(hidraulica);
									break;
								case 2:
									printf ("(2)  ");
									imprimir_vectores(turbinacion);
									break;
								case 3:
									printf ("(3)  ");
									imprimir_vectores(nuclear);
									break;
								case 4:
									printf ("(4)  ");
									imprimir_vectores(carbon);
									break;
								case 5:
									printf ("(5)  ");
									imprimir_vectores(motor);
									break;
								case 6:
									printf ("(6)  ");
									imprimir_vectores(turbinag);
									break;
								case 7:
									printf ("(7)  ");
									imprimir_vectores(turbinav);
									break;
								case 8:
									printf ("(8)  ");
									imprimir_vectores(ciclo);
									break;
								case 9:
									printf ("(9)  ");
									imprimir_vectores(hidroelectrica);
									break;
								case 10:
									printf ("(10)  ");
									imprimir_vectores(eolica);
									break;
								case 11:
									printf ("(11)  ");
									imprimir_vectores(solarfoto);
									break;
								case 12:
									printf ("(12)  ");
									imprimir_vectores(solarter);
									break;
								case 13:
									printf ("(13)  ");
									imprimir_vectores(renovables);
									break;
								case 14:
									printf ("(14)  ");
									imprimir_vectores(cogeneracion);
									break;
								case 15:
									printf ("(15)  ");
									imprimir_vectores(residuosnor);
									break;
								case 16:
									printf ("(16)  ");
									imprimir_vectores(residuosr);
									break;
								case 17:
									printf ("(1)  ");
									imprimir_vectores(hidraulica);
									printf ("(2)  ");
									imprimir_vectores(turbinacion);
									printf ("(3)  ");
									imprimir_vectores(nuclear);
									printf ("(4)  ");
									imprimir_vectores(carbon);
									printf ("(5)  ");
									imprimir_vectores(motor);
									printf ("(6)  ");
									imprimir_vectores(turbinag);
									printf ("(7)  ");
									imprimir_vectores(turbinav);
									printf ("(8)  ");
									imprimir_vectores(ciclo);
									printf ("(9)  ");
									imprimir_vectores(hidroelectrica);
									printf ("(10)  ");
									imprimir_vectores(eolica);
									printf ("(11)  ");
									imprimir_vectores(solarfoto);
									printf ("(12)  ");
									imprimir_vectores(solarter);
									printf ("(13)  ");
									imprimir_vectores(renovables);
									printf ("(14)  ");
									imprimir_vectores(cogeneracion);
									printf ("(15)  ");
									imprimir_vectores(residuosnor);
									printf ("(16)  ");
									imprimir_vectores(residuosr);
									break;
								default:
									printf("Energia icnorrecta. \n\n");
									break;
								}
                break;
  			case 3:
				printf("Has seleccionado la opcion 3 (Calculos estadisticos). \n\n"); //c�lculos estad�sticos
				
				printf("1 - Calcular media en un ano   2 - Calcular media en un mes\n");
				printf("Elegir opcion: ");
				scanf("%i", &opcion);
				printf("\n");
				
				switch (opcion){
					case 1:
						printf ("Hidraulica (1)  Turbinacion Bombeo (2)  Nucelar (3)  Carbon (4)  Motores Diesel (5)  Turbina Gas (6)  Turbina Vapor (7) ");
						printf ("Ciclo combinado (8)  Hidroelectrica (9)  Eolica (10)  Solar Fotovoltaica (11)  Solar T�rmica (12)  Otras renovables (13) ");
						printf ("Cogeneracion (14)  Residuos no Renovables (15)  Residuos Renovables (16)\n\n");
						printf("Tipo de energia: ");
						scanf("%i", &energia);
						printf("\n");
						printf("Insertar ano (Si se desea calcular el de los anos 2021 y 2022 conjuntamnete introducir 2122): ");
						scanf("%i", &ano);
						printf("\n");
						printf("1 - Calcular energia total   2 - Calcular energia media   3 - Calcular energia total y media\n");
						printf("Elegir opcion: ");
						scanf("%i", &total);
						printf("\n");
						
						switch (energia) {
    						case 1:
        						imprimir_energia(hidraulica, ano, total);
        					break;
    						case 2:
        						imprimir_energia(turbinacion, ano, total);
       						break;
   							case 3:
        						imprimir_energia(nuclear, ano, total);
      						break;
   							case 4:
        						imprimir_energia(carbon, ano, total);
        					break;
    						case 5:
        						imprimir_energia(motor, ano, total);
        					break;
    						case 6:
        						imprimir_energia(turbinag, ano, total);
        					break;
    						case 7:
        						imprimir_energia(turbinav, ano, total);
        					break;
    						case 8:
        						imprimir_energia(ciclo, ano, total);
        					break;
    						case 9:
        						imprimir_energia(hidroelectrica, ano, total);
       						break;
    						case 10:
        						imprimir_energia(eolica, ano, total);
        					break;
    						case 11:
     						   imprimir_energia(solarfoto, ano, total);
      						break;
    						case 12:
        						imprimir_energia(solarter, ano, total);
        					break;
    						case 13:
       							imprimir_energia(renovables, ano, total);
        					break;
    						case 14:
        						imprimir_energia(cogeneracion, ano, total);
        					break;
    						case 15:
        						imprimir_energia(residuosnor, ano, total);
        					break;
    						case 16:
        						imprimir_energia(residuosr, ano, total);
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
					printf("1 - Calcular energia total   2 - Calcular energia media   3 - Calcular energia total y media\n");
					printf("Elegir opcion: ");
					scanf("%i", &total);
					printf("\n");
					imprimir_energia_mes(generaciontotal, mes, ano, total);
                	break;
            case 4:
                printf("Has seleccionado la opcion 4: \n");
                //comparaci�n con otros paises
                break;
            case 5:
                printf("Has seleccionado la opcion 5: \n");
                
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Por favor, seleccione una opcion valida.\n");
                break;
    		}
        	printf("\n");
		}
    } while (opcion != 7);
    
    return 0;
}

void imprimir_vectores(float v[24]) {
    
    int i;
    
    for (i = 0; i < 24; i++) {
        printf("%f ", v[i]);
    }
    printf("\n\n");
    
}

void imprimir_energia(float v[24], int ano, int total) {
    float suma = 0;
    int i;

    for (i = 0; i < 24; i++) {
        suma += v[i];
    }

    if (total == 1 && ano == 2021) {
        printf("Energia generada en 2021: %f\n", suma);
    } else if (total == 2 && ano == 2021) {
        suma = suma / 12.0;
        printf("Energia media generada en 2021: %f\n\n", suma);
    }
    else if ( total == 3 && ano == 2021){
    	printf("Energia generada en 2021: %f\n", suma);
    	suma = suma / 12.0;
        printf("Energia media generada en 2021: %f\n\n", suma);
	}
	else if (total == 1 && ano == 2022) {
        printf("Energia generada en 2022: %f\n", suma);
    } 
	else if (total == 2 && ano == 2022) {
        suma = suma / 12.0;
        printf("Energia media generada en 2022: %f\n\n", suma);
	}
    else if ( total == 3 && ano == 2022){
    	printf("Energia generada en 2021: %f\n", suma);
    	suma = suma / 12.0;
        printf("Energia media generada en 2021: %f\n\n", suma);
	}
	else if (total == 1 && ano == 2122) {
        printf("Energia generada en 2021 y 2022: %f\n", suma);
    } 
	else if (total == 2 && ano == 2122) {
        suma = suma / 12.0;
        printf("Energia media generada en 2021 y 2022: %f\n\n", suma);
    }
    else if ( total == 3 && ano == 2122){
    	printf("Energia generada en 2021: %f\n", suma);
    	suma = suma / 12.0;
        printf("Energia media generada en 2021: %f\n\n", suma);
	}
	else {
        printf("Fecha invalida.\n");
    }
}

void imprimir_energia_mes (float v[24], int mes, int ano, int total) {
	
	float energia_total, energia_media;
	
	if (ano == 2021) {
		ano = 0;
	}
	else if (ano == 2022) {
		ano = 12;
	}
	
    energia_total = v[mes + ano - 1];
    energia_media = (1.0 / 16.0) * energia_total;

	if (mes>= 1 && mes <= 24) {
		if (total == 1){
			printf("Energia total : %f\n", energia_total);
		}
		else if (total == 2) {
			printf("Energia media: %f\n\n", energia_media);
		}
		else if (total == 3){
			printf("Energia total : %f\n", energia_total);
			printf("Energia media: %f\n\n", energia_media);
		}
      
 	}
	else {
        printf("Fecha invalida.\n");
    }
}

