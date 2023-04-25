#include <stdio.h>

int main ()
{
	int choice;
    
    do {
        printf("Menu:\n");
        printf("1. Tarea 1\n");
        printf("2. Tarea 2\n");
        printf("3. Tarea 3\n");
        printf("4. Salir\n");
        printf("Ingrese su eleccion: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Ha elegido la Tarea 1.\n");
                // Agregar codigo para la Tarea 1
                break;
            case 2:
                printf("Ha elegido la Tarea 2.\n");
                // Agregar codigo para la Tarea 2
                break;
            case 3:
                printf("Ha elegido la Tarea 3.\n");
                // Agregar codigo para la Tarea 3
                break;
            case 4:
                printf("Ha elegido salir.\n");
                break;
            default:
                printf("Opcion invalida. Por favor intente de nuevo.\n");
                break;
        }
        
        printf("\n");
    } while (choice != 4);
	
	return 0;
}
