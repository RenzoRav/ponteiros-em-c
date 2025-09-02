#include <stdio.h>

int main() {
    int notas[6];          
    int *ptr = notas;      
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", ptr + i);  
    }

    for (i = 0; i < 3; i++) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + 5 - i);
        *(ptr + 5 - i) = temp;
    }

    printf("\nNotas na ordem inversa:\n");
    for (i = 0; i < 6; i++) {
        printf("Nota %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
