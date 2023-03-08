/* Carolina Silveira Mattiello
02 de marco de 2023
Pratica 10 */

/* Esse programa calcula a quantidade de lajotas necessarias, de acordo com os tipos apresentados,
para forrar o piso da sala retangular com as dimensoes definidas pelo usuario */

#include <stdio.h>
#include <math.h>

void le_larg_comp_sala(int *l, int *c);
void calcula_lajotas(int l, int c, int *tipo1, int *tipo2);

int main(){

    int l, c;
    int tipo1, tipo2;
    le_larg_comp_sala(&l, &c);
    //printf("largura = [%d] e comprimento = [%d]\n", l, c);
    calcula_lajotas(l, c, &tipo1, &tipo2);
    printf("Numero de lajotas do tipo 1: %d\n", tipo1);
    printf("Numero de lajotas do tipo 2: %d\n", tipo2);

    return 0;
}

void le_larg_comp_sala(int *l, int *c){
    int x, y;
    do {
        printf("Entre com a largura da sala: ");
        scanf("%d", &x);
    }
    while (x < 1 || x > 100);
    *l = x;


    do {
        printf("Entre com o comprimento da sala: ");
        scanf("%d", &y);
    }
    while (y < 1 || y > 100);
    *c = y;
}

void calcula_lajotas(int l, int c, int *tipo1, int *tipo2){
    int laj1, laj2;

    //printf("largura = [%d] e comprimento = [%d]\n", l, c);

    laj1 = (c*l)+((l-1)*(c-1));
    *tipo1 = laj1;

    laj2 = 2*((c-1)+(l-1));
    *tipo2 = laj2;
}
