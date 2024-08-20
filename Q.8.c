#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;

    while (1) {
        // Leitura dos valores de A, B e C
        scanf("%d %d %d", &A, &B, &C);

        // Encerra o programa se todos os valores forem 0
        if (A == 0 && B == 0 && C == 0) {
            break;
        }

        // Calcula e imprime o lado do terreno quadrado
        int lado = (int) sqrt((A * B * 100.0) / C);
        printf("%d\n", lado);
    }

    return 0;
}
