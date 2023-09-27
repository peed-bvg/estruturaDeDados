#include <stdio.h>
#include <C:\Users\Isaac\OneDrive - IFCE\Documentos\Disciplinas\PEED\estruturaDeDados\estruturaDeDados\aulaVetores\bibliotecaVetores.h>

/// @brief Função que realiza a travessia do vetor, imprimindo cada uma de seus elementos e o tamanho do vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
void travessiaVetor(int vetor[], int tamanhoAtualVetor){

    for(int i = 0; i<tamanhoAtualVetor;i++){
        printf("%d ", vetor[i]);
    }

}

/// @brief Função que executa uma busca linear dentro de um vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return retorna o indice do primeiro elemento identificado no array ou retorna -1 caso o elemento não esteja presente
int buscaElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){

    for (int i = 0; i < tamanhoAtualVetor; i++){
        if (vetor[i] == valorElemento){
            return i;
        }
    }
    return -1;

}

/// @brief Funçção que insere um elemento numa posição especifica do vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @param posicaoInsercao 
void insereElemento(int vetor[], int tamanhoAtualVetor, int valorElemento, int posicaoInsercao){

    if (*tamanhoAtualVetor < 100){
        for (int i = *tamanhoAtualVetor - 1; i >= posicaoInsercao; i--){
            vetor[i + 1] = vetor[i];
        }
        vetor[posicaoInsercao] = valorElemento;
        (*tamanhoAtualVetor)++;
        printf("Elemento inserido com sucesso.\n");
    }else{
        printf("Vetor cheio, nao e possivel inserir mais elementos.\n");
    }
}

/// @brief A função que deleta um elemento de um vetor. Caso o elemento nao seja encontrado não executa nenhum operação no vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return Retorna o tamanho atual do vetor
int excluirElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){

    for (int i = 0; i < *tamanhoAtualVetor; i++) {
        if (vetor[i] == valorElemento) {
            for (int j = i; j < *tamanhoAtualVetor - 1; j++){
                vetor[j] = vetor[j + 1];
            }
            (*tamanhoAtualVetor)--;
            i--;
            printf("Elemento(s) excluido(s) com sucesso.\n");
        }
    }
}

int main()
{
    int vetor[100];
    int tamanhoAtualVetor = 0;
    int opcao;

    do{
        printf("Menu:\n");
        printf("1. Travessia do Vetor\n");
        printf("2. Busca por Elemento\n");
        printf("3. Inserir Elemento\n");
        printf("4. Excluir Elemento\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Travessia do Vetor:\n");
                travessiaVetor(vetor, tamanhoAtualVetor);
                break;
            case 2:
                printf("Digite o valor a ser buscado: ");
                int valorBusca;
                scanf("%d", &valorBusca);
                int posicao = buscaElemento(vetor, tamanhoAtualVetor, valorBusca);
                if (posicao != -1){
                    printf("Elemento encontrado na posicao %d\n", posicao);
                }else{
                    printf("Elemento nao encontrado\n");
                }
                break;
            case 3:
                printf("Digite o valor a ser inserido\n");
                int valorInsercao;
                scanf("%d", &valorInsercao);
                printf("Digite a posicao de insercao\n");
                int posicaoInsercao;
                scanf("%d", &posicaoInsercao);
                insereElemento(vetor, &tamanhoAtualVetor, valorInsercao, posicaoInsercao);
                break;
            case 4:
                printf("Digite o valor a ser excluido: ");
                int valorExclusao;
                scanf("%d", &valorExclusao);
                excluirElemento(vetor, &tamanhoAtualVetor, valorExclusao);
                break;
            case 5:
                printf("Saindo do programa\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while (opcao != 5);

    return 0;
}
