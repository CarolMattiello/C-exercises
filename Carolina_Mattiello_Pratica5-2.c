/*
Carolina Silveira Mattiello
22 de dezembro de 2022
*/

//Este programa calcula a funcao ate que o termo seja menor que a tolerancia

#include <stdio.h>
#include <math.h>

int main(void){

    float x, tol, res=0.0, termo, sinal=-1.0;
    int exp;

    printf("Entre com o valor de x em que -1.0 <= x <= 1.0: ");
    scanf("%f", &x);

    if (x >= -1.0 && x <= 1.0) {
        printf("Entre o valor de tolerancia: ");
        scanf("%f", &tol);

        exp = 1;

        do  {
            termo = (pow(x, exp))/(exp*(exp+1));
            //printf("o termo eh (%f)^(%d)/(%d * (%d + 2))", x, exp, exp, exp);
            sinal = sinal * (-1);
            res = res + (sinal*termo);
            exp = exp + 2;
        }

        while (fabs(termo) >= tol);

        printf("O resultado foi %f", res);
    }

    else {
        printf("Valor de x fora do intervalo!");
    }

    return 0;
}
