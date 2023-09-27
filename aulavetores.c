#include <stdio.h>
#include <C:\Users\SofiaCarneiro\OneDrive\Documentos\GitHub\estruturaDeDados-1\aulaDeVetores\bibliotecaVetores.h>

void imprimirVetor(int vetor[], int tamanhoAtual) {
    printf("Elementos do vetor: ");
    for (int i = 0; i < tamanhoAtual; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nTamanho do vetor: %d\n", tamanhoAtual);
}

int buscarElemento(int vetor[], int tamanhoAtual, int valor) {
    for (int i = 0; i < tamanhoAtual; i++) {
        if (vetor[i] == valor) {
            return i; // Retorna o índice do elemento encontrado
        }
    }
    return -1; // Retorna -1 caso o elemento não seja encontrado
}

void implementarElemento(int vetor[], int *tamanhoAtual, int valor, int posInsercao) {
    if (*tamanhoAtual >= posInsercao && posInsercao >= 0) {
        // Desloca os elementos para a direita para fazer espaço para o novo elemento
        for (int i = *tamanhoAtual; i > posInsercao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[posInsercao] = valor;
        (*tamanhoAtual)++;
    } else {
        printf("Posição de inserção inválida.\n");
    }
}

int excluirElemento(int vetor[], int *tamanhoAtual, int valorElemento) {
    int encontrado = 0;
    for (int i = 0; i < *tamanhoAtual; i++) {
        if (vetor[i] == valorElemento) {
            encontrado = 1;
            // Move os elementos à direita do índice para a esquerda para preencher o espaço
            for (int j = i; j < *tamanhoAtual - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            (*tamanhoAtual)--;
            i--; // Para verificar novamente o elemento atual após a reorganização
        }
    }
    return encontrado ? 1 : 0; // Retorna 1 se o elemento foi encontrado e excluído, 0 caso contrário
}

int main() {
    int vetor[100];
    int tamanhoAtual = 0;

    implementarElemento(vetor, &tamanhoAtual, 10, 0);
    implementarElemento(vetor, &tamanhoAtual, 20, 1);
    implementarElemento(vetor, &tamanhoAtual, 30, 2);

    imprimirVetor(vetor, tamanhoAtual);
    printf("Posição do elemento 20: %d\n", buscarElemento(vetor, tamanhoAtual, 20));

    excluirElemento(vetor, &tamanhoAtual, 20);
    imprimirVetor(vetor, tamanhoAtual);

    return 0;
}
