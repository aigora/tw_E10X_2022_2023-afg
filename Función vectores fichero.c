#include <stdio.h>

void vectores_energia (char* fichero, float v[24], int x, int k);

int main () {
	
	void vectores_energia (char* fichero, float v[24], int x, int k);
	
	return 0;
}

void vectores_energia(char* fichero, float v[24], int x, int k) {
    FILE* fp = fopen(fichero, "r");
    if (fp == NULL) {
        printf("No se ha podido abrir el fichero.\n\n");
        return;
    }

    int i;
    char c;

    for (i = 0; i < 5+x; i++) {
        while (fscanf(fp, "%c", &c) != EOF && c != '\n') {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == 'á' || c == 'é' || c == 'í' || c == 'ó' || c == 'ú') {
                c = ',';
            }
        }
    }

    for (i = 0; i < k; i++) {
        fscanf(fp, "%c", &c);
    }
    
    for (i = 0; i < 24; i++) {
        fscanf(fp, ",%f", &v[i]);
    }

    fclose(fp);
}
