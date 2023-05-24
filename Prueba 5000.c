#include <stdio.h>

int main() {
    float hidraulica[24];
    float turbinacion[24];
    float nuclear[24];
    float carbon[24];
    float motores[24];
    float turbinagas[24];
    float turbinavapor[24];
    float ciclocombinado[24];
    float hidroeolica[24];
    float eolica[24];
    float solarfotov[24];
    float solartermica[24];
    float renovables[24];
    float cogeneracion[24];
    float residuosNR[24];
    float residuosR[24];
    float generacionT[24];
    int i;

    FILE *pf;
    pf = fopen("c:/Users/arnol/Downloads/generacion_por_tecnologias_21_22_puntos_simplificado.csv", "r");
    if (pf == NULL) {
        printf("No se ha podido abrir el fichero.\n");
        return 1;
    }

    // Saltar las líneas de encabezado y las primeras 5 líneas
    char line[500];
    for (i = 0; i < 5; i++) {
        fgets(line, sizeof(line), pf);
    }

    // Leer los valores del archivo y guardarlos en los vectores correspondientes
    for (i = 0; i < 24; i++) {
        fscanf(pf, "%*[^,] ,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",
            &hidraulica[i], &turbinacion[i], &nuclear[i], &carbon[i], &motores[i], &turbinagas[i],
            &turbinavapor[i], &ciclocombinado[i], &hidroeolica[i], &eolica[i], &solarfotov[i],
            &solartermica[i], &renovables[i], &cogeneracion[i], &residuosNR[i], &residuosR[i], &generacionT[i]);
    }

    fclose(pf);

    for (i = 0; i < 12; i++) {
        printf("%f, ", hidraulica[i]);
    }

    // Los datos han sido leídos y almacenados en los vectores correspondientes
    // Puedes hacer uso de estos vectores según tus necesidades

    return 0;
}

