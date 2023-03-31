/*Carolina Silveira Mattiello
Algoritmo e programacao - Pratica 13
23 de marco de 2023*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXP 6

typedef struct {
 char nome1[30], nome2[30];
 int set1, set2;
 int minutos;
}PARTIDA;

int le_arquivo_partidas(FILE *arquivo, PARTIDA p[]);
void escreve_arquivo_saida(PARTIDA p[], int np, FILE *fp_out);

int main(){
    PARTIDA p[MAXP];
    FILE *arquivo = NULL;
    FILE *saida = NULL;
    int np;

    arquivo = fopen("tenis.txt", "r");
    if (arquivo == NULL) {
        printf ("Deu erro ao abrir arquivo de entrada");
    }
    else {
        np = le_arquivo_partidas(arquivo, p);
        saida = fopen("saida.txt", "w");
        if (arquivo == NULL) {
            printf ("Deu erro ao abrir arquivo de saida");
        } else {
        escreve_arquivo_saida(p, np, saida);
    }}

    fclose(arquivo);
    fclose(saida);

    return 0;
}


int le_arquivo_partidas(FILE *arquivo, PARTIDA p[]){
    int np = 0;
    while (!(feof(arquivo))){
        fscanf(arquivo, "%s %d %d %s %d\n", p[np].nome1, &p[np].set1, &p[np].set2, p[np].nome2, &p[np].minutos);
        //printf("[%s], set[%d], set2[%d], [%s], tempo[%d] \n", p[np].nome1, p[np].set1, p[np].set2, p[np].nome2, p[np].minutos);
        np++;
    }

    return np;
}

void escreve_arquivo_saida(PARTIDA p[], int np, FILE *saida){
    int partida = 0, horas = 0, minutos = 0;
    char vencedor[30];
    for (partida = 0; partida < np; partida++){
        //calcular vencedor
        if ((p[partida].set1) > (p[partida].set2)){
            strcpy(vencedor, p[partida].nome1);
        } else {
            strcpy(vencedor, p[partida].nome2);
        }
        //converter tempo de jogo
        horas = floor((p[partida].minutos/60));
        minutos = (p[partida].minutos - (horas*60));
        printf("Partida %d. Vencedor %s. Tempo de jogo: %.2dh:%dmin \n", (partida+1), vencedor, horas, minutos);
        fprintf (saida, "Partida %d. Vencedor %s. Tempo de jogo: %.2dh:%dmin\n", (partida+1), vencedor, horas, minutos);
    }
}
