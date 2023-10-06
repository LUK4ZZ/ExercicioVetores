#include <stdio.h>

int main() {


    int vetor[10];
    int contadorPares = 0;


    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            contadorPares++;
        }
    }

    printf("O vetor contém %d valores pares.\n", contadorPares);

}
