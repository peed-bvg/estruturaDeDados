#include <stdio.h>

int main() {
    
    
     int Array[] = {1 2, 3, 4, 5};
     int tamanhoArray = 5; 

       for (int i = 0; i < tamanhoArray; i++) {
           
         printf("Elemento %d: %d\n", i, meuArray[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>


    int main(int argc, char** argv){
    int vetor[] = {1, 2, 3, 4, 5}, i;
    int remove_num = 5;
    int tam = 5;
    
        for(i = 0; i < tam; i++)
  {
    if(vetor[i] == remove_num){
        
        vetor[i] = -1;
    }
 }
 
 for(i = 0; i < tam; i++)
 {
    if(vetor[i] >= 0)
    {
        printf("%d\n", vetor[i]);
    }
 }
   return 0;
}


#include <stdio.h>

int main() {
    
    int tamanho;
    int elemento;
    int i;
    int encontrado = 0;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

     int array[tamanho];

    printf("Digite os elementos do array:\n");
    
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    printf("Digite o elemento que deseja procurar: ");
    scanf("%d", &elemento);

    
    for (i = 0; i < tamanho; i++) {
        
        
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

#include <stdio.h>

int main() {
    
    int tamanho;
    int elemento;
    int i;
    int encontrado = 0;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

     int array[tamanho];

    printf("Digite os elementos do array:\n");
    
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    printf("Digite o elemento que deseja procurar: ");
    scanf("%d", &elemento);

    
    for (i = 0; i < tamanho; i++) {
        
        
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

