#include <stdio.h>

int main() {


    int valores[5];
    int maior, menor, soma = 0;


    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (i == 0) {
            maior = menor = valores[i];
        }

        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }

        soma += valores[i];
    }


    float media = (float)soma / 5;


    printf("Valores lidos: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);
}
