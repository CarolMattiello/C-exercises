/* Carolina Mattiello
26 de janeiro de 2023
Turma D
Pratica 07, exercicio 02 */


#include <stdio.h>
#include <time.h> //para acessar o relogio
#include <stdlib.h> //para usar rand() e srand()

#define RMIN 1
#define RMAX 10


int main() {

    int numero = 0, tentativa = 1, nuser = 0;

    srand(time(NULL));
    numero = RMIN + (rand()%(RMAX - RMIN + 1));
    printf("o numero sorteado eh %d\n", numero);
    printf("\n");



    do {
        printf("Digite seu chute: ");
        scanf("%d", &nuser);
        if (nuser < numero){
            printf("Seu chute eh menor do que o valor sorteado!\n");
            printf("\n");
        }
        else if (nuser > numero){
            printf("Seu chute eh maior do que o valor sorteado!\n");
            printf("\n");
        }
        else if (nuser == numero) {
            printf("Parabens! Voce acertou em %d tentativa(s)\n", tentativa);
            printf("\n");
        }
        tentativa++;
    }
    while (tentativa <= 5 && nuser != numero);

    if (tentativa > 5){
        printf("Voce ultrapassou o numero maximo de tentativas!\n");
    }


    return 0;
}
