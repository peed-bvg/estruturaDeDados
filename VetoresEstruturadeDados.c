
#include <stdio.h>

//função para procurar um elemento no array
//se ele existir, imprime o elemento procurado e sua posição
//caso contrário, ele irá imprimir o elemento como não encontrado
int buscaElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento){

    //elementoEncontrado passa a veler 1 quando o elemento é encontrado
    //caso seja diferente, será imprimido que o elemento não foi localiz
    int elementoEncontrado = 0;
    
    for (int i = 0; i < *tamanhoAtualVetor; i++) {
        
        if(vetor[i] == valorElemento){
            
            printf("O elemento %d se encontra na posição %d do vetor.\n", valorElemento, i);
            
            elementoEncontrado = 1;
        }
    }
                if(elementoEncontrado != 1){
                
                printf("Elemento %d não encontrado.\n", valorElemento);
    }
}


//função para excluir um elemento no array
//percorre o array e faz a comparação para achar o número desejado 
//quando acha é feito uma segunda travessia de posição igual do i, para remover esse número para o fim do array
//ele é excluido e o vetor tem seu tamanho de elementos diminuido
int excluirElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento){
        
        for (int i = 0; i < *tamanhoAtualVetor; i++) {
            
            if(vetor[i] == valorElemento){

                for(int j = i; j < *tamanhoAtualVetor - 1; j++){
                    
                  vetor[j] = vetor[j + 1];
            }
 
                    (*tamanhoAtualVetor)--;
                
                        printf("Elemento excluído.\n");  
         } 
    }
}


//função para inserir um elemento em determinada posição no array
void insereElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento, int posicaoInsercao){
        
        //verifica se a posição inserida pelo usuário existe
        //se existir, pede que insira um valor para a posição
        //caso contrário, imprimira que a posição não existe
        if (posicaoInsercao >= 0 && posicaoInsercao < *tamanhoAtualVetor) {
            
        int valorElemento;
        
        printf("Digite o elemento para essa posição: ");
        scanf("%d", &valorElemento);
        
        
         for (int i = *tamanhoAtualVetor; i > posicaoInsercao; i--){
             
            vetor[i] = vetor[i - 1];
        }
        
        vetor[posicaoInsercao] = valorElemento;
        
    }else{
        
        printf("Posição não disponível.\n");
    }
}
 

int main(){
    
    //recebera interação do usuário para iniciar ou não o programa
    int bottom;
    
    printf("Aperte 1 para iniciar ou 0 para encerrar o programa.\n");
    scanf("%d", &bottom);

    do{


    int vetor[] = {5, 7, 9, 10, 12, 16, 65, 32};
    
    // Sizeof calcula o tamanho do vetor a partir da divisão do seu tamanho com o tamanho de um elemento do vetor;
    //irá imprimir o vetor atual
    int tamanhoAtualVetor = sizeof(vetor)  / sizeof(vetor[0]); 

        printf("\nElementos atuais do vetor:\n");
            
            for(int i = 0; i < tamanhoAtualVetor; i++){
            
                printf("%d ", vetor[i]);
            }

    
    //elementoProcurado recebe o elemento procurado
     int elementoProcurado;
    
    printf("\nDigite o elemento que deseja encontrar: ");
    scanf("%d", &elementoProcurado);
    
   
    
            //Chama a função de busca ao elemento, chamando suas variáveis e substituindo outras para se adequar a condição estabelecida
            buscaElemento(vetor, &tamanhoAtualVetor, elementoProcurado);



    // elementoExcluir recebe o valor a ser retirado do vetor
    int elementoExcluir;
    
    printf("\nDigite o elemento que deseja excluir: ");
    scanf("%d", &elementoExcluir);
    
            //Chama a função de excluir um elemento, com suas variáveis, algumas substituidas para se adequar a codição
            excluirElemento(vetor, &tamanhoAtualVetor, elementoExcluir);
    
        printf("\nVetor atualizado:\n");
        
            for (int i = 0; i < tamanhoAtualVetor; i++) {
                
                printf("%d ", vetor[i]);
    }


    //inserirPosicao recebe a posição 
    //inserirElemento recebe o elemento para a posição
        
    int inserirPosicao;
    int inserirElemento;

    printf("\nDigite a posição onde deseja inserir o elemento (0 a %d): ", tamanhoAtualVetor);
    scanf("%d", &inserirPosicao);
    
            //chama a função com suas variáveis, algumas substituidas para se adequar a codição, para inserir um elemento e determinada posição
            insereElemento(vetor, &tamanhoAtualVetor, inserirElemento, inserirPosicao);
    
        printf("\nVetor atualizado após inserção de elemento:\n");
                  
            for (int i = 0; i < tamanhoAtualVetor; i++) {
                
                printf("%d ", vetor[i]);
            }
            


}while(bottom != 0);
    
    return 0;
}


