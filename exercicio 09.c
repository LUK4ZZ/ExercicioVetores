#include <stdio.h>

int main() {


    int valores[6];

    printf("Digite 6 valores inteiros pares:\n");

    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

    
        if (valores[i] % 2 == 1) {
            printf("Este valor não é par. Tente novamente.\n");
            i--; 
        }
    }

    printf("Valores na ordem inversa:\n");

    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

}
