#include<stdio.h>
#define TAM 3

main(){
    int vetorA[TAM];
    int vetorB[TAM];
    int produtoEscalar = 0;

    for(int i = 0; i < TAM; i++){
        printf("Preecha o vetor A");
        scanf("%d", &vetorA[i]);
    }
    for(int i = 0; i < TAM; i++){
        printf("Preecha o vetor B");
        scanf("%d", &vetorB[i]);
    }
    //imprimir A
    //imprimir B
    //imprimir produto escalar
    for(int i = 0; i < TAM; i++){
        produtoEscalar += vetorA[i] * vetorB[i];
    }
    printf("Produto escalar: %d",produtoEscalar );
    
}