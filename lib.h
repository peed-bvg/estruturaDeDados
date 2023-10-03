#include <stdio.h>
#include <stdlib.h>


#ifndef LIB_H
#define LIB_H

/*Protótipos das funções*/

void inserirElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento, int posicaoInsercao);
void buscarElemento(int vetor[], int tamanhoAtualVetor, int valorElemento);
void excluirElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento);
void atravessarVetor(int vetor[], int tamanhoAtualVetor);


#endif