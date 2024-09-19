#include <stdio.h>

int main() {
    char letras[100]; 
    int i, j, tamanho;

    printf("Digite as letras, por favor (maximo 100):\n");
    
    fgets(letras, 100, stdin);

    
    tamanho = 0;
    while (letras[tamanho] != '\0') {
        tamanho++;
    }

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (letras[j] > letras[j+1]) {
                
                char temp = letras[j];
                letras[j] = letras[j+1];
                letras[j+1] = temp;
            }
        }
    }

    printf("Letras em ordem alfabetica: %s\n", letras);

    return 0;
}