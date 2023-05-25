#include <stdio.h>
#include <math.h>

void imprimir_energia_mes(int mes, int ano);

int main() {
	
    float hidraulica[24], turbinacion[24], nuclaer[24], carbon[24], motor[24], turbinag[24], turbinav[24], ciclo[24], hidroelectrica[24];
    float eolica[24], solarfoto[24], solarter[24], renovables[24], cogeneracion[24], residuosnor[24], residuosr[24], generaciontotal[24];
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    int i;
    
    //Variables estadisticas
    float suma_hidraulica_1 = 0, suma_hidraulica_2 = 0, suma_hidraulica_t = 0;
    float suma_enero_21 = 0;
    int mes, ano;
    
       
    FILE *pf;
    pf = fopen(fichero1, "r");
    if (pf == NULL) {
        printf("No se ha podido abrir el fichero.\n");
    }

    // Hidraulica
    for (i = 0; i < 5; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &hidraulica[i]);
        }
    }
     
    // Turbinacion
    for (i = 0; i < 6; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinacion[i]);
        }
    }
    
    // Nuclear
    for (i = 0; i < 7; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &nuclaer[i]);
        }
    }
    
    // Carbon
    for (i = 0; i < 8; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &carbon[i]);
        }
    }
    
    // Motor diesel
    for (i = 0; i < 9; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &motor[i]);
        }
    }
    
    // Turbina gas
    for (i = 0; i < 10; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinag[i]);
        }
    }

    // Turbina vapor
    for (i = 0; i < 11; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &turbinav[i]);
        }
    }
    
    // Ciclo combinado
    for (i = 0; i < 12; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &ciclo[i]);
        }
    }
    
    // Hidroelectrica
    for (i = 0; i < 13; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &hidroelectrica[i]);
        }
    }
    
    // Eolica
    for (i = 0; i < 14; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &eolica[i]);
        }
    }
    
    // Solarfotovoltaica
    for (i = 0; i < 14; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &solarfoto[i]);
        }
    }
    
    // Solar termica
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
    
    
    
    // Imprimir vectores

    //printf("Hidraulica: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", hidraulica[i]);
    //}
    //printf("\n\n");
    
    //printf("Turbinacion: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", turbinacion[i]);
    //}
    //printf("\n\n");
    
    //printf("Nuclaer: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", nuclaer[i]);
    //}
    //printf("\n\n");
    
    //printf("Carbon: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", carbon[i]);
    //}
    //printf("\n\n");
    
    //printf("Motor diesel: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", motor[i]);
    //}
    //printf("\n\n");
    
    //printf("Turbina gas: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", turbinag[i]);
    //}
    //printf("\n\n");
    
    //printf("Turbina vapor: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", turbinav[i]);
    //}
    //printf("\n\n");
    
    //printf("Ciclo combinado: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", ciclo[i]);
    //}
    //printf("\n\n");
    
    //printf("Hidroelctrica: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", hidroelectrica[i]);
    //}
    //printf("\n\n");
    
    //printf("Eolica: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", eolica[i]);
    //}
    //printf("\n\n");
    
    //printf("Solar fotovoltaica: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", solarfoto[i]);
    //}
    //printf("\n\n");
    
    //printf("Solar termica: ");
    //for (i = 0; i < 24; i++) {
    //    printf("%f ", solarter[i]);
    //}
    //rintf("\n\n");
    
    printf("Otras renovables: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", renovables[i]);
    }
    printf("\n\n");
    
    printf("Cogeneracion: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", cogeneracion[i]);
    }
    printf("\n\n");
    
    printf("Residuos no renovables: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", residuosnor[i]);
    }
    printf("\n\n");
    
    printf("Residuos renovables: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", residuosr[i]);
    }
    printf("\n\n");
    
    printf("Generacion totatl: ");
    for (i = 0; i < 24; i++) {
        printf("%f ", generaciontotal[i]);
    }
    printf("\n\n");
    
    
    // Hidraulica 2021
    for (i=0; i<12; i++){
    	suma_hidraulica_1 = suma_hidraulica_1 + hidraulica[i];
	}
	printf("Energia hidraulica generada en 2021: %f\n", suma_hidraulica_1);
	suma_hidraulica_1 = (1./12.0) * suma_hidraulica_1;
	printf("Energia media hidraulica generada en 2021: %f\n\n", suma_hidraulica_1);
	
	// Hidraulica 2021
    for (i=12; i<24; i++){
    	suma_hidraulica_2 = suma_hidraulica_2 + hidraulica[i];
	}
	printf("Energia hidraulica generada en 2022: %f\n", suma_hidraulica_2);
	suma_hidraulica_2 = (1./12.0) * suma_hidraulica_2;
	printf("Energia media hidraulica generada en 2022: %f\n\n", suma_hidraulica_2);
	
	// Hidraulica 2021 y 2022
	for (i=0; i<24; i++){
    	suma_hidraulica_t = suma_hidraulica_t + hidraulica[i];
	}
	printf("Energia hidraulica generada en 2021 y 2022: %f\n", suma_hidraulica_t);
	suma_hidraulica_t = (1./12.0) * suma_hidraulica_t;
	printf("Energia media hidraulica generada en 2021 y 2022: %f\n\n", suma_hidraulica_t);
	
	printf("Introduce mes:");
	scanf("%i", &mes);
	printf("Introduce ano:");
	scanf("%i", &ano);
	
	imprimir_energia_mes(mes, ano);
	
	
    return 0;
}

void imprimir_energia_mes(int mes, int ano) {
    char fichero1[] = "c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv";
    float generaciontotal[24];
    float energia_total, energia_media;
    int i;

    FILE *pf;
    pf = fopen(fichero1, "r");
    if (pf == NULL) {
        printf("No se ha podido abrir el fichero.\n");
        return;
    }

    for (i = 0; i < 21; i++) {
        fscanf(pf, "%*[^\n]%*c");
    }

    if (fscanf(pf, "%*[^,],") == 0) {
        for (i = 0; i < 24; i++) {
            fscanf(pf, "%f,", &generaciontotal[i]);
        }
    }

    fclose(pf);

    if (mes >= 1 && mes <= 12) {
        energia_total = generaciontotal[mes - 1];
        energia_media = (1.0 / 16.0) * energia_total;

        if (mes == 1 && ano == 2021) {
            printf("Energia total generada en enero de 2021: %f\n", energia_total);
            printf("Energia media generada en enero de 2021: %f\n\n", energia_media);
        }

        if (mes == 2 && ano == 2021) {
            printf("Energia total generada en febrero de 2021: %f\n", energia_total);
            printf("Energia media generada en febrero de 2021: %f\n\n", energia_media);
        }

        if (mes == 12 && ano == 2022) {
            printf("Energia total generada en diciembre de 2022: %f\n", energia_total);
            printf("Energia media generada en diciembre de 2022: %f\n\n", energia_media);
        }
    } else {
        printf("Fecha invalida.\n");
    }
}



 








