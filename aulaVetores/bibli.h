#ifndef bibli_h
#define bibli_h

void travessiaVetor(int vetor[], int tamanhoDoArray) {
    printf("\nRealizando a travessia: ");

    for (int i = 0; i < tamanhoDoArray; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void buscaElemento(int vetor[], int tamanhoDoArray) {
    int valorElemento;
    printf("Digite o valor do elemento: ");
    scanf("%d", &valorElemento);

    int encontrado = 0;

    for (int i = 0; i < tamanhoDoArray; i++) {
        if (valorElemento == vetor[i]) {
            printf("Elemento encontrado na posição %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Elemento não encontrado\n");
    }
}

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
        printf("Elemento não encontrado\n");
    }
}

#endif

