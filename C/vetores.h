/// Função que executa uma busca linear dentro de um vetor
void travessia(int array[], int tamanhoArray)
{
    printf("Travessia do vetor: ");

    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        printf("%d ", array[contador]);
    }
}

/// Função que insere elemento numa posição epecífica dentro de um vetor
void inserirElemento(int array[], int tamanhoArray, int elemento, int posicao)
{
    array[posicao] = elemento;
}

/// Função que executa uma busca dentro de um vetor
void buscarElemento(int array[], int tamanhoArray, int elemento)
{
    printf("Busca de elemento: ");
    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        if (elemento == array[contador])
        {
            printf("Elemento %d, encontrado na posição %d.", elemento, contador);
        }
    }
}

/// Função que exclui um elemento buscado dentro de um vetor
void excluirElemento(int array[], int tamanhoArray, int elemento)
{
    int index = 0;

    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        for (int contador = 0; contador < tamanhoArray; contador++)
        {
            if (elemento == array[contador])
            {
                index = contador;
            }
        }
    }

    for (int contador = index; contador < tamanhoArray - 1; contador++)
    {
        array[contador] = array[contador + 1];
    }
    travessia(array, tamanhoArray - 1);
}