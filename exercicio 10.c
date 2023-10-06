#include <stdio.h>

int main() {
    
    int numAlunos = 15;
    float notas[numAlunos];
    float somaNotas = 0;

 
    printf("Digite as notas dos %d alunos:\n", numAlunos);
    for (int i = 0; i < numAlunos; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }

    
    float mediaGeral = somaNotas / numAlunos;

    printf("A média geral das notas é: %.2f\n", mediaGeral);
}
