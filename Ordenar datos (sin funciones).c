//Ordenar elementos.

#include <stdio.h>

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
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (hidraulica [i] > hidraulica [j]) {
							k = hidraulica [i];
							hidraulica [i] = hidraulica [j];
							hidraulica [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", hidraulica [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (hidraulica [i] < hidraulica [j]) {
							k = hidraulica [i];
							hidraulica [i] = hidraulica [j];
							hidraulica [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", hidraulica [i]);
				}
			}
			break;
		case 2:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (turbinacion [i] > turbinacion [j]) {
							k = turbinacion [i];
							turbinacion [i] = turbinacion [j];
							turbinacion [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", turbinacion [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (turbinacion [i] < turbinacion [j]) {
							k = turbinacion [i];
							turbinacion [i] = turbinacion [j];
							turbinacion [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", turbinacion [i]);
				}
			}
			break;
		case 3:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (nuclear [i] > nuclear [j]) {
							k = nuclear [i];
							nuclear [i] = nuclear [j];
							nuclear [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", nuclear [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (nuclear [i] < nuclear [j]) {
							k = nuclear [i];
							nuclear [i] = nuclear [j];
							nuclear [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", nuclear [i]);
				}
			}
			break;
		case 4:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (carbon [i] > carbon [j]) {
							k = carbon [i];
							carbon [i] = carbon [j];
							carbon [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", carbon [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (carbon [i] < carbon [j]) {
							k = carbon [i];
							carbon [i] = carbon [j];
							carbon [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", carbon [i]);
				}
			}
			break;
		case 5:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (motor [i] > motor [j]) {
							k = motor [i];
							motor [i] = motor [j];
							motor [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", motor [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (motor [i] < motor [j]) {
							k = motor [i];
							motor [i] = motor [j];
							motor [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", motor [i]);
				}
			}
			break;
		case 6:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (turbinag [i] > turbinag [j]) {
							k = turbinag [i];
							turbinag [i] = turbinag [j];
							turbinag [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", turbinag [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (turbinag [i] < turbinag [j]) {
							k = turbinag [i];
							turbinag [i] = turbinag [j];
							turbinag [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", turbinag [i]);
				}
			}
			break;
		case 7:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (turbinav [i] > turbinav [j]) {
							k = turbinav [i];
							turbinav [i] = turbinav [j];
							turbinav [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", turbinav [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (turbinav [i] < turbinav [j]) {
							k = turbinav [i];
							turbinav [i] = turbinav [j];
							turbinav [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", turbinav [i]);
				}
			}
			break;
		case 8:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (ciclo [i] > ciclo [j]) {
							k = ciclo [i];
							ciclo [i] = ciclo [j];
							ciclo [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", ciclo [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (ciclo [i] < ciclo [j]) {
							k = ciclo [i];
							ciclo [i] = ciclo [j];
							ciclo [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", ciclo [i]);
				}
			}
			break;
		case 9:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (hidroelectrica [i] > hidroelectrica [j]) {
							k = hidroelectrica [i];
							hidroelectrica [i] = hidroelectrica [j];
							hidroelectrica [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", hidroelectrica [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (hidroelectrica [i] < hidroelectrica [j]) {
							k = hidroelectrica [i];
							hidroelectrica [i] = hidroelectrica [j];
							hidroelectrica [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", hidroelectrica [i]);
				}
			}
			break;
		case 10:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (eolica [i] > eolica [j]) {
							k = eolica [i];
							eolica [i] = eolica [j];
							eolica [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", eolica [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (eolica [i] < eolica [j]) {
							k = eolica [i];
							eolica [i] = eolica [j];
							eolica [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", eolica [i]);
				}
			}
			break;
		case 11:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (solarfoto [i] > solarfoto [j]) {
							k = solarfoto [i];
							solarfoto [i] = solarfoto [j];
							solarfoto [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", solarfoto [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (solarfoto [i] < solarfoto [j]) {
							k = solarfoto [i];
							solarfoto [i] = solarfoto [j];
							solarfoto [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", solarfoto [i]);
				}
			}
			break;
		case 12:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (solarter [i] > solarter [j]) {
							k = solarter [i];
							solarter [i] = solarter [j];
							solarter [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", solarter [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (solarter [i] < solarter [j]) {
							k = solarter [i];
							solarter [i] = solarter [j];
							solarter [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", solarter [i]);
				}
			}
			break;
		case 13:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (renovables [i] > renovables [j]) {
							k = renovables [i];
							renovables [i] = renovables [j];
							renovables [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", renovables [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (renovables [i] < renovables [j]) {
							k = renovables [i];
							renovables [i] = renovables [j];
							renovables [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", renovables [i]);
				}
			}
			break;
		case 14:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (cogeneracion [i] > cogeneracion [j]) {
							k = cogeneracion [i];
							cogeneracion [i] = cogeneracion [j];
							cogeneracion [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", cogeneracion [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (cogeneracion [i] < cogeneracion [j]) {
							k = cogeneracion [i];
							cogeneracion [i] = cogeneracion [j];
							cogeneracion [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", cogeneracion [i]);
				}
			}
			break;
		case 15:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (residuosnor [i] > residuosnor [j]) {
							k = residuosnor [i];
							residuosnor [i] = residuosnor [j];
							residuosnor [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", residuosnor [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (residuosnor [i] < residuosnor [j]) {
							k = residuosnor [i];
							residuosnor [i] = residuosnor [j];
							residuosnor [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", residuosnor [i]);
				}
			}
			break;
		case 16:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (residuosr [i] > residuosr [j]) {
							k = residuosr [i];
							residuosr [i] = residuosr [j];
							residuosr [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", residuosr [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (residuosr [i] < residuosr [j]) {
							k = residuosr [i];
							residuosr [i] = residuosr [j];
							residuosr [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", residuosr [i]);
				}
			}
			break;
		case 17:
			printf ("(1) De menor a mayor\n(2) De mayor a menor\n");
			scanf ("%i", &y);
			if (y == 1) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (generaciontotal [i] > generaciontotal [j]) {
							k = generaciontotal [i];
							generaciontotal [i] = generaciontotal [j];
							generaciontotal [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", generaciontotal [i]);
				}
			}
			else if (y == 2) {
				for (i = 0; i < 24; i++) {
					for (j = i + 1; j < 24; j++) {
						if (generaciontotal [i] < generaciontotal [j]) {
							k = generaciontotal [i];
							generaciontotal [i] = generaciontotal [j];
							generaciontotal [j] = k;
						}
					}
				}
				for (i = 0; i < 24; i++) {
					printf ("%f  ", generaciontotal [i]);
				}
			}
			break;
	}
	
	return 0;
}
