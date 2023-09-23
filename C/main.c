#include <stdio.h>
#include </home/wesley/Git/estruturaDeDados/C/vetores.h>
#define TAM 10

int main()
{
    int vetor[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int opcao;
    int elemento;
    int posicao;
    int newTam = TAM;

//Loop para intereção com o vetor com as funções: Travassia, Buscra Elemento, Excluir Elemento e Buscar Elemento do vetor
    do{
        printf("Digite a opção desejada:\n1 - Travessia do vetor\n2 - Inserir elemento no vetor\n3 - Buscar elemento no vetor\n4 - Excluir elemento do vetor\n5 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                travessia(vetor, newTam);
            break;

            case 2:
                printf("\nInforme o elemento que deseja inserir no vetor: ");
                scanf("%d", &elemento);
                printf("Informe a posição em que deseja inserir o elemento de 0 a %d: ", newTam - 1);
                scanf("%d", &posicao);
                inserirElemento(vetor, newTam, elemento, posicao);
            break;

            case 3:
                printf("\nInforme o elemento que deseja buscar: ");
                scanf("%d", &elemento);
                buscarElemento(vetor, newTam, elemento);
            break;

            case 4:
                printf("\nInforme o elemento que deseja excluir: ");
                scanf("%d", &elemento);
                excluirElemento(vetor, TAM, elemento);
                newTam -= 1;
            break;

            case 5:
                printf("\nEncerrando...\n\n");
            break;

            default:
                printf("\nOpção inválida!\n\n");
        }
    } while (opcao != 5);

    return 0;
}