
#include  <vetoresestruturadedados.h>

int buscaElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento){

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

void insereElemento(int vetor[], int *tamanhoAtualVetor, int valorElemento, int posicaoInsercao){

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
    
    int bottom;
  
    printf("Aperte 1 para iniciar ou 0 para encerrar o programa.\n");
    scanf("%d", &bottom);

    do{
      
    int vetor[] = {5, 7, 9, 10, 12, 16, 65, 32};

    int tamanhoAtualVetor = sizeof(vetor)  / sizeof(vetor[0]); 

        printf("\nElementos atuais do vetor:\n");
            
            for(int i = 0; i < tamanhoAtualVetor; i++){
            
                printf("%d ", vetor[i]);
            }

     int elementoProcurado;
    
    printf("\nDigite o elemento que deseja encontrar: ");
    scanf("%d", &elementoProcurado);
    

            buscaElemento(vetor, &tamanhoAtualVetor, elementoProcurado);

    int elementoExcluir;
    
    printf("\nDigite o elemento que deseja excluir: ");
    scanf("%d", &elementoExcluir);

            excluirElemento(vetor, &tamanhoAtualVetor, elementoExcluir);
    
        printf("\nVetor atualizado:\n");
        
            for (int i = 0; i < tamanhoAtualVetor; i++) {
                
                printf("%d ", vetor[i]);
    }

    inserirPosicao;
    int inserirElemento;

    printf("\nDigite a posição onde deseja inserir o elemento (0 a %d): ", tamanhoAtualVetor);
    scanf("%d", &inserirPosicao);

            insereElemento(vetor, &tamanhoAtualVetor, inserirElemento, inserirPosicao);
    
        printf("\nVetor atualizado após inserção de elemento:\n");
                  
            for (int i = 0; i < tamanhoAtualVetor; i++) {
                
                printf("%d ", vetor[i]);
            }
            


}while(bottom != 0);
  
    return 0;
}






