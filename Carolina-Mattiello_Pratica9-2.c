/* Carolina Silveira Mattiello
Algoritmo e Programacao D
09 de fevereiro de 2022 */

//a ideia era criar um vetor com notas na main e usar ponteiro para alterar os valores na funcao
//fazer funcao de ordenamento do vetor
//funcao que calcula a media

#include <stdio.h>
#include <math.h>
#include <ctype.h>

char calculo (int n1, int n2, int n3, int n4, int nf, int *media);

int main () {
    char conceito;
    int n1, n2, n3, n4, nf;
    int media;
    char continuar;
    do {
    printf("Entre com as 5 notas: \n");
        scanf("%d", &n1);
        scanf("%d", &n2);
        scanf("%d", &n3);
        scanf("%d", &n4);
        scanf("%d", &nf);
        conceito = calculo (n1, n2, n3, n4, nf, &media);
        printf ("Sua media eh %d e seu conceito eh %c \n", media, conceito);
        printf ("Mais um (S/N) \n");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);
    } while (continuar != 'N');
    return 0;
}

char calculo (int n1, int n2, int n3, int n4, int nf, int *media) {
    int i;
    char conceito;
    int sinal, aux;
    int vetor [5] = {n1, n2, n3, n4, nf};
    do {
        sinal = 0;
        for (i = 0; i < 4; i++){
            if (vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                sinal = 1;
            }
        }
    } while (sinal == 1);

    *media = (vetor[1]+vetor[2]+vetor[3]+vetor[4]);

    if(*media > 85){
        conceito = 'A';
    } else if (*media > 70){
        conceito = 'B';
    } else if (*media > 50){
        conceito = 'C';
    } else if (*media > 0){
        conceito = 'D';
    }

    return conceito;
}

