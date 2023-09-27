#include <stdio.h>

void tVetor(int vetor[], int tatVetor) {
    printf("Elementos do vetor: ");
    for (int i = 0; i < tatVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nTamanho do vetor: %d\n", tatVetor);
}

int bElemento(int vetor[], int tatVetor, int vElemento) {
    for (int i = 0; i < tatVetor; i++) {
        if (vetor[i] == vElemento) {
            return i; 
        }
    }
    return -1; 
}

void inserirElemento(int vetor[], int *tatVetor, int valorElemento, int poscInsercao) {
    if (*tatVetor >= poscInsercao && poscInsercao >= 0) {
        for (int i = *tatVetor; i > poscInsercao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[poscInsercao] = valorElemento;
        (*tatVetor)++;
    } else {
        printf("Posição não aceita.\n");
    }
}

int excluirElemento(int vetor[], int *tatVetor, int valorElemento) {
    int indice = bElemento(vetor, *tatVetor, valorElemento);
    if (indice != -1) {
        for (int i = indice; i < *tatVetor - 1; i++) {
            vetor[i] = vetor[i + 1];
        }
        (*tatVetor)--;
    }
    return *tatVetor;
}

int main() {
    int vetor[100];
    int tatVetor = 0;

    inserirElemento(vetor, &tatVetor, 50, 0);
    inserirElemento(vetor, &tatVetor, 20, 1);
    inserirElemento(vetor, &tatVetor, 70, 2);

    tVetor(vetor, tatVetor); 
    printf("Posição do elemento 20: %d\n", bElemento(vetor, tatVetor, 20)); 

    excluirElemento(vetor, &tatVetor, 20);
    tVetor(vetor, tatVetor); 

    return 0;
}

