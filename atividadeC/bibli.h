#ifndef bibli_h
#define bibli_h

//Função para realizar a travessia do vetor
void travessiaVetor(int vetor[], int tamanhoDoArray){
    printf("\n Realizando a travessia: ");

    for(int i = 0; i < tamanhoDoArray; i++){
        printf("%d \t", vetor[i]);
    }
    printf("\n");
};

//Função para buscar um elemento
void buscaElemento(int vetor[], int tamanhoDoArray, int valorDoArray){
    int valorElemento;
    printf("Digite o valor do elemento: ");
    scanf("%d", &valorElemento);

    
    for(int i = 0; i < tamanhoDoArray; i++){
            if(valorElemento == vetor[i]){
                printf("Elemento encontrado na posição %d", i);
            } else if(valorElemento != vetor[i]){
                printf("Elemento não encontrado");
            }
    }
};

//Função para inserir um elemento
void insereElemento(int vetor[], int tamanhoDoArray, int valorInserido, int posicao){

    if(posicao != 0 && posicao <= tamanhoDoArray){
        vetor[posicao] = valorInserido;
        printf("Elemento %d inserido com sucesso no array na posicao %d", valorInserido, posicao);
    } else {
        printf("Posição não encontrada!!");
    }
};

//Função para excluir o elemento
void excluirElemento(int vetor[], int tamanhoDoArray, int valorInserido){
    int index = 0;
    int contador = 0;

    for(int i = 0; i <= tamanhoDoArray; i++){
        if(valorInserido == vetor[i]){
            index = i;
        }
    } 

    if(index != 0 ){
        for(int i = index; i < tamanhoDoArray; i++){
            vetor[contador] = vetor[contador+1];
        }
        printf("Elemento %d excluído com sucesso!!", valorInserido);
    }
    else 
    {
        printf("Elemento não encontrado");
    }

};

#endif