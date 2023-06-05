#include <stdio.h>
#include <math.h>

void imprimir_energia (float v[24], int ano, int total, int exp, char* fichero2);
void imprimir_energia_mes (float v[24], int mes, int ano, int total, int exp, char* fichero2);

int main () {
	
	void imprimir_energia (float v[24], int ano, int total, int exp, char* fichero2);
	void imprimir_energia_mes (float v[24], int mes, int ano, int total, int exp, char* fichero2);
	
	return 0;
}

void imprimir_energia(float v[24], int ano, int total, int exp, char* fichero2) {
	
    float suma = 0, desviacion = 0, media;
    int i;

    for (i = 0; i < 24; i++) {
        suma = suma + v[i];
    }

    media = suma / 24;

    for (i = 0; i < 24; i++) {
        desviacion = desviacion + pow(v[i] - media, 2);
    }
    
    desviacion = sqrt (desviacion / 24);

    if (total == 1 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2021: %f\n", suma);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2021: %f\n", suma);
        }
    } else if (total == 2 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia media generada en 2021: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2021: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia media generada en 2021: %f\n", media);
            printf ("Desviacion tipica en 2021: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 2021) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2021: %f\n", suma);
                fprintf (fp, "Energia media generada en 2021: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2021: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2021: %f\n", suma);
            printf ("Energia media generada en 2021: %f\n", media);
            printf ("Desviacion tipica en 2021: %f\n", desviacion);
        }
    } else if (total == 1 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2022: %f\n", suma);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2022: %f\n", suma);
        }
    } else if (total == 2 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia media generada en 2022: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2022: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia media generada en 2022: %f\n", media);
            printf ("Desviacion tipica en 2022: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 2022) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2022: %f\n", suma);
                fprintf (fp, "Energia media generada en 2022: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2022: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2022: %f\n", suma);
            printf ("Energia media generada en 2022: %f\n", media);
            printf ("Desviacion tipica en 2022: %f\n", desviacion);
        }
    } else if (total == 1 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf(fp, "Energia total generada en 2021 y 2022: %f\n", suma);
                fclose(fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2021 y 2022: %f\n", suma);
        }
    } else if (total == 2 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia media generada en 2021 y 2022: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2021 y 2022: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf ("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia media generada en 2021 y 2022: %f\n", media);
            printf ("Desviacion tipica en 2021 y 2022: %f\n", desviacion);
        }
    } else if (total == 3 && ano == 3) {
        if (exp == 1) {
            FILE *fp = fopen(fichero2, "w"); 

            if (fp != NULL) {
                fprintf (fp, "Energia total generada en 2021 y 2022: %f\n", suma);
                fprintf (fp, "Energia media generada en 2021 y 2022: %f\n", media);
                fprintf (fp, "Desviacion tipica en 2021 y 2022: %f\n", desviacion);
                fclose (fp);
                printf ("Datos exportados correctamente al archivo: Exportacion_datos\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } else if (exp == 2) {
            printf ("Energia total generada en 2021 y 2022: %f\n", suma);
            printf ("Energia media generada en 2021 y 2022: %f\n", media);
            printf ("Desviacion tipica en 2021 y 2022: %f\n", desviacion);
        }
    } else {
        printf ("Fecha invalida.\n");
    }
}

void imprimir_energia_mes(float v[24], int mes, int ano, int total, int exp, char* fichero2) {
    float suma, media;

    if (ano == 2021) {
        ano = 0;
    } else if (ano == 2022) {
        ano = 12;
    }

    suma = v[mes + ano - 1];
    media = suma / 16.0;

    if (mes >= 1 && mes <= 24) {
        if (exp == 1) {
            FILE *fp = fopen (fichero2, "w"); 

            if (fp != NULL) {
                if (total == 1) {
                    fprintf (fp, "Energia total : %f\n", suma);
                } else if (total == 2) {
                    fprintf (fp, "Energia media: %f\n\n", media);
                } else if (total == 3) {
                    fprintf( fp, "Energia total : %f\n", suma);
                    fprintf (fp, "Energia media: %f\n\n", media);
                }

                fclose (fp); 
                printf ("Datos exportado correctamente al archivo: Exportacion_datos\n\n");
            } else {
                printf("No se pudo abrir el archivo.\n");
            }
        } 
		else if (exp == 2) {
            if (total == 1) {
                printf ("Energia total : %f\n", suma);
            } else if (total == 2) {
                printf ("Energia media: %f\n\n", media);
            } else if (total == 3) {
                printf ("Energia total : %f\n", suma);
                printf ("Energia media: %f\n\n", media);
            }
        }
    } else {
        printf ("Fecha invalida.\n\n");
    }
}
