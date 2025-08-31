#include <stdio.h>

int main () {

    int preços[5];

    int *p = preços;

    int desconto;

    for (int i = 0; i < 5; i++) {
        printf("Digite o preço %d: ", i + 1);
        scanf("%d", p + i); 
    }

    for (int i = 0; i < 5; i++) {
        printf("Preço %d: %d\n", i + 1, *(p + i));
    }

    printf("Digite o desconto: ");
    scanf("%d", &desconto);

    for (int i = 0; i < 5; i++) {
        printf("Preço %d com desconto: %d\n", i + 1, *(p + i) - (*(p + i) * desconto / 100));
    }

    return 0;

    /*
    saida: Digite o preço 1: 10
    Digite o preço 2: 20
    Digite o preço 3: 30           
    Digite o preço 4: 40
    Digite o preço 5: 50
    Preço 1: 10
    Preço 2: 20
    Preço 4: 40
    Preço 5: 50
    Digite o desconto: 10
    Preço 1 com desconto: 9
    Preço 2 com desconto: 18
    Preço 4 com desconto: 36
    Preço 5 com desconto: 45
    Preço 4 com desconto: 36
    Preço 5 com desconto: 45
    */
}