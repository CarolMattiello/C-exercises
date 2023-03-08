/*
Carolina Silveira Mattiello
08 de dezembro de 2022
*/

//Este programa le a parte numerica da placa do carro e informa o mes de pagamento do IPVA

#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declaracao de variaveis de entrada
    int placa, num_final;

    printf("Entre com a parte numerica da placa \n");
    scanf("%d", &placa);

    num_final = (placa % 10);

    if (placa >= 1000 && placa <= 9999) {

        switch (num_final){
          case 1:
            printf("Mes de vencimento Janeiro");
            break;
          case 2:
            printf("Mes de vencimento Fevereiro");
            break;
        case 3:
            printf("Mes de vencimento Marco");
            break;
        case 4:
            printf("Mes de vencimento Abril");
            break;
        case 5:
            printf("Mes de vencimento Maio");
            break;
        case 6:
            printf("Mes de vencimento Junho");
            break;
        case 7:
            printf("Mes de vencimento Julho");
            break;
        case 8:
            printf("Mes de vencimento Agosto");
            break;
        case 9:
            printf("Mes de vencimento Setembro");
            break;
        case 0:
            printf("Mes de vencimento Outubro");
            break;
        }
    }

    else {
        printf ("O numero digitado eh invalido \n"); }

    return 0;

}

