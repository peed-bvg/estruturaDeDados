#include <stdio.h>
#include </home/ExpeditoFarias/Git/estruturaDeDados/AtividadeVetoress/bibli.h>

#define TAM 10

int main() {
    int vetor[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int opcao;
    int elemento;
    int posicao;
    int tamanho = TAM;

    do {
        printf("--------------------------------------------------------------------------\n");
        printf("Digite a opção que deseja realizar:\n");
        printf("1 - Travessia do vetor\n");
        printf("2 - Inserir elemento no vetor\n");
        printf("3 - Buscar elemento no vetor\n");
        printf("4 - Excluir elemento do vetor\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                travessiaVetor(vetor, tamanho);
                break;

            case 2:
                printf("\nInforme o elemento que deseja inserir no vetor: ");
                scanf("%d", &elemento);
                printf("Informe a posição em que deseja inserir o elemento de 0 a %d: ", tamanho - 1);
                scanf("%d", &posicao);
                insereElemento(vetor, &tamanho, elemento, posicao);
                break;

            case 3:
                printf("\nInforme o valor do elemento que deseja buscar: ");
                scanf("%d", &elemento);
                buscaElemento(vetor, tamanho, elemento);
                break;

            case 4:
                printf("\nInforme o valor do elemento que deseja excluir: ");
                scanf("%d", &elemento);
                excluirElemento(vetor, &tamanho, elemento);
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

