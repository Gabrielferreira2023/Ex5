/*
crie um programa que receba seis valores inteiros e mostra na tela os valores lidos na ordem inversa
*/
#include<stdio.h>
#define TAM 6

main(){
    int valores[TAM];

    for(int indice = 0; indice < TAM; indice++){
        printf("Digite os valores");
        scanf("%d", &valores[indice]);
    }
    for(int indice = TAM-1; indice > -1; indice--){
        printf("%d\n",valores[indice]);
    }
}