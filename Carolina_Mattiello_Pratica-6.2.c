/* Carolina Mattiello
19 de janeiro de 2022
Algoritmos e Programação - 2022/2 Turma D */

//Programa que retorna a string sem espaços e retorna o numero de vogais


#include <stdio.h>
#include <string.h>
#define MAXLIDOS 10

int main(void) {

    float valores[MAXLIDOS] = {0};
    int cont=0, maiores=0, menores=0, count_m=0, i=0;
    float aux, media=1;

    printf("Entre os valores: \n");

    do {
        scanf("%f", &aux);
        if (aux > 0) {
            valores[cont] = aux;
            cont++;
        }
    }
    while (aux > 0 && cont < MAXLIDOS);

    for (i=0; i<cont; i++) {
        printf("%.f ", valores[i]); //printa o vetor na posicao cont

        media = (media + valores[i])/2;

        printf ("media eh %.2f\n", media);

        if (valores[i] > media) {
            maiores++;
        }
        else if (valores[i] < media) {
            menores++;
        }
    }

    printf("Media dos valores: %f \n", media);
    printf("Quantidade de valores maiores do que a media: %f \n", maiores);
    printf("Quantidade de valores menores do que a media: %f \n", menores);

return 0;
}
