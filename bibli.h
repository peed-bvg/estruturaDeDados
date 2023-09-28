#ifndef bibli_h
#define bibli_h
#include <stdio.h>
#include <C:\Users\Isaac\OneDrive - IFCE\Documentos\Disciplinas\PEED\estruturaDeDados\estruturaDeDados\aulaVetores\bibliotecaVetores.h>

/// @brief Função que realiza a travessia do vetor, imprimindo cada uma de seus elementos e o tamanho do vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
void travessiaVetor(int vetor[], int tamanhoDoArray) {
    printf("\nFazendo a travessia: ");

    for (int i = 0; i < tamanhoDoArray; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

/// @brief Função que executa uma busca linear dentro de um vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return retorna o indice do primeiro elemento identificado no array ou retorna -1 caso o elemento não esteja presente
void buscaElemento(int vetor[], int tamanhoDoArray) {
    int valorElemento;
    int encontrado = 0;

    for (int i = 0; i < tamanhoDoArray; i++) {
        if (valorElemento == vetor[i]) {
            printf("Posição encontrada %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Posição não encontrada\n");
    }
}

/// @brief Funçção que insere um elemento numa posição especifica do vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @param posicaoInsercao 
void insereElemento(int vetor[], int *tamanhoDoArray, int valorInserido, int posicao) {
    if (posicao >= 0 && posicao <= *tamanhoDoArray) {
        for (int i = *tamanhoDoArray; i > posicao; i--) {
            vetor[i] = vetor[i - 1];
        }

        vetor[posicao] = valorInserido;
        (*tamanhoDoArray)++;
        printf("Elemento %d inserido com sucesso na posição %d\n", valorInserido, posicao);
    } else {
        printf("Posição não encontrada!!\n");
    }
}

/// @brief A função que deleta um elemento de um vetor. Caso o elemento nao seja encontrado não executa nenhum operação no vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return Retorna o tamanho atual do vetor
void excluirElemento(int vetor[], int *tamanhoDoArray, int valorExcluir) {
    int encontrado = 0;

    for (int i = 0; i < *tamanhoDoArray; i++) {
        if (valorExcluir == vetor[i]) {
            for (int j = i; j < *tamanhoDoArray - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            (*tamanhoDoArray)--;
            printf("Elemento %d excluído com sucesso!!\n", valorExcluir);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Não encontrado\n");
    }
}

return NovoTamanho;

