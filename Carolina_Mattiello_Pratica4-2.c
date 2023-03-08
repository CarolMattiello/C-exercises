/*
Carolina Silveira Mattiello
15 de dezembro de 2022
*/
//

#include<stdio.h>
#include<math.h>

int main(void) {

    //Declaracao de variaveis de entrada
    int termos, i;

    //Declaracao de ariaveis de saida
    float pi;
    int denom=3;

    printf("Entre com o numero de termos para calculo de PI: \n");
    scanf("%d", &termos);

    if(termos >= 5){

        pi = ((float)(4 - (4.0/denom)));

        for (i=1; i<=termos; i++) {
            denom = denom + 2;
            if (i%2 == 0)
                pi = (pi - (4.0/denom));
            else
                pi = (pi + (4.0/denom));

        }

        printf("Valor do PI com %d termos: %f \n", termos, pi);
    }

    else
        printf("Numero de termos invalido \n");

    return 0;
}
