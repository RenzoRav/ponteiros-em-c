#include <stdio.h>

int main () {
    int idade;

    int *p = &idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Idade: %d\n", idade);
    printf("Endereço de idade: %p\n", (void*)&idade);
    printf("Endereço armazenado em p: %p\n", (void*)p);

    return 0;
}