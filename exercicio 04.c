#include<stdio.h>

int main(){

    int vetor[8];
    int x, y, soma;

    for(int i = 0; i < 8; i++){
        printf("Insira o valor(%d): \n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Escolha um numeros de 0 a 7: \n");
    scanf("%d", &x);

    printf("Escolha mais um numeros de 0 a 7: \n");
    scanf("%d", &y);

    soma = vetor[x] + vetor[y];
    printf("A soma das posiçoes %d e %d é %d", x, y, soma);

    
}