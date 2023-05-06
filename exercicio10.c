/*
ler nota nota de 15 alunos e armazenar no vetor, calcular e imprimir a media geral
*/
#include<stdio.h>
#define TAM 5

main(){
    double notas[TAM];
    double media;
    double soma = 0.0;

    for(int indice = 0; indice < TAM; indice++){
        printf("Digite a nota do aluno");
        scanf("%lf", &notas[indice]);
        soma += notas[indice];
    }
    media = soma/TAM;
    printf("Media Geral: %.2lf", media);

}