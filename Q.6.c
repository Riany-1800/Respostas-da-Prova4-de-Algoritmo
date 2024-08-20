#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void substituiçao(char *texto, char *chave);

int main(int argc, char *argv[]) {
    // Verifica se há exatamente 2 argumentos
    if (argc != 2 || strlen(argv[1]) != 26) {
        printf("Uso: ./substituiçao chave\n");
        return 1;
    }

    char *chave = argv[1];
    bool uso[26] = {falso};

    // Verifica se a chave é válida
    for (int i = 0; i < 26; i++) {
        if (!isalpha(chave[i]) || uso[abaixar(chave[i]) - 'a']) {
            printf("A chave deve conter 26 caracteres alfabéticos exclusivos.\n");
            return 1;
        }
        uso[abaixar(chave[i]) - 'a'] = verdadeiro;
    }

    // Obtém o texto a ser criptografado do usuário
    char texto[100];
    printf("texto simples: ");
    fgets(texto, sizeof(texto), stdin);

    // Substitui e imprime o texto criptografado
    substituiçao(texto, chave);
    printf("text cifrado: %s\n", texto);

    return 0;
}

void substituiçao(char *texto, char *chave) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (isalpha(texto[i])) {
            text[i] = isupper(text[i]) ? toupper(chave[texto[i] - 'A']) : abaixar(chave[texto[i] - 'a']);
        }
    }
}
