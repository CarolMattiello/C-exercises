/*
Carolina Silveira Mattiello
22 de dezembro de 2022
*/

//Este programa calcula quanto tempo demora para a massa do material radioativo ser menor que 0.5 a partir do cálculo de meia vida a cada 50s

#include <stdio.h>


int main(void) {

    #define MEIAVIDA 50
    float minicial;
    float mfinal;
    int segundos, i=0;
    int thoras, tmin, tseg;

    printf("Massa inicial (gramas): ");
    scanf("%f", &minicial);
    mfinal = minicial;

    while(mfinal >= 0.5){
        mfinal = mfinal/2.0;
        i++;
    };

    segundos = (MEIAVIDA * i);
    printf("Total segundos %d \n", segundos);
    printf("Massa final: %1.6f \n", mfinal);

    thoras = segundos/3600;
    tmin = (segundos%3600)/60;
    tseg = (segundos - (thoras*3600) - (tmin*60));

    printf("tempo: %d horas, %d min e %d s \n", thoras, tmin, tseg);

    return 0;
}


