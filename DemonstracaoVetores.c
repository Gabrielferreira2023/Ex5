#include <stdio.h>

main(){

    //declaração de vetores
    int vetor[5];
    int vetor2[3] = {1, 2, 3};
    int vetor3[4];

    //inserção manual dos valores no vetor
    vetor[0] = 12;
    vetor[1] = 10;
    vetor[2] = 8;
    vetor[3] = 6;
    vetor[4] = 4;


    printf("%d", vetor[4]);

    printf("Posicao 0 do vetor 2: %d", vetor2[0]);

    for(int indice = 0; indice < 4; indice++ ){
        printf("Digite um numero");
        scanf("%d", &vetor3[indice]);
    }
    for (int indice = 0; indice < 4; indice++){
        printf("%d %d\n",indice, vetor3[indice]);
    }
}