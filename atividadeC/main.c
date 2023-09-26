#include <stdio.h>
int main(){
       int vetor[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int opcao;
    int elemento;
    int posicao;
    int tamanho = TAM;
     do{
        printf("--------------------------------------------------------------------------\n");
        printf("Digite a opção desejada:\n1 - Travessia do vetor\n2 - Inserir elemento no vetor\n3 - Buscar elemento no vetor\n4 - Excluir elemento do vetor\n5 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                travessia(vetor, tamanho);
            break;

            case 2:
                printf("\nInforme o elemento que deseja inserir no vetor: ");
                scanf("%d", &elemento);
                printf("Informe a posição em que deseja inserir o elemento de 0 a %d: ", tamanho - 1);
                scanf("%d", &posicao);
                inserirElemento(vetor, tamanho, elemento, posicao);
            break;

            case 3:
                printf("\nInforme o valor do elemento que deseja buscar: ");
                scanf("%d", &elemento);
                buscarElemento(vetor, tamanho, elemento);
            break;

            case 4:
                printf("\nInforme o valor do elemento que deseja excluir: ");
                scanf("%d", &elemento);
                excluirElemento(vetor, TAM, elemento);
                tamanho -= 1;
            break;

            case 5:
                printf("\nEncerrado\n\n");
            break;

            default:
                printf("\nOpção inválida!\n\n");
        }
    } while (opcao != 5);

    return 0;
}