#include <stdio.h>
#include </home/wesley/estruturaDeDados/C/vetores.h>
#define TAM 10

int main()
{
    int vetor[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    travessia(vetor, TAM);
    printf("\n");

    inserirElemento(vetor, TAM, 99, 7);
    travessia(vetor, TAM);
    printf("\n");

    buscarElemento(vetor, TAM, 5);
    printf("\n");

    excluirElemento(vetor, TAM, 5);
    printf("\n\n");

    return 0;
}