#include<stdio.h>
#include<math.h>

int main(){

    float vetX[10], vetY[10];

    for(int i = 0; i < 10; i++){
        printf("Insira os numeros de x: \n");
        scanf("%f", &vetX[i]);

        vetY[i] = pow(vetX[i], 2);
    }
    for(int i = 0; i < 10; i++){
        printf("\nValor de x%d = [%.2f] Valor de y%d = [%.2f]", i, vetX[i], i, vetY[i]);
    }
    
}