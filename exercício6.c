/*
    Receber do usuario um vetor com 10 posições
    Imprimir maior e menor elemento do vetor
*/

#include<stdio.h>
#define TAM 5

main(){
    int vetor[TAM];
    int menor, maior, posicaoMaior = 0, posicaoMenor = 0;
    int indice;

    for(indice = 0; indice < TAM; indice++){
        printf("Insira os dados no vetor");
        scanf("%d", &vetor[indice]);
    }
    menor = vetor[0];
    maior = vetor[0];

    for (indice = 0; indice < TAM; indice++){
        if(vetor[indice] > maior){
            maior = vetor[indice];
            posicaoMaior = indice;
        }
        if(vetor[indice] < menor){
            menor = vetor[indice];
            posicaoMenor = indice;
        }
    }
    printf("Maior valor %d\n Menor valor %d", maior, menor);
    printf("Indice Maior  %d\n  Indice Menor %d", posicaoMaior, posicaoMenor);

}