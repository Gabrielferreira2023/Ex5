#include <stdio.h>
#include<math.h>

main(){

    //declaração de vetores
    int vetorDados[10];
    int vetorRes[10];

    for(int indice = 0; indice < 10; indice++){
        printf("Digite os valores");
        scanf("%d", &vetorDados[indice]);
    }
    for(int indice = 0; indice < 10; indice++){
       // vetorRes[indice] = pow(vetorDados[indice],2);
        vetorRes[indice] = vetorDados[indice] * vetorDados[indice];
        fflush(stdin);
        printf("%d\n",vetorRes[indice]);
    }

}   