#include <stdio.h>

int main() {
    printf("\nCofrinho do João\n");

    int cofrinho = 0;    
    int *p = &cofrinho;  

    cofrinho = 150; 

    printf("Valor guardado: %d\n", *p);
    printf("Endereço na memória: %p\n", (void*)p);

    return 0;

    /* saida: Cofrinho do João
    Valor guardado: 150
    Endereço na memória: 0x7ffdaafcec6c
    */
}
