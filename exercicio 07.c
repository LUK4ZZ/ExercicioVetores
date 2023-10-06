#include <stdio.h>

int main() {


    int vetor[10];
    int maior, posicao;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }


    maior = vetor[0];
    posicao = 0;


    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("Vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O maior elemento é %d e está na posição %d do vetor.\n", maior, posicao);

}
