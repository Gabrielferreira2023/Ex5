#include<stdio.h>
#include<math.h>
#define TAM 5

main(){
    int vetor[TAM] = {1,2,2,4,4};
    int soma = 0;
    double media=0, desvioPadrao = 0;

    for (int i = 0; i < TAM; i++) {
        soma += vetor[i];
    }
    //media
    media = soma / TAM;
    //desvio padrão
    for (int i = 0; i < TAM; i++) {
        desvioPadrao += pow(vetor[i]- media, 2);
    }
    desvioPadrao = sqrt(desvioPadrao/(TAM -1));

    printf("Desvio padrão: %lf", desvioPadrao);
}


