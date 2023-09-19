#include <stdio.h>
<<<<<<< HEAD
#include <C:\Users\anton\OneDrive\Documentos\GitHub\estruturaDeDados-1\aulaVetores\bibliotecaVetores.h>
=======
#include <C:\Users\Isaac\OneDrive - IFCE\Documentos\Disciplinas\PEED\estruturaDeDados\estruturaDeDados\aulaVetores\bibliotecaVetores.h>
>>>>>>> 690a6b7fb6b3c59c555b8ed7cad8dcfbb9e12117

/// @brief Função que realiza a travessia do vetor, imprimindo cada uma de seus elementos e o tamanho do vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
void travessiaVetor(int vetor[], int tamanhoAtualVetor){
<<<<<<< HEAD
    for(int i = 0; i <= tamanhoAtualVetor; i++){
        printf(vetor[tamanhoAtualVetor]);
    }
=======

    for(int i = 0; i<tamanhoAtualVetor;i++){
        printf("%d ", vetor[i]);
    }

>>>>>>> 690a6b7fb6b3c59c555b8ed7cad8dcfbb9e12117
}

/// @brief Função que executa uma busca linear dentro de um vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return retorna o indice do primeiro elemento identificado no array ou retorna -1 caso o elemento não esteja presente
int buscaElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
    for(int i = 0; i <= tamanhoAtualVetor; i++){
        if(valorElemento == vetor[i]){
            printf(vetor[i]);
            return 0;
        }else{
            return -1;
        }
    }
}

/// @brief Funçção que insere um elemento numa posição especifica do vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @param posicaoInsercao 
void insereElemento(int vetor[], int tamanhoAtualVetor, int valorElemento, int posicaoInsercao){
    for(int i = 0; i <= tamanhoAtualVetor; i++){
        if(posicaoInsercao == i){
            vetor[i] = valorElemento;
        }
    }

}

/// @brief A função que deleta um elemento de um vetor. Caso o elemento nao seja encontrado não executa nenhuma operação no vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return Retorna o tamanho atual do vetor
int excluirElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
    for(int i = 0; i <= tamanhoAtualVetor; i++){
        if(valorElemento == vetor[i]){
            printf(vetor[i]);
        }
    }
}