#include <stdio.h>

int main() {
    int notas[3][3];
    int *ptr = &notas[0][0];
    int somaDiagonal = 0;

    printf("Digite as notas (3 provas de 3 alunos):\n");
    for (int i = 0; i < 9; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", ptr + i);  
    }

    printf("\nNotas registradas:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", *(ptr + i));
        if ((i + 1) % 3 == 0)  
            printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        somaDiagonal += *(ptr + i * 3 + i);
    }

    printf("\nSoma da diagonal principal: %d\n", somaDiagonal);

    return 0;
}
