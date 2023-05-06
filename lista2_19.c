
#include<stdio.h>
#define TAM 5

main(){
    int vetor[TAM];

    for(int i = 0; i < TAM; i++){
        vetor[i] = (i + (5 * i)) % (i + 1);
        printf("\nResultado: %d", vetor[i] );
    }
}