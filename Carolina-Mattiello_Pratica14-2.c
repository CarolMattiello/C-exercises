/*Carolina Silveira Mattiello
Algoritmo e programacao - Pratica 14 - 2
30 de marco de 2023*/

//retorna maior valor armazenado num array de inteiro v com n elementos

#include <stdio.h>
#include <string.h>
#include <math.h>

#define TAM 10

int maior_valor(int v[],int n){
    int maior;
    if (v == NULL)
        return 0;
    else if (n == 1){
        return v[0];
    }
    else {
        maior = maior_valor (v, n-1);
        if (v[n-1] > maior)
            return v[n-1];
        else
            return maior;
    }
}

int main (){

    int v[TAM];
    int i=0, nElem=0, maior=0;
    nElem = TAM;

    printf("Entre com os 10 elementos\n");
    for (i = 0; i < nElem; i++){
        scanf("%d", &v[i]);
    }

    maior = maior_valor (v, nElem);
    printf("O maior elemento eh %d\n", maior);

    return 0;
}
