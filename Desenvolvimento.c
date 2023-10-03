#include <stdio.h>
#include <stdlib.h>


int* removerElemento(int *array, int *tamanho, int indice_a_remover) {
    if (indice_a_remover < 0 || indice_a_remover >= *tamanho) {
        printf("Índice de remoção inválido.\n");
        return array;
    }

    
    int novo_tamanho = *tamanho - 1;
    int *novo_array = malloc(novo_tamanho * sizeof(int));

   
    int novo_indice = 0;
    for (int i = 0; i < *tamanho; i++) {
        if (i != indice_a_remover) {
            novo_array[novo_indice] = array[i];
            novo_indice++;
        }
    }


    free(array);

    
    *tamanho = novo_tamanho;
    return novo_array;
}

int main() {
    int tamanho_atual = 5;
    int *array = malloc(tamanho_atual * sizeof(int));

   
    for (int i = 0; i < tamanho_atual; i++) {
        array[i] = i + 1;
    }

  
    printf("Array original: ");
    for (int i = 0; i < tamanho_atual; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
     
    int novo_elemento = 7;
    int novo_tamanho = tamanho_atual + 1;
    int *novo_array = malloc(novo_tamanho * sizeof(int));
    for (int i = 0; i < tamanho_atual; i++) {
        novo_array[i] = array[i];
    }
    novo_array[tamanho_atual] = novo_elemento;

    
    free(array);
    array = novo_array;
    tamanho_atual = novo_tamanho;

    
    printf("Array com novo elemento: ");
    for (int i = 0; i < tamanho_atual; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


   
    int indice_a_remover = 2;
    array = removerElemento(array, &tamanho_atual, indice_a_remover);

   
    printf("Array após a remoção: ");
    for (int i = 0; i < tamanho_atual; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    
    
    
     int elemento_procurado = 3;
    int encontrado = 0;
    for (int i = 0; i < tamanho_atual; i++) {
        if (array[i] == elemento_procurado) {
            encontrado = 1;
            break;
        }
    }

    
    if (encontrado) {
        printf("O elemento %d foi encontrado no array.\n", elemento_procurado);
    } else {
        printf("O elemento %d não foi encontrado no array.\n", elemento_procurado);
    }
    
 

    return 0;
}


