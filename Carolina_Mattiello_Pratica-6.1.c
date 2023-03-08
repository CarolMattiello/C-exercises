/* Carolina Mattiello
19 de janeiro de 2022
Algoritmos e Programação - 2022/2 Turma D */

//Programa que retorna a string sem espaços e retorna o numero de vogais


#include <stdio.h>
#include <string.h>
#define TAMANHO 60

int main(void){

    char minha_string[TAMANHO] = {0};
    char sem_espaco[TAMANHO] = {0};
    int i=0, j=0, vogais=0;

    printf("Entre com uma string: \n");
    fgets(minha_string, TAMANHO, stdin);

    while (i < TAMANHO) {

        if (minha_string[i] != 32) {
            sem_espaco[j] = minha_string[i];}
        else {
            j--; }

         //criar aux to upper da minha string

        if (minha_string[i] == 'a' || minha_string[i] == 'A') {
            vogais++; }
        else if (minha_string[i] == 'e' || minha_string[i] == 'E') {
            vogais++; }
        else if (minha_string[i] == 'i'  || minha_string[i] == 'I') {
            vogais++; }
        else if (minha_string[i] == 'o'  || minha_string[i] == 'O') {
            vogais++; }
        else if (minha_string[i] == 'u'  || minha_string[i] == 'U') {
            vogais++; }

        i++;
        j++;

        }

    printf("String sem espacos: %s \n", sem_espaco);
    printf("Nro de vogais: %d \n", vogais);

    return 0;
}
