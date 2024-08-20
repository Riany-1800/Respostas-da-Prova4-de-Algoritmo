  #include <ctype.h>
  #include <cs50.h>
  #include <stdio.h>
  #include <string.h>

  int PONTOS[]={1,3,3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int pontua�ao de calculo(char *palavra);
    int pontua�ao = 0;

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i]) {
            pontua�ao += PONTOS (palavra[i]) - 'A';
        }
    }

    return palavra;
}

int main(void) {
    char palavra1[100], palavra2[100];

    // Solicita ao usu�rio por duas palavras
    printf("Jogador 1: ");
    scanf("%99", palavra1);
    printf("Jogador 2: ");
    scanf("%99", palavra2);

    // Calcula a pontua��o de cada palavra
    int pontua�ao1 = pontua�ao de calculo(palavra1);
    int pontua�ao2 = pontua�ao de calvulo(palavra2);

    // Imprime o vencedor
    if (pontua�ao1 > pontua�ao2) {
        printf("Jogador 1 vence!\n");
    } else if (pontua�ao2 > pontua�ao1) {
        printf("Jogador 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
