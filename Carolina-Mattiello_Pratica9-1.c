/* Carolina Silveira Mattiello
Algoritmo e Programacao D
09 de fevereiro de 2022 */

#include <stdio.h>
#include <math.h>

int menu (void);
float m_harmonica (void);
float m_geometrica (void);

int main (){
    int opcao;
    float harmonica, geometrica;
    do{
        opcao = menu();
        switch (opcao){
        case 1:
            harmonica = m_harmonica();
            printf("A media harmonica vale %f \n", harmonica);
            break;
        case 2:
            geometrica = m_geometrica();
            printf("A media geometrica vale %f \n", geometrica);
            break;
        case 3:
            break;
        defaulf:
            printf("Valor invalido, digite novamente \n");
            break;
        }
    }
    while (opcao != 3);

    return 0;
}

int menu (void){
    int opcao;
    printf("Entre com uma das opcoes: \n");
    printf("1 – Calcula a media harmonica de 3 numeros reais \n");
    printf("2 – Calcula a media geometrica de 3 numeros reais \n");
    printf("3 - Sair \n");
    scanf("%d", &opcao);
    return opcao;
}

float m_harmonica (void) {
    float n1, n2, n3;
    float m_harmonica;
    printf("Entre com os 3 valores \n");
    //idealmente usaria um vetor
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    m_harmonica = (3.0/((1.0/n1)+(1.0/n2)+(1.0/n3)));
    return m_harmonica;
}

float m_geometrica (void) {
    float n1, n2, n3;
    float m_geometrica;
    printf("Entre com os 3 valores \n");
    //idealmente usaria um vetor
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    m_geometrica = pow((n1 * n2 * n3), (1.0/3.0));
    return m_geometrica;

}



