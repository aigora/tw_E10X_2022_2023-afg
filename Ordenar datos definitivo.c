//Ordenar elementos.

#include <stdio.h>

void ordenar_de_menor_a_mayor (float v[]);
void ordenar_de_mayor_a_menor (float v[]);

int main () {
	
    float hidraulica[24], turbinacion[24], nuclear[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float eolica[24], solarfoto[24], solarter[24], renovables[24], cogeneracion[24], residuosnor[24], residuosr[24], generaciontotal[24];
    char fichero1[] = "c:/Users/Fernanda/OneDrive/Desktop/Trabajo/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    float k;
    int i, j, x, y;
    int n = 4;
       
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
    
    printf ("Determine que datos quiere ordenar:\n");
    printf ("Elija que dato quiere consultar:\n");
    printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
	printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
	printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n(17) Generacion total\n");
	scanf ("%i", &x);
	
	switch (x) {
		case 1:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			
			if (y == 1) {
				ordenar_de_menor_a_mayor (hidraulica);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (hidraulica);
			}
			break;
		case 2:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (turbinacion);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (turbinacion);
			}
			break;
		case 3:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (nuclear);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (nuclear);
			}
			break;
		case 4:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (carbon);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (carbon);
			}
			break;
		case 5:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (motor);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (motor);
			}
			break;
		case 6:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (turbinag);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (turbinag);
			}
			break;
		case 7:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (turbinav);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (turbinav);
			}
			break;
		case 8:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (ciclo);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (ciclo);
			}
			break;
		case 9:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (hidroelectrica);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (hidroelectrica);
			}
			break;
		case 10:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (eolica);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (eolica);
			}
			break;
		case 11:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (solarfoto);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (solarfoto);
			}
			break;
		case 12:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (solarter);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (solarter);
			}
			break;
		case 13:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (renovables);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (renovables);
			}
			break;
		case 14:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (cogeneracion);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (cogeneracion);
			}
			break;
		case 15:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (residuosnor);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (residuosnor);
			}
			break;
		case 16:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (residuosr);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (residuosr);
			}
			break;
		case 17:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				ordenar_de_menor_a_mayor (generaciontotal);
			}
			else if (y == 2) {
				ordenar_de_mayor_a_menor (generaciontotal);
			}
			break;
	}
	
	return 0;
}

void ordenar_de_menor_a_mayor (float v[]) {
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
}

void ordenar_de_mayor_a_menor (float v[]) {
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
}