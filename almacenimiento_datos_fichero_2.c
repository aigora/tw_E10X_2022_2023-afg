#include <stdio.h>
#include <string.h>

int main() {
	
    FILE *fp;
    char linea[500];
    double hidraulica[25], turbinacion_bombeo[25], nuclear[25], carbon[25], fuel_gas[25], motores_diesel[25], turbina_gas[25], turbina_vapor[25], ciclo_combinado[25], hidroeolica[25];
    double eolica[25], solar_fotovoltaica[25], solar_termica[25], otras_renovables[25], cogeneracion[25], residuos_norenovables[25], residuos_renovables[25], generacion_total[25];
    int num_hidraulica = 0, num_turbinacion_bombeo = 0, num_nuclear = 0, num_carbon = 0, num_fuel_gas = 0, num_motores_diesel = 0, num_turbina_gas = 0, num_turbina_vapor = 0;
    int num_ciclo_combinado = 0, num_hidroeolica = 0, num_eolica = 0, num_solar_fotovoltaica = 0, num_solar_termica = 0, num_otras_renovables = 0, num_cogeneracion = 0;
    int num_residuos_norenovables = 0, num_residuos_renovables = 0, num_generacion_total = 0;
    char fechas[][8] = { "01/2021", "02/2021", "03/2021", "04/2021", "05/2021", "06/2021", "07/2021", "08/2021", "09/2021", "10/2021", "11/2021", "12/2021", "01/2022", "02/2022", "03/2022", "04/2022", "05/2022", "06/2022", "07/2022", "08/2022", "09/2022", "10/2022", "11/2022", "12/2022" };
    int i, k;

	
	char fichero2[] = "C:/Users/arnol/Downloads/balance-electrico_01-2021_12-2022.csv";
	
	// VECTOR HIDRAULICA
   
    fp = fopen(fichero2, "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    while (fgets(linea, sizeof(linea), fp)) {
        i++;
        if (i == 5) {
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
    
    // IMPRIMIR VECTORES

    for (i = 0; i < num_hidraulica; i++) {
	    printf("%lf ", hidraulica[i]);
	}
	printf("\n");
	printf("\n");
	
	return 0;
}
    
