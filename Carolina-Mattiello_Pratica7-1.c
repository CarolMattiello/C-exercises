/* Carolina Mattiello
26 de janeiro de 2023
Turma D
Pratica 07, exercicio 01 */

#include <stdio.h>
#include <time.h> //para acessar o relogio
#include <stdlib.h> //para usar rand() e srand()

#define TAM 9
#define RANDMIN 1
#define RANDMAX 30

int main(){

    int n, vezes = 0, l = 0, c = 0;
    int matriz[9][9];
    int minimax = 0, max = 0, linha = 0;


        do {
            printf("Entre com a dimensao da matriz: \n");
            scanf("%d", &n);
            if (n < 3 || n > 9){
                printf ("Valor invalido. Entre novamente \n\n");
            }
            vezes++;
        }
        while ((n < 3 || n > 9) && vezes < 5);

    srand(0); //define a semente do rand

    //iniciando a matriz com valores aleatorios
    for (l = 0; l < n; l++){
        for (c = 0; c < n; c++){
            matriz[l][c] = RANDMIN + (rand()%(RANDMAX-RANDMIN+1));
        }
    }

    printf("\n");

    for (l = 0; l < n; l++){
        for (c = 0; c < n; c++){
            printf ("%3d", matriz[l][c]);
            if (c+1 < n){
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

     max = matriz[0][0];
     for (l = 0; l < n; l++){
        for (c = 0; c < n; c++){
            if (matriz[l][c]>max){
                max = matriz[l][c];
                linha = l;
            }
        }
     }

    //navegar entre as linhas e colunas e armazenar
    //o maior número e sua linha
    //for (l = 0; l < n; l++){
    /*l = 0;
    for (c = 0; c < (n-1); c++){
            if (matriz[l][c] > matriz[l][c+1]){
                max = matriz[l][c];
            }
            else {
                max = matriz[l][c+1];
            }
    }

    for (l = 1; l < n; l++){
        for (c = 0; c < n; c++){
                if (matriz[l][c] > max){
                    max = matriz[l][c];
                    linha = l;
                }
        }
    } */

    minimax = matriz[linha][0];
    for (c = 0; c < n; c++){
        if (matriz[linha][c]<minimax){
            minimax = matriz[linha][c];
            }
        }

        /*for (c = 0; c < n; c++){
            if (matriz[linha][c] < matriz[linha][c+1]){
                minimax = matriz[linha][c];

            }

        }*/

        printf("O elemento minimax da matriz vale %3d \n", minimax);

    return 0;

}








/*Ler inteiro N entre [3 e 9], fazer validacao
matriz NxN com num aleatorios [1 a 30]
imprimir a matriz gerada com %3d
calcular e imprimir minimax*/



