#include <stdio.h>
#include <C:\Users\Isaac\OneDrive - IFCE\Documentos\Disciplinas\PEED\estruturaDeDados\estruturaDeDados\aulaVetores\bibliotecaVetores.h>

/// @brief Função que realiza a travessia do vetor, imprimindo cada uma de seus elementos e o tamanho do vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
void travessiaVetor(int vetor[], int tamanhoAtualVetor){

    for (int i = 0; i < tamanhoAtualVetor; i++)
    {
        printf("%d ",vetor[i]);
    }
    
    
}

/// @brief Função que executa uma busca linear dentro de um vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return retorna o indice do primeiro elemento identificado no array ou retorna -1 caso o elemento não esteja presente
int buscaElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
    for(int i=0;i<tamanhoAtualVetor;i++){
        if(vetor[i]==valorElemento){
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
void insereElemento(int vetor[], int tamanhoAtualVetor, int valorElemento, int posicaoInsercao) {
    if (posicaoInsercao < 0 || posicaoInsercao > tamanhoAtualVetor) {
        printf("Posição de inserção inválida.\n");
        break;
    }
    int novoTamanho = tamanhoAtualVetor + 1;
    int novoVetor[novoTamanho];
    for (int i = 0; i < posicaoInsercao; i++) {
        novoVetor[i] = vetor[i];
    }
    novoVetor[posicaoInsercao] = valorElemento;
    for (int i = posicaoInsercao; i < tamanhoAtualVetor; i++) {
        novoVetor[i + 1] = vetor[i];
    }
    for (int i = 0; i < novoTamanho; i++) {
        vetor[i] = novoVetor[i];
    }

}

/// @brief A função que deleta um elemento de um vetor. Caso o elemento nao seja encontrado não executa nenhum operação no vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return Retorna o tamanho atual do vetor
int excluirElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
    int aux[tamanhoAtualVetor];
    int NovoTamanho = 0;
for (int i = 0; i < tamanhoAtualVetor; i++)
{
    if(vetor[i]!=valorElemento){
        aux[NovoTamanho]=vetor[i];
        NovoTamanho++;
    }
}
for (int i = 0; i < tamanhoAtualVetor; i++)
{
    vetor[i]=aux[i];
}
return NovoTamanho;

}