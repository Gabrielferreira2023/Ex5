
#include<stdio.h>
#define TAM 5

main(){
    int vetor[TAM];
    int vetorImpar[TAM];
    int valor;

    for(int i = 0; i < TAM; i++){
        printf("Preecha o vetor com valores entre 0 e 50\n");
        scanf("%d", &valor);
        if(valor >= 0 && valor <= 50){
            vetor[i] = valor;
        }else{
            printf("digite o valor dentro do intervalo\n"); 
        }
    }
    for(int i = 0; i < TAM; i++){
        if(vetor[i] % 2 == 1){
            vetorImpar[i] = vetor[i];
        }else{
            vetorImpar[i] = 0;
        }
        printf("\nVetor principal %d, vetor Impar %d", vetor[i], vetorImpar[i]);
    }
}