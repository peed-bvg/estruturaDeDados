/// Função que executa uma busca linear dentro de um vetor
void travessia(int array[], int tamanhoArray)
{
    printf("\nTravessia do vetor: ");

    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        printf("%d ", array[contador]);
    }
    printf("\n\n");
}

/// Função que insere elemento numa posição epecífica dentro de um vetor
void inserirElemento(int array[], int tamanhoArray, int elemento, int posicao)
{
    if (posicao <= tamanhoArray && posicao >= 0)
    {
        array[posicao] = elemento;
        printf("\nElemento %d inserido com sucesso na posição %d do vetor!\n\n", elemento, posicao);
    }
    else
    {
        printf("\n[ERROR] Posição inválida!\n\n");
    }
}

/// Função que executa uma busca dentro de um vetor
void buscarElemento(int array[], int tamanhoArray, int elemento)
{
    int verifcador = 0;
    int index = 0;

    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        if (elemento == array[contador])
        {
            verifcador = 1;
            index = contador;
        }
    }

    if (verifcador)
    {
        printf("\nElemento %d, encontrado na posição %d.\n\n", elemento, index);
    }
    else
    {
        printf("\nElemento não encontrado!\n\n");
    }
}

/// Função que exclui um elemento buscado dentro de um vetor
void excluirElemento(int array[], int tamanhoArray, int elemento)
{
    int index = 0;
    int verificador = 0;

    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        if (elemento == array[contador])
        {
            index = contador;
            verificador = 1;
        }
    }

    if(verificador)
    {
        for (int contador = index; contador < tamanhoArray - 1; contador++)
        {
            array[contador] = array[contador + 1];
        }
        printf("\nElemento %d excluído com sucesso!\n\n", elemento);
    }
    else
    {
        printf("\nElemento não escontrado!\n\n");
    }
}