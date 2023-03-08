/*
Carolina Silveira Mattiello
15 de dezembro de 2022
*/
//Este programa recebe dados dos integrantes e retorna com a porcentagem de homens e a media da idade

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void) {

    //Declaracao de variaveis de entrada
    int inscritos, idade, i, sum_id=0;
    char genero;
    //Declarando variaveis de saida
    int masc=0, fem=0;
    float media, porcentagem_masc;

    printf("Entre com o nro de inscritos: \n");
    scanf("%d", &inscritos);
    for (i=1; i<=inscritos; i++){

        printf("Entre com o genero: \n");
        scanf(" %c", &genero);
                printf("Entre a idade: \n");
        scanf("%d", &idade);
        genero = tolower(genero);
        if(genero == 'm'){
            masc++;}
        else {
            fem++;
        }
        sum_id = (sum_id + idade);
        media = ((float)sum_id/i);
    }

    porcentagem_masc = ((((float)masc/inscritos)*100));

    printf("Inscritos genero masculino %.2f \n", porcentagem_masc);
    printf("Idade media dos inscritos %.2f \n", media);

    return 0;
}
