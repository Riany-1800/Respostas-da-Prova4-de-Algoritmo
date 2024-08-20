#include <stdio.h>

int main() {
    int N, max_fichas = 0, ultimo_a_rir = 0;

    // Leitura do número de jogadores
    scanf("%d", &N);

    // Leitura dos números de fichas e determinação do último a rir
    for (int i = 0; i < N; i++) {
        int fichas;
        scanf("%d", &fichas);
        
        if (fichas > max_fichas) {
            max_fichas = fichas;
            ultimo_a_rir = i + 1; // Índice 1-indexado
        }
    }

    // Imprime o índice do jogador que será o último a rir
    printf("%d\n", ultimo_a_rir);

    return 0;
}
