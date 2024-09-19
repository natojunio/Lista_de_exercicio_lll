#include <stdio.h>

int main() {
    int numeros[100];
    int i, j, tamanho, troca;

    printf("Digite os numeros, por favor (maximo 100):\n");

    for (i = 0; i < 100; i++) {
        if (scanf("%d", &numeros[i]) != 1) {
            break;
        }
        tamanho++;
    }

    do {
        troca = 0; 
        for (i = 0; i < tamanho - 1; i++) {
            if (numeros[i] > numeros[i+1]) {
            
                int temp = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = temp;
                troca = 1;
            }
        }
    } while (troca); 

    printf("Numeros em ordem crescente: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}