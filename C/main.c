#include <stdio.h>
#include </home/wesley/Git/estruturaDeDados/C/vetores.h>
#define TAM 10

int main()
{
    // Inicialização do vetor com valores de 1 a 10
    int vetor[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int opcao;
    int elemento;
    int posicao;

    // Loop principal para interação com o vetor usando as funções: Travessia, Inserir Elemento, Buscar Elemento, Excluir Elemento e Sair
    do
    {
        // Exibe o menu de opções para o usuário
        printf("Digite a opção desejada:\n1 - Travessia do vetor\n2 - Inserir elemento no vetor\n3 - Buscar elemento no vetor\n4 - Excluir elemento do vetor\n5 - Sair\n");
        
        // Obtém a opção escolhida pelo usuário
        scanf("%d", &opcao);

        // Switch para lidar com cada opção escolhida pelo usuário
        switch(opcao)
        {
            case 1:
                // Chama a função de travessia para exibir os elementos do vetor
                travessia(vetor, TAM);
            break;

            case 2:
                // Solicita ao usuário o elemento e a posição para inserção e chama a função correspondente
                printf("\nInforme o elemento que deseja inserir no vetor (diferente de ZERO): ");
                scanf("%d", &elemento);
                printf("Informe a posição em que deseja inserir o elemento de 0 a %d: ", TAM - 1);
                scanf("%d", &posicao);
                inserirElemento(vetor, TAM, elemento, posicao);
            break;

            case 3:
                // Solicita ao usuário o elemento a ser buscado e chama a função correspondente
                printf("\nInforme o elemento que deseja buscar: ");
                scanf("%d", &elemento);
                buscarElemento(vetor, TAM, elemento);
            break;

            case 4:
                // Solicita ao usuário o elemento a ser excluído e chama a função correspondente
                printf("\nInforme o elemento que deseja excluir: ");
                scanf("%d", &elemento);
                excluirElemento(vetor, TAM, elemento);
            break;

            case 5:
                // Exibe mensagem de encerramento
                printf("\nEncerrando... Obrigado, volte sempre!\n\n");
            break;

            default:
                // Exibe mensagem de opção inválida se o usuário escolher uma opção inválida
                printf("\nOpção inválida!\n\n");
        }
    } while (opcao != 5); // Continua o loop até que o usuário escolha sair (opção 5)

    return 0;
}
