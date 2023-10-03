#include <stdio.h>
#include </home/Guilhermecarllos/Git/estruturaDeDados/atividadeC/bibli.h> 
#define TAMANHO 10

int main() {
    int array[TAMANHO] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int opcao;
    int elemento;
    int posicao;
    int tamanhoArray = TAMANHO;

    do {
        printf("--------------------------------------------------------------------------\n");
        printf("Digite a opção desejada:\n1 - Travessia do vetor\n2 - Inserir elemento no vetor\n3 - Buscar elemento no vetor\n4 - Excluir elemento do vetor\n5 - Sair\n");
        printf("Digite a opção que desejar realizar:\n1 - Travessia do vetor\n2 - Inserir elemento no vetor\n3 - Buscar elemento no vetor\n4 - Excluir elemento do vetor\n5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                travessiaVetor(array, tamanhoArray);
                break;

            case 2:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elemento);
                printf("Digite a posição onde deseja inserir o elemento: ");
                scanf("%d", &posicao);
                insereElemento(array, tamanhoArray, elemento, posicao);
                tamanhoArray++; // Incrementa o tamanho do array após a inserção.
                break;

            case 3:
                buscaElemento(array, tamanhoArray, elemento);
                break;

            case 4:
                printf("Digite o elemento a ser excluído: ");
                scanf("%d", &elemento);
                excluirElemento(array, tamanhoArray, elemento);
                tamanhoArray--; // Decrementa o tamanho do array após a exclusão.
                break;

            case 5:
                printf("\nEncerrado\n");
                break;

            default:
                printf("\nOpção inválida!\n");
        }
    } while (opcao != 5);

    return 0;
}

