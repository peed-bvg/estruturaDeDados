#include <stdio.h>
#include "bibli.h"


void travessiaVetor(int vetor[], int tamanhoAtualVetor){
    
    printf("Elementos do vetor: ");
    for (int i = 0; i < tamanhoAtualVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

}

int buscaElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
      for (int i = 0; i < tamanhoAtualVetor; i++) {
        if (vetor[i] == valorElemento) {
            return i; // Retorna a posição do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado


}

void insereElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento, int posicaoInsercao){
    if (posicaoInsercao < 0 || posicaoInsercao > *tamanhoAtualVetor) {
        printf("Posição de inserção inválida.\n");
        return;
    }

    for (int i = *tamanhoAtualVetor; i > posicaoInsercao; i--) {
        vetor[i] = vetor[i - 1];
    }

    vetor[posicaoInsercao] = valorElemento;
    (*tamanhoAtualVetor)++;
    
}


int excluirElemento(int vetor[], int *tamanhoAtualVetor, int posicao){
    if (posicao < 0 || posicao >= *tamanhoAtualVetor) {
        printf("Posição de exclusão inválida.\n");
        return;
    }

    for (int i = posicao; i < (*tamanhoAtualVetor - 1); i++) {
        vetor[i] = vetor[i + 1];
    }

    (*tamanhoAtualVetor)--;

}


int main() {

    int vetor[100]; // Tamanho máximo do vetor
    int tamanho = 0; // Tamanho atual do vetor
    int escolha;

    do {
        printf("\n=== Operacoes com Vetores ===\n");
        printf("1. Travessia do vetor\n");
        printf("2. Inserir elemento\n");
        printf("3. Excluir elemento\n");
        printf("4. Pesquisar elemento\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                travessiaVetor(vetor, tamanho);
                break;

            case 2:
                if (tamanho < 100) {
                    int elemento, posicao;
                    printf("Digite o elemento a ser inserido: ");
                    scanf("%d", &elemento);
                    printf("Digite a posicao de insercao: ");
                    scanf("%d", &posicao);
                    insereElemento(vetor, &tamanho, elemento, posicao);
                    printf("Elemento inserido com sucesso!\n");
                } else {
                    printf("O vetor esta cheio. Nao e possivel inserir mais elementos.\n");
                }
                break;

            case 3:
                if (tamanho > 0) {
                    int posicao;
                    printf("Digite a posicao do elemento a ser excluido: ");
                    scanf("%d", &posicao);
                    excluirElemento(vetor, &tamanho, posicao);
                    printf("Elemento excluido com sucesso!\n");
                } else {
                    printf("O vetor esta vazio. Nao ha elementos para excluir.\n");
                }
                break;

            case 4:
                if (tamanho > 0) {
                    int elemento, posicao;
                    printf("Digite o elemento a ser pesquisado: ");
                    scanf("%d", &elemento);
                    posicao = buscaElemento(vetor, tamanho, elemento);
                    if (posicao != -1) {
                        printf("O elemento %d foi encontrado na posicao %d.\n", elemento, posicao);
                    } else {
                        printf("O elemento %d nao foi encontrado no vetor.\n", elemento);
                    }
                } else {
                    printf("O vetor esta vazio. Nao ha elementos para pesquisar.\n");
                }
                break;

            case 5:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (escolha != 5);

    return 0;
}

