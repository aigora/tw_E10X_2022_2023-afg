
#include <stdio.h>

int main() {
    int opcion;
    printf("=== Red Eléctrica Española ===\n\n");
    
    printf("Bienvenido a este programa acerca de la forma de generación de energía eléctrica en España durante los años 2021 y 2022\n\n");
    do {
        // Imprimir el menú
        
        printf("A continuación, dispone del menu de opciones que ofrecemos:\n\n");
        
        printf("1. Información general \n");
        printf("2. Datos del gasto energético\n");
        printf("3. Cálculos estadísticos\n");
        printf("4. Comparación con otros paises\n");
        printf("5. \n");
        printf("6. Salir\n");
        printf("Ingrese una opción: \n\n");
        scanf("%d", &opcion);

        // Realizar acciones según la opción seleccionada
        switch (opcion) {
            case 1:
                printf("Has seleccionado la opción 1: Información general\n\n");
                
                printf("Durante los años 2021 y 2022, España combinó fuentes convencionales y renovables en su generación de energía eléctrica. Destacaron la energía eólica y solar como principales fuentes renovables. Se instalaron nuevos parques eólicos y plantas solares, aprovechando los recursos naturales del país. Aunque las fuentes convencionales como la energía nuclear y los combustibles fósiles tuvieron un papel importante, se observó una disminución gradual en la generación de electricidad a partir del carbón. Se realizaron avances en infraestructuras de transporte y almacenamiento de energía, implementando tecnologías de almacenamiento para una gestión eficiente de la energía renovable. En resumen, España avanzó hacia una generación más sostenible, combinando fuentes renovables y convencionales para satisfacer la demanda eléctrica y reducir las emisiones de gases de efecto invernadero..\n\n");
                
                break;
            case 2:
                printf("Has seleccionado la opción 2: \n");
               //gasto energético
                break;
            case 3:
                printf("Has seleccionado la opción 3: \n");
                //cálculos estadísticos
                break;
            case 4:
                printf("Has seleccionado la opción 4: \n");
                //comparación con otros paises
                break;
            case 5:
                printf("Has seleccionado la opción 5: \n");
                
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                break;
        }

        printf("\n");
    } while (opcion != 6);

    return 0;
}


