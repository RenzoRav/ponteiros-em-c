#include <stdio.h>

int main() {
    int pontos[4][4] = {
        {5, 7, 8, 6},
        {4, 6, 5, 7},
        {3, 9, 6, 8},
        {2, 4, 7, 5}
    };

    int pares = 0, impares = 0;
    int totalJogador[4] = {0}, totalSet[4] = {0};
    float mediaJogador[4];
    int maxJogador = 0, maxSet = 0;
    int jogadorMax = 0, setMax = 0;
    int regularidade[4], jogadorRegular = 0;

    int *p = &pontos[0][0];

    printf("Matriz de pontos:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", *(p + i * 4 + j));
        }
        printf("\n");
    }

    for (int i = 0; i < 16; i++) {
        if (*(p + i) % 2 == 0) pares++;
        else impares++;
    }

    for (int i = 0; i < 4; i++) {
        int min = *(p + i * 4);
        int max = *(p + i * 4);
        for (int j = 0; j < 4; j++) {
            int val = *(p + i * 4 + j);
            totalJogador[i] += val;
            totalSet[j] += val;
            if (val < min) min = val;
            if (val > max) max = val;
        }
        regularidade[i] = max - min;
        if (regularidade[i] < regularidade[jogadorRegular]) jogadorRegular = i;
    }

    for (int i = 0; i < 4; i++) {
        if (totalJogador[i] > maxJogador) {
            maxJogador = totalJogador[i];
            jogadorMax = i;
        }
        if (totalSet[i] > maxSet) {
            maxSet = totalSet[i];
            setMax = i;
        }
    }

    for (int i = 0; i < 4; i++) {
        mediaJogador[i] = totalJogador[i] / 4.0;
    }

    printf("\nPares: %d, Impares: %d\n", pares, impares);
    printf("Pontuacao total por jogador:\n");
    for (int i = 0; i < 4; i++) {
        printf("Jogador %d: %d\n", i + 1, totalJogador[i]);
    }
    printf("Jogador com maior pontuacao: %d\n", jogadorMax + 1);

    printf("\nPontuacao total por set:\n");
    for (int i = 0; i < 4; i++) {
        printf("Set %d: %d\n", i + 1, totalSet[i]);
    }
    printf("Set mais disputado: %d\n", setMax + 1);

    printf("\nMedia de pontos por jogador:\n");
    for (int i = 0; i < 4; i++) {
        printf("Jogador %d: %.2f\n", i + 1, mediaJogador[i]);
    }

    printf("\nJogador mais regular: %d\n", jogadorRegular + 1);

    return 0;
}
