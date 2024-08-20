#include <stdio.h>

int main() {
    int n, soma = 0;

    // O tamanho do array
    printf("Digite o tamanho do Vet: ");
    scanf("%d", &n);

    // Declara o array com o tamanho fornecido
    int Vet[n];

    // Elementos do array e soma diretamente
    printf("Digite %d numeros inteiros:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &Vet[i]);
        soma += Vet[i];  // Soma cada elemento imediatamente apos a leitura
    }

    // Imprime o resultado
    printf("A soma dos elementos: %d\n", soma);

    return 0;
}


