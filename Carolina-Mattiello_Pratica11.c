/*Carolina Silveira Mattiello
09 de março de 2022
Pratica 11 Algoritmo e Programacao
*/

#include <stdio.h>

typedef struct livro{
    int cod;
    char titulo[45];
    float preco;
    int np; //nro de paginas
}LIVRO;

int menu();
LIVRO cadastraLivro(void);
void print_livro(LIVRO liv);
float calcMediaPreco(LIVRO livros[], int nlvs);
LIVRO procuraLivro(LIVRO livros[], int nlvs, int cod);

int main (){
    int opcaoMenu, cod, nlvs=0, i=0;
    float media;
    LIVRO livros[3] = {0}, liv;

    do{
    opcaoMenu = menu();

        do {
        //cadastro de livro
        if (opcaoMenu == 1){
                livros[nlvs] = cadastraLivro();
                opcaoMenu = menu();
                nlvs++;
            }
        }
        while ((opcaoMenu == 1) && nlvs < 3);

        //consulta de livro
         if (opcaoMenu == 2){
            printf("Informe o codigo do livro:\n");
            scanf("%d", &cod);
            liv = procuraLivro(livros, nlvs, cod);
            if (liv.cod == -1){
                printf("Livro nao existe\n");
            }
            else {
                print_livro(liv);
            }
        }
        //preco medio dos livros
        else if (opcaoMenu == 3){
            media = calcMediaPreco(livros, nlvs);
            printf("O preco medio dos livros eh %f", media);
        }
        //imprime biblioteca
        else if (opcaoMenu == 4){
            if (nlvs > 0){
            for (i=0; i<nlvs; i++){
                print_livro(livros[i]);
            }
            }
            else{
                printf("Nao ha livros");
                }
        }
    }
    while (opcaoMenu != 5);

    return 0;
}

int menu(){
    int opcao;
    printf("1 - Cadastro de livro\n");
    printf("2 - Consulta de livro\n");
    printf("3 - Preco medio dos livros\n");
    printf("4 - Imprime biblioteca\n");
    printf("5 - Fim\n");
    printf("Entre com sua opcao: \n");
    scanf("%d", &opcao);
    return opcao;
}

LIVRO cadastraLivro(void){
    LIVRO livro;
    fflush(stdin);
    printf("Titulo: ");
    fgets(livro.titulo, 45, stdin);
    printf("Codigo: ");
    scanf("%d", &livro.cod);
    printf("Preco: ");
    scanf("%f", &livro.preco);
    printf("Numero de paginas:");
    scanf("%d", &livro.np);
    return livro;
}

LIVRO procuraLivro(LIVRO livros[], int nlvs, int cod){
    LIVRO livroproc;
    int i=0;
    for (i=0; i<nlvs; i++){
        if ((livros[i].cod) == cod){
            livroproc = livros[i];
        }
        else {
            livroproc.cod = -1;
        }
        return livroproc;
    }
}

void print_livro(LIVRO liv){
    printf("Titulo: %s", liv.titulo);
    printf("Codigo: %d\n", liv.cod);
    printf("Preco: %f\n", liv.preco);
    printf("Numero de paginas: %d\n", liv.np);
}

float calcMediaPreco(LIVRO livros[], int nlvs){
    float soma=0;
    float media;
    int i=0;
    for (i=0; i<nlvs; i++){
        soma += livros[i].preco;
    }
    media = (soma/nlvs);
    return media;
}

