#include <stdio.h>
#include <C:\Users\Isaac\OneDrive - IFCE\Documentos\Disciplinas\PEED\estruturaDeDados\estruturaDeDados\aulaVetores\bibliotecaVetores.h>

/// @brief Função que realiza a travessia do vetor, imprimindo cada uma de seus elementos e o tamanho do vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
void travessiaVetor(int vetor[], int tamanhoAtualVetor){

printf("Elementos do vetor: ");
    for (int i = 0; i < tamanhoAtualVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nTamanho atual do vetor: %d\n\n", tamanhoAtualVetor);
}



/// @brief Função que executa uma busca linear dentro de um vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return retorna o indice do primeiro elemento identificado no array ou retorna -1 caso o elemento não esteja presente
int buscaElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
    for (int i = 0; i < tamanhoAtualVetor; i++) {
        if (vetor[i] == valorElemento) {
            printf("O elemento %d foi encontrado na posição %d.\n\n", valorElemento, i);
            return i; 
        }
    }
    printf("O elemento %d não foi encontrado no vetor.\n\n", valorElemento);
    return -1;

}

/// @brief Funçção que insere um elemento numa posição especifica do vetor
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @param posicaoInsercao 
void insereElemento(int vetor[], int tamanhoAtualVetor, int valorElemento, int posicaoInsercao){
    id insereElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento, int posicaoInsercao) {
    if (*tamanhoAtualVetor < 6) {
        // Verifica se a posição de inserção é válida
        if (posicaoInsercao >= 0 && posicaoInsercao <= *tamanhoAtualVetor) {
            // Desloca os elementos para abrir espaço para o novo elemento
            for (int i = *tamanhoAtualVetor; i > posicaoInsercao; i--) {
                vetor[i] = vetor[i - 1];
            }
            // Insere o novo elemento na posição especificada
            vetor[posicaoInsercao] = valorElemento;
            (*tamanhoAtualVetor)++;
            printf("Elemento %d inserido com sucesso!\n\n", valorElemento);
        } else {
            printf("A posição de inserção não é válida.\n\n");
        }
    } else {
        printf("O vetor está cheio, não é possível inserir mais elementos.\n\n");
    }
}


}

/// @brief A função que deleta um elemento de um vetor. Caso o elemento nao seja encontrado não executa nenhum operação no vetor.
/// @param vetor 
/// @param tamanhoAtualVetor 
/// @param valorElemento 
/// @return Retorna o tamanho atual do vetor
int excluirElemento(int vetor[], int tamanhoAtualVetor, int valorElemento){
      int encontrado = 0;

    for (int i = 0; i < *tamanhoAtualVetor; i++) {
        if (vetor[i] == valorElemento) {
            encontrado = 1;

            // Desloca os elementos à direita do elemento a ser excluído para preencher o espaço.
            for (int j = i; j < *tamanhoAtualVetor - 1; j++) {
                vetor[j] = vetor[j + 1];
            }

            (*tamanhoAtualVetor)--;
            printf("Elemento %d foi excluído com sucesso!\n\n", valorElemento);
            break;
        }
    }

    if (!encontrado) {
        printf("O elemento %d não foi encontrado no vetor.\n\n", valorElemento);
    }

    return *tamanhoAtualVetor;
}

int main() {
    int Vetor[6] = {1, 2, 3, 4, 5}; 
    int tamanho = 5;

    travessiaVetor(Vetor, tamanho);

    int elementoBuscado = 3;
    int indiceEncontrado = buscaElemento(Vetor, tamanho, elementoBuscado);

    int elementoInserir = 6;
    int posicaoInsercao = 2;
    insereElemento(Vetor, &tamanho, elementoInserir, posicaoInsercao);

    int elementoExcluir = 2;
    tamanho = excluirElemento(Vetor, &tamanho, elementoExcluir);

    travessiaVetor(Vetor, tamanho);

    return 0;
}