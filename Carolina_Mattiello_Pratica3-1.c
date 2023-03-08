/*
Carolina Silveira Mattiello
08 de dezembro de 2022
*/

//Este programa verifica as condições e diz se a pessoa esta apta a doar sangue

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    //Declaracao de variaveis de entrada
    char tatuagem;
    float peso;
    int idade;

    printf("Voce fez tatuagem nos ultimos 12 meses (S/N)? \n");
    scanf(" %c", &tatuagem);

    tatuagem = toupper(tatuagem);

    if (tatuagem != 'S' && tatuagem != 'N') //Testando se o usuario colocou o input solicitado
      printf ("Codigo invalido");

    else
      {
        if (tatuagem == 'S'){
          printf("Voce nao pode ser doador!"); }

        else {
          printf("Qual seu peso? \n");
          scanf("%f", &peso);

          if (peso < 50) {
            printf("Voce nao pode ser doador!"); }

          else {
            printf("Qual a sua idade? \n");
            scanf("%d", &idade);

            if (idade <16 || idade>69) {
              printf("Voce nao pode ser doador!"); }

            else {
              printf ("Parabens! Voce pode ser doador! \n"); }

      }}}

        return 0;
    }
