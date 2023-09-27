/*#include <stdio.h>

int main() {
    int meuArray[] = {1, 2, 3, 4, 5};
    int tamanhoArray = sizeof(meuArray) / sizeof(meuArray[0]); // Calcula o tamanho do array

    for (int i = 0; i < tamanhoArray; i++) {
        printf("Elemento %d: %d\n", i, meuArray[i]);
    }

    return 0;
}

--------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int remove_num = 5;
    int tam = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tam; i++) {
        if (vetor[i] == remove_num) {
            vetor[i] = -1; // Marcando o elemento para remoção
        }
    }

    for (int i = 0; i < tam; i++) {
        if (vetor[i] >= 0) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}

--------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int tamanho;
    int elemento;
    int encontrado = 0;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os elementos do array:\n");

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    printf("Digite o elemento que deseja procurar: ");
    scanf("%d", &elemento);

    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            printf("Elemento encontrado na posição %d.\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Elemento não encontrado no array.\n");
    }

    return 0;
}





*/

