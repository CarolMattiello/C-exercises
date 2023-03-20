/* Carolina Silveira Mattiello
16 de marco de 2023
algoritmos e programacao - pratica 12 */

//Esse programa registra candidatos num arquivo e imprime os com mais votos que solicitados
//tambem retorna a media de todos os candidatos

#include <stdio.h>
#include <string.h>

#define NARQUIVO 15
#define NPOLITICO 60
#define NPARTIDO 5

typedef struct {
    char nome[NPOLITICO];
    char partido[NPARTIDO];
    int votos;
} politico_t;

int main (){

    FILE *arquivo;
    float media=0;
    int votosprocurar, ncandidatos=0, somavotos=0, fimarquivo;
    char nomearquivo[NARQUIVO];
    politico_t politico;

    //pede o nome do arquivo
    printf("Entre com o nome do arquivo: \n");
    fgets(nomearquivo, NARQUIVO, stdin);
    nomearquivo[strlen(nomearquivo)-1] = '\0';
    //printf("o nome do arquivo eh [%s]\n", nomearquivo);
    printf("\n");

    //abre arquivo para escrever nele
    arquivo = fopen(nomearquivo, "w+b");
    if (arquivo == NULL){
        printf("Houve erro ao abrir o arquivo\n");
    }
    //comeca a pedir o nome do candidato
    do {
        printf("Nome: ");
        scanf("%s", &politico.nome);
        //fgets(politico.nome, NPOLITICO, stdin);
        //politico.nome[strlen(politico.nome)-1] = '\0';

        //pede os outros dados se o nome nao for sair
        if (strcmp(politico.nome, "sair")){
            printf("Partido: ");
            scanf("%s", &politico.partido);
            //fgets(politico.partido, NPARTIDO, stdin);
            printf("Votos: ");
            scanf("%d", &politico.votos);
            fwrite(&politico, sizeof(politico_t), 1, arquivo);
            ncandidatos++;
        }
        printf("\n");

    } while (strcmp(politico.nome, "sair")); //se eh igual retorna 0 que eh falso e nao continua

    if (ncandidatos == 0){
        printf("Nao ha candidatos registrados");
    }

    else{
        //se fechar o arquivo e quiser abrir de novo tem que ser com file?
        printf("Entre com o nro de votos para busca: \n");
        scanf("%d", &votosprocurar);

        //coloca a agulha de leitura para o inicio para ler o arquivo
        rewind (arquivo);

        //feof retorna 0 enquanto nao chega ao fim e 0 eh falso, entao verdadeiro eh != 0
        while (!feof(arquivo)){
            //se o read conseguir gravar, ele retorna 1, entao executa a funcao
            if (fread(&politico, sizeof(politico_t), 1, arquivo)== 1){
                if (politico.votos > votosprocurar){
                    printf("%s (%s) Votos: %d \n", politico.nome, politico.partido, politico.votos);
                }
            somavotos += (politico.votos);
            }
        }
        printf("\n");
        media = (somavotos/ncandidatos);
        printf("Numero medio de votos por candidato %.0f", media);
    }

    fclose(arquivo);

return 0;
}
