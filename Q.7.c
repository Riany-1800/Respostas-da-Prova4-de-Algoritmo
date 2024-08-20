#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    // Verifica se há exatamente dois argumentos e se a chave é um número positivo
    if (argc != 2 || (atoi(argv[1]) <= 0)) {
        printf("Uso: ./caesar chave\n");
        return 1;
    }

    int chave = atoi(argv[1]);

    // Solicita o texto a ser criptografado
    char textosimples[100];
    printf("texto simples: ");
    fgets(textosimples, sizeof(textosimples), stdin);

    printf("texto cifrado: ");
    
    // Criptografa o texto
    for (int i = 0; textosimples[i] != '\0'; i++) {
        if (isalpha(textosimples[i])) {
            char desvio = isupper(plaintext[i]) ? 'A' : 'a';
            printf("%c", (textosimples[i] - desvio + chave) % 26 + desvio);
        } else {
            printf("%c", textosimples[i]);
        }
    }
    printf("\n");
    return 0;
}
