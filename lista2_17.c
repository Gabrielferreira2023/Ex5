/*
    ler um vetor de 10 posicoes e atribuir valor 0 para todos as posições que forem atribuídos valores negativos
*/

#include<stdio.h>
#define TAM 5

main(){
    int vetor[TAM];

    printf("Digite os valores do vetor");
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }
    for(int i = 0; i < TAM; i++){
        printf("%d", vetor[i]);
    }
}