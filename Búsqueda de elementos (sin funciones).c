//Búsqueda de elementos.

#include <stdio.h>

int ano ();
int mes ();

int main () {
	
    float hidraulica[24], turbinacion[24], nuclear[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float eolica[24], solarfoto[24], solarter[24], renovables[24], cogeneracion[24], residuosnor[24], residuosr[24], generaciontotal[24];
    char fichero1[] = "c:/Users/Fernanda/OneDrive/Desktop/Trabajo/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    int i, f, a, m, dato;
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
    
    printf ("Elija que dato quiere consultar:\n");
    printf ("(1) Hidraulica\n(2) Turbinacion bombeo\n(3) Nuclear\n(4) Carbon\n(5) Motores diesel\n(6) Turbina de gas\n");
	printf ("(7) Turbina de vapor\n(8) Ciclo combinado\n(9) Hidroeolica\n(10) Eolica\n(11) Solar fotovoltaica\n(12) Solar termica\n");
	printf ("(13) Otras renovables\n(14) Cogeneracion\n(15) Residuos no renovables\n(16) Residuos renovables\n(17) Generacion total\n");
	scanf ("%i", &dato);
	
	switch (dato) {
		case 1:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", hidraulica [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", hidraulica [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", hidraulica [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", hidraulica [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", hidraulica [m]);
					printf ("%f\n", hidraulica [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", hidraulica [i]);
					}
				}
			}
			break;
		case 2:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", turbinacion [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", turbinacion [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", turbinacion [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", turbinacion [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", turbinacion [m]);
					printf ("%f\n", turbinacion [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", turbinacion [i]);
					}
				}
			}
			break;
		case 3:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", nuclear [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", nuclear [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", nuclear [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", nuclear [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", nuclear [m]);
					printf ("%f\n", nuclear [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", nuclear [i]);
					}
				}
			}
			break;
		case 4:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", carbon [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", carbon [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", carbon [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", carbon [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", carbon [m]);
					printf ("%f\n", carbon [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", carbon [i]);
					}
				}
			}
			break;
		case 5:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", motor [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", motor [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", motor [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", motor [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", motor [m]);
					printf ("%f\n", motor [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", motor [i]);
					}
				}
			}
			break;
		case 6:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", turbinag [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", turbinag [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", turbinag [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", turbinag [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", turbinag [m]);
					printf ("%f\n", turbinag [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", turbinag [i]);
					}
				}
			}
			break;
		case 7:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", turbinav [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", turbinav [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", turbinav [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", turbinav [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", turbinav [m]);
					printf ("%f\n", turbinav [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", turbinav [i]);
					}
				}
			}
			break;
		case 8:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", ciclo [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", ciclo [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", ciclo [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", ciclo [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", ciclo [m]);
					printf ("%f\n", ciclo [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", ciclo [i]);
					}
				}
			}
			break;
		case 9:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", hidroelectrica [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", hidroelectrica [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", hidroelectrica [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", hidroelectrica [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", hidroelectrica [m]);
					printf ("%f\n", hidroelectrica [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", hidroelectrica [i]);
					}
				}
			}
			break;
		case 10:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", eolica [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", eolica [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", eolica [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", eolica [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", eolica [m]);
					printf ("%f\n", eolica [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", eolica [i]);
					}
				}
			}
			break;
		case 11:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", solarfoto [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", solarfoto [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", solarfoto [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", solarfoto [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", solarfoto [m]);
					printf ("%f\n", solarfoto [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", solarfoto [i]);
					}
				}
			}
			break;
		case 12:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", solarter [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", solarter [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", solarter [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", solarter [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", solarter [m]);
					printf ("%f\n", solarter [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", solarter [i]);
					}
				}
			}
			break;
		case 13:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", renovables [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", renovables [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", renovables [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", renovables [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", renovables [m]);
					printf ("%f\n", renovables [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", renovables [i]);
					}
				}
			}
			break;
		case 14:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", cogeneracion [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", cogeneracion [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", cogeneracion [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", cogeneracion [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", cogeneracion [m]);
					printf ("%f\n", cogeneracion [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", cogeneracion [i]);
					}
				}
			}
			break;
		case 15:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", residuosnor [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", residuosnor [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", residuosnor [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", residuosnor [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", residuosnor [m]);
					printf ("%f\n", residuosnor [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", residuosnor [i]);
					}
				}
			}
			break;
		case 16:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", residuosr [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", residuosr [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", residuosr [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", residuosr [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", residuosr [m]);
					printf ("%f\n", residuosr [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", residuosr [i]);
					}
				}
			}
			break;
		case 17:
			printf ("Fecha del dato que quiere consultar:\nAno:\n2021\n2022\n");
			printf ("Si quiere ver los datos de los dos anos escriba 2122\n");
			scanf ("%f", &f);
	
			switch (f) {
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
					printf ("%f\n", generaciontotal [m]);
				}
				else if (m == 23) {
					for (i = 0; i < 11; i++) {
						printf ("%f  ", generaciontotal [i]);
					}
				}
			}
			if (a == 2) {
				if (m != 23) {
					m = m + 12;
					printf ("%f \n", generaciontotal [m]);
				}
				else if (m == 23) {
					for (i = 12; i < m; i++) {
						printf ("%f  ", generaciontotal [i]);
					}	
				}
			}
			if (a == 3) {
				if (m != 23) {
					printf ("%f\n", generaciontotal [m]);
					printf ("%f\n", generaciontotal [m + 12]);
				}
				else if ( m == 23) {
					for (i = 0; i < m; i++) {
						printf ("%f  ", generaciontotal [i]);
					}
				}
			}
			break;														
	}
	return 0;
}

