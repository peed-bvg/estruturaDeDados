#include <stdio.h>
#include <C:\Users\noron\Documents\GitHub\estruturaDeDados\aulaVetores>

/// @brief Função que realiza a travessia do vetor, imprimindo cada uma de seus elementos e o tamanho do vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
void travessiaVetor(int vetor[], int tamanhoAtualVetor){
 printf("\nElementos do vetor:\n");
    for (int i = 0; i < tamanhoAtualVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

/// @brief Função que executa uma busca linear dentro de um vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return retorna o indice do primeiro elemento identificado no array ou retorna -1 caso o elemento não esteja presente
int buscaElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
for (int i = 0; i < tamanhoAtualVetor; i++) {
        if (vetor[i] == valorElemento) {
            return i; // Retorna o índice do primeiro elemento encontrado
        }
    }
    return -1; // Elemento não encontrado
}

/// @brief Funçção que insere um elemento numa posição especifica do vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @param posicaoInsercao 
void insereElemento(int vetor[], int tamanhoAtualVetor, int valorElemento, int posicaoInsercao){
if (posicaoInsercao < 0 || posicaoInsercao > *tamanhoAtualVetor) {
        printf("Posição inválida. O valor não foi adicionado.\n");
    } else {
        for (int i = *tamanhoAtualVetor - 1; i >= posicaoInsercao; i--) {
            vetor[i + 1] = vetor[i];
        }
        vetor[posicaoInsercao] = valorElemento;
        (*tamanhoAtualVetor)++;
    }
}

/// @brief A função que deleta um elemento de um vetor. Caso o elemento nao seja encontrado não executa nenhum operação no vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return Retorna o tamanho atual do vetor
int excluirElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
  int encontrou = 0;
    for (int i = 0; i < *tamanhoAtualVetor; i++) {
        if (vetor[i] == valorElemento) {
            for (int j = i; j < *tamanhoAtualVetor - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            (*tamanhoAtualVetor)--;
            encontrou = 1;
            break;
        }
    }
    if (!encontrou) {
        printf("Valor não encontrado no vetor. Nenhum elemento removido.\n");
    }
    return *tamanhoAtualVetor;
}

int main() {
    int meuVetor[10]; // Declare um vetor de tamanho 10
    int tamanho = 0; // Inicialize o tamanho como 0

    // Solicite ao usuário para inserir os 10 valores
    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &meuVetor[i]);
        tamanho++;
    }

    int opcao;

    printf("\nEscolha uma opção:\n");
    printf("1 - Exibir vetor\n");
    printf("2 - Adicionar valor ao vetor\n");
    printf("3 - Remover valor do vetor\n");
    printf("4 - Procurar valor no vetor\n");
    printf("5 - Travessia do vetor\n");
    printf("6 - Busca de elemento no vetor\n");
    printf("7 - Inserir elemento no vetor\n");
    printf("8 - Excluir elemento do vetor\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            exibirVetor(meuVetor, tamanho); // Chame a função exibirVetor com o vetor e o tamanho
            break;
        case 2:
            int valorNovo, posicaoNova;
            printf("\nDigite o valor a ser adicionado: ");
            scanf("%d", &valorNovo);
            printf("Digite a posição onde deseja adicionar o valor: ");
            scanf("%d", &posicaoNova);
            adicionarValor(meuVetor, &tamanho, valorNovo, posicaoNova);
            exibirVetor(meuVetor, tamanho); // Exiba o novo vetor após adicionar o valor
            break;
        case 3:
            int valorRemover;
            printf("\nDigite o valor a ser removido: ");
            scanf("%d", &valorRemover);
            tamanho = excluirElemento(meuVetor, &tamanho, valorRemover);
            exibirVetor(meuVetor, tamanho); // Exiba o vetor após remover o valor
            break;
        case 4:
            int valorProcurar, posicao;
            printf("\nDigite o valor a ser procurado: ");
            scanf("%d", &valorProcurar);
            if (procurarValor(meuVetor, tamanho, valorProcurar, &posicao)) {
                printf("Valor encontrado no vetor na posição %d.\n", posicao);
            } else {
                printf("Valor não encontrado no vetor.\n");
            }
            break;
        case 5:
            travessiaVetor(meuVetor, tamanho);
            break;
        case 6:
            int valorBusca, posicaoBusca;
            printf("\nDigite o valor a ser buscado: ");
            scanf("%d", &valorBusca);
            posicaoBusca = buscaElemento(meuVetor, tamanho, valorBusca);
            if (posicaoBusca != -1) {
                printf("Elemento encontrado na posição %d.\n", posicaoBusca);
            } else {
                printf("Elemento não encontrado no vetor.\n");
            }
            break;
        case 7:
            int valorInserir, posicaoInserir;
            printf("\nDigite o valor a ser inserido: ");
            scanf("%d", &valorInserir);
            printf("Digite a posição onde deseja inserir o valor: ");
            scanf("%d", &posicaoInserir);
            insereElemento(meuVetor, &tamanho, valorInserir, posicaoInserir);
            exibirVetor(meuVetor, tamanho); // Exiba o novo vetor após inserir o valor
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}