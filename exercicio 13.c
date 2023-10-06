#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor, posicaoMaior, posicaoMenor;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

      
        if (i == 0) {
            maior = menor = valores[i];
            posicaoMaior = posicaoMenor = i;
        }

      
        if (valores[i] > maior) {
            maior = valores[i];
            posicaoMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posicaoMenor = i;
        }
    }

   
    printf("Posição do maior valor: %d\n", posicaoMaior);
    printf("Posição do menor valor: %d\n", posicaoMenor);
}
