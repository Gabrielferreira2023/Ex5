/*
    ler um vetor de 10 posicoes e atribuir valor 0 para todos as posições que forem atribuídos valores negativos
*/

#include<stdio.h>
#define TAM 5

//precisa-se saber quais são os multiplos de x
//que pode-se encontrar no vetor

main(){
    int vetor[TAM];
    int x, multiplos = 0;

    printf("Digite um valor para X \n");
    scanf("%d", &x);

    for(int i = 0; i < TAM; i++){
        printf("Digite os valores do vetor");
        scanf("%d", &vetor[i]);
    }
    printf("Contando os numeros multiplos de X e mostrando na tela");
    for(int i = 0; i < TAM; i++){
        if(vetor[i] % x == 0){
            printf("\n Os multiplos são: %d ", vetor[i]);
            multiplos++;
        }  
    }
    printf("No vetor tem %d multiplos de %d", multiplos, x);


}