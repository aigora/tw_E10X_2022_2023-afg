#include <stdio.h>

void diagrama (float v[24], int exp, char* fichero2);

int main () {
    
    void diagrama (float v[24], int exp, char* fichero2);
    
    return 0;
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
