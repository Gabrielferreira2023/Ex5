#include<stdio.h>
#define TAM 5

main(){
    int vetor[TAM];
    int aux;

    printf("Digite os valores do vetor");
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < TAM; i++){
        aux = 0;
        for(int j = i+1; j < TAM; j++){
            if(vetor[i] == vetor[j]){
                aux = 1;
            }
        }
        if(aux != 1){
            printf(" Imprimindo somente valores diferentes%d", vetor[i]);
        }
    }
}

