/*

Faça um programa que leia um vetor de 5 posições para numeros reais e depois um código(numero) inteiro. Se o código foi 0, finalize o programa, se o codigo foi 1, mostre o vetor na ordem direta, se for 2, mostre o vetor na ordem inversa. Caso o código seja diferente, informar que o código é inválido.
*/

#include<stdio.h>
#define TAM 5

main(){
    int vetor[TAM];
    int cod, i;

    for(i = 0; i < TAM; i++){
        printf("Digite os numeros");
        scanf("%d\n", &vetor[i]);
    }
    
   fflush(stdin);
   printf("Digite o codigo:");
   scanf("%d", &cod);

   switch(cod){
        case 0:
            exit(0);
            break;
        case 1: 
            printf("Valores crescente: ");
            for(i = 0; i < TAM; i++){
                printf("%d\n", vetor[i]);
            }
            break;
        case 2:
            printf("Valores decrescente: ");
            for(i = TAM-1; i >-1; i--){
                printf("%d\n", vetor[i]);
            }
            break;
        default:
            printf("Codigo invalido");
   }
  // printf("continua execucao");

}