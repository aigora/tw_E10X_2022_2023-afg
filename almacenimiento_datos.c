#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char linea[500];
    double hidraulica[25], turbinacion_bombeo[25], nuclear[25], carbon[25], fuel_gas[25], motores_diesel[25], turbina_gas[25], turbina_vapor[25], ciclo_combinado[25], hidroeolica[25];
    double eolica[25], solar_fotovoltaica[25], solar_termica[25], otras_renovables[25], cogeneracion[25], residuos_norenovables[25], residuos_renovables[25], generacion_total[25];
    int i = 0, num_hidraulica = 0, num_turbinacion_bombeo = 0, num_nuclear = 0, num_carbon = 0, num_fuel_gas = 0, num_motores_diesel = 0, num_turbina_gas = 0, num_turbina_vapor = 0;
    int num_ciclo_combinado = 0, num_hidroeolica = 0, num_eolica = 0, num_solar_fotovoltaica = 0, num_solar_termica = 0, num_otras_renovables = 0, num_cogeneracion = 0;
    int num_residuos_norenovables = 0;

	
	// VECTOR HIDRAULICA
   
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 6) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &hidraulica[num_hidraulica]);
                    num_hidraulica++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    // for (i = 0; i < num_hidraulica; i++) {
	//      printf("%lf ", hidraulica[i]);
	// }

    // printf("\n");
    // printf("\n");
    
    
    // VECTOR TURBINACION BOMBEO
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 7) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &turbinacion_bombeo[num_turbinacion_bombeo]);
                    num_turbinacion_bombeo++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    // for (i = 0; i < num_turbinacion_bombeo; i++) {
    //    printf("%lf ", turbinacion_bombeo[i]);
    // }

    // printf("\n");
    // printf("\n");
    
    
    // VECTOR NUCLEAR
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 8) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &nuclear[num_nuclear]);
                    num_nuclear++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    // for (i = 0; i < num_nuclear; i++) {
    //    printf("%lf ", nuclear[i]);
    // }

    // printf("\n");
    // printf("\n");
    
    
    // VECTOR CARBON
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 9) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &carbon[num_carbon]);
                    num_carbon++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    // for (i = 0; i < num_carbon; i++) {
    //     printf("%lf ", carbon[i]);
    // }

    // printf("\n");
    // printf("\n");
    
    
    // VECTOR FUEL + GAS
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 10) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &fuel_gas[num_fuel_gas]);
                    num_fuel_gas++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    // for (i = 0; i < num_fuel_gas; i++) {
    //     printf("%lf ", fuel_gas[i]);
    // }

    // printf("\n");
    // printf("\n");
    
    
    // VECTOR MOTOR DIESEL
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 11) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &motores_diesel[num_motores_diesel]);
                    num_motores_diesel++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    // for (i = 0; i < num_motores_diesel; i++) {
    //    printf("%lf ", motores_diesel[i]);
    // }

    // printf("\n");
    // printf("\n");
    
    
    // VECTOR TURBINA GAS
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 12) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &turbina_gas[num_turbina_gas]);
                    num_turbina_gas++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    // for (i = 0; i < num_turbina_gas; i++) {
    //     printf("%lf ", turbina_gas[i]);
    // }

    // printf("\n");
    // printf("\n");
    
    
    // VECTOR TURBINA VAPOR
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 13) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &turbina_vapor[num_turbina_vapor]);
                    num_turbina_vapor++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    // for (i = 0; i < num_turbina_vapor; i++) {
    //     printf("%lf ", turbina_vapor[i]);
    // }

    // printf("\n");
    // printf("\n");
    
    
    // VECTOR CICLO COMBINADO
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 14) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &ciclo_combinado[num_ciclo_combinado]);
                    num_ciclo_combinado++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_ciclo_combinado; i++) {
        printf("%lf ", ciclo_combinado[i]);
    }

    printf("\n");
    printf("\n");
    
    
    // VECTOR HIDROEOLICA
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 15) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &hidroeolica[num_hidroeolica]);
                    num_hidroeolica++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_hidroeolica; i++) {
        printf("%lf ", hidroeolica[i]);
    }

    printf("\n");
    printf("\n");
    
    
    // VECTOR EOLICA
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 16) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &eolica[num_eolica]);
                    num_eolica++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_eolica; i++) {
        printf("%lf ", eolica[i]);
    }

    printf("\n");
    printf("\n");
    
    // VECTOR SOLAR FOTOVOLTAICA
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 17) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &solar_fotovoltaica[num_solar_fotovoltaica]);
                    num_solar_fotovoltaica++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_solar_fotovoltaica; i++) {
        printf("%lf ", solar_fotovoltaica[i]);
    }

    printf("\n");
    printf("\n");
    
    
    // VECTOR SOLAR TERMICA
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 18) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &solar_termica[num_solar_termica]);
                    num_solar_termica++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_solar_termica; i++) {
        printf("%lf ", solar_termica[i]);
    }

    printf("\n");
    printf("\n");
    
    
    // VECTOR OTRAS RENOVABLES
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 19) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &otras_renovables[num_otras_renovables]);
                    num_otras_renovables++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_otras_renovables; i++) {
        printf("%lf ", otras_renovables[i]);
    }

    printf("\n");
    printf("\n");
    
    
    // VECTOR COGENERACION
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 20) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &cogeneracion[num_cogeneracion]);
                    num_cogeneracion++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_cogeneracion; i++) {
        printf("%lf ", cogeneracion[i]);
    }

    printf("\n");
    printf("\n");
    
    
    // VECTOR RESIDUOS NO RENOVABLES
    
    fp = fopen("C:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos.csv", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    i = 0;
    
    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 21) {
            char *p;
            p = strtok(linea, "\"");
            int j = 0;
            while (p != NULL) {
                if (j % 2 == 1) {
                    sscanf(p, "%lf", &residuos_norenovables[num_residuos_norenovables]);
                    num_residuos_norenovables++;
                }
                j++;
                p = strtok(NULL, "\"");
            }
            break;
        }
    }
    
    fclose(fp);

    for (i = 0; i < num_residuos_norenovables; i++) {
        printf("%lf ", residuos_norenovables[i]);
    }

    printf("\n");
    printf("\n");
    
 

    return 0;
}

