#include <stdio.h> 
#include <C:\Users\User\Documents\estrutura de dados\biblioteca.h>  
#include <stdlib.h>

typedef struct {
    int *array;
    int tamanho;
    int capacidade;
} MeuVetor;

MeuVetor* inicializarVetor(int capacidade) {
    MeuVetor *vetor = (MeuVetor*)malloc(sizeof(MeuVetor));
    vetor->array = (int*)malloc(sizeof(int) * capacidade);
    vetor->tamanho = 0;
    vetor->capacidade = capacidade;
    return vetor;
}

void travessia(MeuVetor *vetor) {
    for (int i = 0; i < vetor->tamanho; i++) {
        printf("%d ", vetor->array[i]);
    }
    printf("\n");
}

void inserir(MeuVetor *vetor, int elemento) {
    if (vetor->tamanho < vetor->capacidade) {
        vetor->array[vetor->tamanho] = elemento;
        vetor->tamanho++;
    } else {
        printf("O vetor está cheio. Não é possível adicionar mais elementos.\n");
    }
}

void liberarVetor(MeuVetor *vetor) {
    free(vetor->array);
    free(vetor);
}

int main() {
    int capacidade;
    printf("Informe a capacidade do vetor: ");
    scanf("%d", &capacidade);

    MeuVetor *meuVetor = inicializarVetor(capacidade);

    int elemento;
    int continuar = 1;

    while (continuar) {
        printf("Informe um elemento para adicionar ao vetor (ou digite 0 para parar): ");
        scanf("%d", &elemento);

        if (elemento == 0) {
            continuar = 0;
        } else {
            inserir(meuVetor, elemento);
        }
    }

    printf("Vetor: ");
    travessia(meuVetor);

    liberarVetor(meuVetor);

    return 0;
}
