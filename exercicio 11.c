#include <stdio.h>

int main() {

    
    float vetor[10];
    int qtdNegativos = 0;
    float somaPositivos = 0;


    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &vetor[i]);

      
        if (vetor[i] < 0) {
            qtdNegativos++;
        }
       
        else if (vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }


    printf("Quantidade de números negativos: %d\n", qtdNegativos);


    printf("Soma dos números positivos: %.2f\n", somaPositivos);
}
