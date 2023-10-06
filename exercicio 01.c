#include<stdio.h>

int main(){

    int A[6] = {1, 0, 5, -2, -5, 7}, Soma;

    Soma = A[0] + A[1] + A[5];

    printf("Soma = %d", Soma);

    A[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("\nA%d %d", i, A[i]);
    }




}