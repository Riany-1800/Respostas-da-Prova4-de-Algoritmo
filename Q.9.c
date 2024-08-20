#include <stdio.h>

int main() {
    int N, max_fichas = 0, ultimo_a_rir = 0;

    // Leitura do n�mero de jogadores
    scanf("%d", &N);

    // Leitura dos n�meros de fichas e determina��o do �ltimo a rir
    for (int i = 0; i < N; i++) {
        int fichas;
        scanf("%d", &fichas);
        
        if (fichas > max_fichas) {
            max_fichas = fichas;
            ultimo_a_rir = i + 1; // �ndice 1-indexado
        }
    }

    // Imprime o �ndice do jogador que ser� o �ltimo a rir
    printf("%d\n", ultimo_a_rir);

    return 0;
}
