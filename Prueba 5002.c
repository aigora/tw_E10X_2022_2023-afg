#include <stdio.h>
#include <math.h>

void imprimir_vectores (float v[24]);
void imprimir_energia (float v[24], int ano, int total);
void imprimir_energia_mes (float v[24], int mes_ano);

int main() {
	
    float hidraulica[24], turbinacion[24], nuclear[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float eolica[24], solarfoto[24], solarter[24], renovables[24], cogeneracion[24], residuosnor[24], residuosr[24], generaciontotal[24];
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    int i;
    
    // variables estadisticas 
    int ano, mes, energia, total;
    
       
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
    
	
	printf("Lista de energia: ");
	scanf("%i", &energia);
	
	switch (energia) {
	case 1:
		imprimir_vectores(hidraulica);
		break;
	case 2:
		imprimir_vectores(turbinacion);
		break;
	case 3:
		imprimir_vectores(nuclear);
		break;
	case 4:
		imprimir_vectores(carbon);
		break;
	case 5:
		imprimir_vectores(motor);
		break;
	case 6:
		imprimir_vectores(turbinag);
		break;
	case 7:
		imprimir_vectores(turbinav);
		break;
	case 8:
		imprimir_vectores(ciclo);
		break;
	case 9:
		imprimir_vectores(hidroelectrica);
		break;
	case 10:
		imprimir_vectores(eolica);
		break;
	case 11:
		imprimir_vectores(solarfoto);
		break;
	case 12:
		imprimir_vectores(solarter);
		break;
	case 13:
		imprimir_vectores(renovables);
		break;
	case 14:
		imprimir_vectores(cogeneracion);
		break;
	case 15:
		imprimir_vectores(residuosnor);
		break;
	case 16:
		imprimir_vectores(residuosr);
		break;
	default:
		printf("Energia icnorrecta. \n\n");
		break;
	}

	printf("Energia: ");
	scanf("%i %i %i", &energia, &ano, &total);

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

	

	imprimir_energia_2022 (hidroelectrica);
	imprimir_energia_2021_2022 (cogeneracion);
	
	imprimir_energia_mes(generaciontotal, 0);
	imprimir_energia_mes(generaciontotal, 23);

	
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

    switch (ano) {
        case 2021:
            for (i = 0; i < 24; i++) {
                suma += v[i];
            }
            if (total == 1) {
                printf("Energia generada en 2021: %f\n", suma);
            } else if (total == 2) {
                suma /= 12.0;
                printf("Energia media generada en 2021: %f\n\n", suma);
            }
            break;
        case 2022:
            for (i = 0; i < 24; i++) {
                suma += v[i];
            }
            if (total == 1) {
                printf("Energia generada en 2022: %f\n", suma);
            } else if (total == 2) {
                suma /= 12.0;
                printf("Energia media generada en 2022: %f\n\n", suma);
            }
            break;
        case 2122:
            for (i = 0; i < 24; i++) {
                suma += v[i];
            }
            if (total == 1) {
                printf("Energia generada en 2021 y 2022: %f\n", suma);
            }
            if (total == 2) {
                suma /= 24.0;
                printf("Energia media generada en 2021 y 2022: %f\n\n", suma);
            }
            break;
    }
}


void imprimir_energia_mes (float v[24], int mes_ano) {
	
	float energia_total, energia_media;
	
    energia_total = v[mes_ano];
    energia_media = (1.0 / 16.0) * energia_total;

	if (mes_ano >= 0 && mes_ano <= 23) {
        printf("Energia total : %f\n", energia_total);
        printf("Energia media: %f\n\n", energia_media);
        
 	} else {
        printf("Fecha invalida.\n");
    }
}


