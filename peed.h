#ifndef bibliotecavetores_h
#define bibliotecavetores_h

#include <stdio.h>
#include <stdlib.h>

// Estrutura do vetor
typedef struct {
    int *array;
    int tamanho;
} MeuVetor;

// Inicialização do vetor
MeuVetor* inicializarVetor(int capacidade);

// Travessia
void travessia(MeuVetor *vetor);

// Inserção
void inserir(MeuVetor *vetor, int elemento);

// Exclusão
void excluir(MeuVetor *vetor, int elemento);

// Pesquisa
int pesquisar(MeuVetor *vetor, int elemento);

// Liberação de memória
void liberarVetor(MeuVetor *vetor);

#endif
