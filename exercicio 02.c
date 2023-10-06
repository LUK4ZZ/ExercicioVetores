#include<stdio.h>

int main(){

    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Insira o valor:\n");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 6; i++){
        printf("\nVetor[%d] = %d", i, vetor[i]);
    }

    
}