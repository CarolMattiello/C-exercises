//Carolina Silveira Mattielllo
//01 de dezembro de 2022
//Este programa calcula o numero de lampadas necessario para iluminar um quarto a partir das dimensoes do quarto e da potencia da lampada

#include <stdio.h>
#include <math.h>

int main (void)
{
    //Declarando variaveis de entrada
    float comprimento_cm, largura_cm;
    int potencia;
    //Declarando variaveis de saida
    float area_m, quantidade;

    printf("Entre com o comprimento do quarto (cm): ");
    scanf("%f", &comprimento_cm, &largura_cm);

    printf("Entre com a largura do quarto (cm): ");
    scanf("%f", &largura_cm);

    printf("Entre com a potencia das lampadas (W): ");
    scanf("%d", &potencia);

    area_m = ((comprimento_cm * largura_cm) / 10000);

    quantidade = ((area_m * 16) / potencia);

    printf("Numero de lampadas: %.0f \n",ceil(quantidade));

   return 0;
}





