#include "lib.h" 

#define tam 10

int main(void){

    int vetor[tam] = {12, 76, 101, 0, 67, 52, 809, 100, -19, 25};  /*Defini o vetor com 10 elementos inteiros.*/
    int opcao, posicaoInsercao, valorElemento, tamanhoAtualVetor = tam; 
    /*O uso de ponteiros em duas funções de manipulação direta do vetor permitiu que não ocorresse falha no processo de
    travessia e busca de elemento após as operações de inserção ou remoção de elementos no vetor.*/
    do {
        printf("**************************************\n");   /*A primeira parte que interage com o usuário quando o programa é executado no terminal*/
        printf("Bem-vindo(a) ao nosso humilde sistema de manipulação de vetor.\n");
        printf("Selecione uma alternativa e siga feliz:\n");
        printf("1 - Inserir elemento no vetor:\n");
        printf("2 - Buscar elemento no vetor:\n");
        printf("3 - Remover elemento do vetor:\n");
        printf("4 - Atravessar vetor:\n");
        printf("5 - Encerrar operação.\n");

        scanf("%d", &opcao);

        switch (opcao) {        /*Chamadas das funções*/
            case 1:
                inserirElemento(vetor, &tamanhoAtualVetor, valorElemento, posicaoInsercao);
                break;
            case 2:
                buscarElemento(vetor, tamanhoAtualVetor, valorElemento);
                break;
            case 3:
                excluirElemento(vetor, &tamanhoAtualVetor, valorElemento);
                break;
            case 4:
                atravessarVetor(vetor, tamanhoAtualVetor);
                break;
            case 5:
                printf("Até logo!\n");
                exit(0);
            default:
                printf("Opção inexistente!\n");
                break;
        }
    } while (1);

    return 0;
}

void inserirElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento, int posicaoInsercao) {
    int i;

    printf("Digite o número que desejas inserir:\n");
    scanf("%d", &valorElemento);

    printf("Digite a posição em que desejas inserí-lo (0-%d):\n", *tamanhoAtualVetor);
    scanf("%d", &posicaoInsercao);

    if (posicaoInsercao >= 0 && posicaoInsercao <= *tamanhoAtualVetor) {
        for (i = *tamanhoAtualVetor; i > posicaoInsercao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[posicaoInsercao] = valorElemento;
        (*tamanhoAtualVetor)++; 
        printf("Elemento %d inserido exitosamente na posição %d.\n", valorElemento, posicaoInsercao);
    } else {
        printf("Posição fora dos limites estabelecidos.\n");
    }
}

void buscarElemento(int vetor[], int tamanhoAtualVetor, int valorElemento) {
    int achado = 0;    /*Valor booleano para determinar a existência do elemento dentro do vetor e evitar a impressão de várias 
                        expressões de "não encontrado" após não ocorrer o encontro.*/

    printf("Digite o elemento que desejas buscar:\n");
    scanf("%d", &valorElemento);

    for (int i = 0; i < tamanhoAtualVetor; i++) {
        if (valorElemento == vetor[i]) {
            printf("Elemento encontrado exitosamente na posição %d.\n", i);
            achado = 1;
        }
    }
    if (!achado) {
        printf("Elemento não presente no vetor.\n");
    }
}

void excluirElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento) {
    int achado = 0;
    
    printf("Digite o elemento que desejas remover:\n");
    scanf("%d", &valorElemento);

    for (int i = 0; i < *tamanhoAtualVetor; i++) {
        if (valorElemento == vetor[i]) {
            for (int j = i; j < *tamanhoAtualVetor - 1; j++) {
                vetor[j] = vetor[j + 1]; 
            }
            (*tamanhoAtualVetor)--;
            vetor[*tamanhoAtualVetor]--;
            printf("Elemento %d excluído com sucesso.\n", valorElemento); 
            achado = 1;
            break;
        }  
    }
    if (!achado) {
        printf("Elemento não encontrado no vetor.\n");
    }
}


void atravessarVetor(int vetor[], int tamanhoAtualVetor) {

    printf("Travessia do vetor.\n");
    for (int i = 0; i < tamanhoAtualVetor; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
}