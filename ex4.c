#include <stdio.h>

int main() {
    int salario[5];
    int *p = salario;
    int i;


    for (i = 0; i < 5; i++) {
        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%d", p + i);
    }

    printf("\nSalarios dos funcionarios:\n");
    for (i = 0; i < 5; i++) {
        printf("Funcionario %d: R$ %d\n", i + 1, *(p + i));
    }

    int soma = 0;
    for (i = 0; i < 5; i++) {
        soma += *(p + i);
    }
    printf("\nSoma dos salarios: R$ %d\n", soma);

    /* saida:
    Digite o salario do funcionario 1: 5000
    Digite o salario do funcionario 2: 5000
    Digite o salario do funcionario 3: 5000
    Digite o salario do funcionario 4: 5000
    Digite o salario do funcionario 5: 5000

    Salarios dos funcionarios:
    Funcionario 1: R$ 5000
    Funcionario 2: R$ 5000
    Funcionario 3: R$ 5000
    Funcionario 4: R$ 5000
    Funcionario 5: R$ 5000

    Soma dos salarios: R$ 25000 
    */

    return 0;
}