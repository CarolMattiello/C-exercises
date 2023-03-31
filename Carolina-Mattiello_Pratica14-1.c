/*Carolina Silveira Mattiello
Algoritmo e programacao - Pratica 14 - 1
30 de marco de 2023*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 30

int encontre_caracter(char *str, char c) {
    if (str == NULL)
        return 0;
    else if (*str == '\0')
        return 0;
    else if (*str == c){
        return 1 + encontre_caracter(str+1, c);
    }
    else
        return encontre_caracter(str+1, c);
}

int main () {

    char str[MAX], caracter;
    int quant=0;

    printf("Entre com uma string: \n");
    fgets(str, MAX, stdin);

    printf("\nEntre com um caracter\n");
    scanf(" %c", &caracter);

    quant = encontre_caracter(str, caracter);

    if (quant == 0) {
        printf("\nO caracter nao aparece");
    }
    else {
        printf("\nO caracter aparece %d vezes na string %s\n", quant, str);
    }

    return 0;
}
