
#include <stdio.h>

int main() {
    int opcion;
    printf("=== Red Eléctrica Española ===\n\n");
    
    printf("Bienvenido a este programa acerca de la forma de generacio´n de energi´a ele´ctrica en Espan~a durante los an~os 2021 y 2022\n\n");
    do {
        // Imprimir el menú
        
        printf("A continuación, dispone del menu de opciones que ofrecemos:\n\n");
        
        printf("1. Informacion general \n");
        printf("2. Datos del gasto energetico\n");
        printf("3. Cálculos estadisticos\n");
        printf("4. Busqueda de datos\n");
        printf("5. Ordenar datos\n");
        printf("6. Diagrama de barras\n");
        printf("7. Salir\n");
        printf("Ingrese una opcion: \n\n");
        scanf("%d", &opcion);

        // Realizar acciones según la opcion seleccionada
        switch (opcion) {
            case 1:
                printf("Has seleccionado la opcion 1: Informacion general\n\n");
                //Informacion general                
                break;
            case 2:
                printf("Has seleccionado la opcion 2: Gasto energetico\n");
               //gasto energetico
                break;
            case 3:
                printf("Has seleccionado la opcion 3: calculos estadisticos\n");
                //cálculos estadisticos
                break;
            case 4:
                printf("Has seleccionado la opcion 4: Busqueda de datos \n");
                //busqueda de datos
                break;
            case 5:
                printf("Has seleccionado la opcion 5: Ordenar datos \n");
                //ordenar datos
                break;
            
            case 6:
                printf ("Has seleccionado la opcion 6: Diagrama de barras \n");
                //Diagrama de barras
                break;
            case 7:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                break;
        }

        printf("\n");
    } while (opcion != 7);

    return 0;
}


