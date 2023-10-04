/// Função que executa uma busca linear dentro de um vetor
void travessia(int array[], int tamanhoArray)
{
    // Imprime a mensagem indicando o início da travessia
    printf("\nTravessia do vetor: ");

    // Loop para percorrer o vetor
    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        // Verifica se o elemento atual é diferente de zero antes de imprimir
        if (array[contador] != 0)
        {
            // Imprime o elemento atual
            printf("%d ", array[contador]);
        }
    }
    // Imprime uma nova linha para melhor formatação
    printf("\n\n");
}

/// Função que insere elemento numa posição específica dentro de um vetor
void inserirElemento(int array[], int tamanhoArray, int elemento, int posicao)
{
    // Verifica se a posição é válida
    if (posicao <= tamanhoArray - 1 && posicao >= 0)
    {
        // Verifica se o elemento é diferente de zero
        if (elemento != 0)
        {
            // Insere o elemento na posição especificada
            array[posicao] = elemento;
            // Imprime uma mensagem indicando o sucesso da inserção
            printf("\nElemento %d inserido com sucesso na posição %d do vetor!\n\n", elemento, posicao);
        }
        else
        {
            // Imprime uma mensagem indicando que o elemento deve ser diferente de zero
            printf("\nPor favor, um número diferente de zero.\n\n");
        }
    }
    else
    {
        // Imprime uma mensagem de erro para posição inválida
        printf("\n[ERROR] Posição inválida!\n\n");
    }
}

/// Função que executa uma busca dentro de um vetor
void buscarElemento(int array[], int tamanhoArray, int elemento)
{
    int verificador = 0;
    int index = 0;

    // Loop para percorrer o vetor
    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        // Verifica se o elemento atual é igual ao elemento procurado
        if (elemento == array[contador])
        {
            // Verifica se o elemento é diferente de zero antes de atribuir valores
            if (array[contador] != 0)
            {
                // Configura o verificador e o índice para indicar que o elemento foi encontrado
                verificador = 1;
                index = contador;
            }
        }
    }

    // Verifica se o elemento foi encontrado
    if (verificador)
    {
        // Imprime a mensagem indicando a posição do elemento encontrado
        printf("\nElemento %d encontrado na posição %d.\n\n", elemento, index);
    }
    else
    {
        // Imprime uma mensagem indicando que o elemento não foi encontrado
        printf("\nElemento não encontrado!\n\n");
    }
}

/// Função que exclui um elemento buscado dentro de um vetor
void excluirElemento(int array[], int tamanhoArray, int elemento)
{
    int index = 0;
    int verificador = 0;

    // Loop para encontrar a posição do elemento a ser excluído
    for (int contador = 0; contador < tamanhoArray; contador++)
    {
        // Verifica se o elemento atual é igual ao elemento a ser excluído
        if (elemento == array[contador])
        {
            // Configura o verificador e o índice para indicar que o elemento foi encontrado
            index = contador;
            verificador = 1;
        }
    }

    // Verifica se o elemento a ser excluído existe no vetor
    if (verificador)
    {
        // Loop para deslocar os elementos subsequentes uma posição para frente
        for (int contador = index; contador < tamanhoArray - 1; contador++)
        {
            array[contador] = array[contador + 1];
        }
        // Imprime a mensagem indicando o sucesso da exclusão
        printf("\nElemento %d excluído com sucesso!\n\n", elemento);
        // Define o último elemento como zero
        array[tamanhoArray - 1] = 0;
    }
    else
    {
        // Imprime uma mensagem indicando que o elemento não foi encontrado
        printf("\nElemento não encontrado!\n\n");
    }
}
