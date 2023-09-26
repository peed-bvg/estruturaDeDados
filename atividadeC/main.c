#include <stdio.h>
#include </users/Lukemew/Documents/estruturaDeDados/atividadeC/bibli.h>
#define TAM 10
int main(){
       int vetor[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int opcao;
    int elemento;
    int posicao;
    int tamanho = TAM;

     do{
        printf("\n \n-------------------------------------------------------------------\n");
        printf("Digite a opcao que desejara realizar:\n1 - Travessia do vetor\n2 - Inserir elemento no vetor\n3 - Buscar elemento no vetor\n4 - Excluir elemento do vetor\n5 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                travessiaVetor(vetor, tamanho);
            break;

            case 2:
                printf("\nInforme o elemento que deseja inserir no vetor: ");
                scanf("%d", &elemento);
                printf("Informe a posicao em que deseja inserir o elemento de 0 a %d: ", tamanho - 1);
                scanf("%d", &posicao);
                insereElemento(vetor, tamanho, elemento, posicao);
            break;

            case 3:
                buscaElemento(vetor, tamanho, elemento);
            break;

            case 4:
                printf("\nInforme o valor do elemento que deseja excluir: ");
                scanf("%d", &elemento);
                excluirElemento(vetor, TAM, elemento);
                tamanho -= 1;
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