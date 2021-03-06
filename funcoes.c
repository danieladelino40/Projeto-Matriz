#include "funcoes.h"
#include <time.h>
#include <stdio.h>
#include<stdlib.h>
#define TAM 60
#define TAN 60


void obter_matriz(float matriz[TAM][TAN], int *linha, int *coluna){

    FILE *f;
    char end[100];
    int i, j;
    char teste;
    int qtdEsp=0, qtdQue=0, qtdLin=0, qtdCol=0;

    printf("digite o endere�o onde deseja obter o arquivo: ");
    scanf("%s", &end);

    f = fopen(end,"r");
    if(f == NULL)
    {
    printf("nao abriu o arquivo\n");
    exit(0);
    }

    teste = fgetc(f);

while(teste != EOF)
    {
        if(teste==' ')
        {
            qtdEsp = qtdEsp + 1;
        }
        if(teste=='\n')
        {
            qtdQue = qtdQue+1;
        }
        teste = fgetc(f);
    }
    qtdLin = qtdQue + 1;
    qtdCol = (qtdEsp + qtdLin)/qtdLin;

    rewind(f);

    for(i=0;i<qtdLin;i++)
    {
        for(j=0;j<qtdCol;j++)
        {
            fscanf(f,"%f",&matriz[i][j]);
        }
    }

    *linha = qtdLin;
    *coluna = qtdCol;

    fclose(f);
    system("cls");
}
void salvar_matriz(float matriz[TAM][TAN], int linha, int coluna){

    FILE *arquivo;
    char end[100];
    int i, j;

    printf("digite o endere�o onde deseja salvar o arquivo: ");
    scanf("%s", &end);

    arquivo = fopen(end,"w");
    if(arquivo == NULL)
    {
     printf("nao abriu o arquivo\n");
     exit(0);
     }

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if(j!=(coluna-1))
            {
            fprintf(arquivo,"%f ", matriz[i][j]);
            }
            else
            {
            fprintf(arquivo,"%f",matriz[i][j]);
            }
        }
        if(i!=(linha-1))
        fprintf(arquivo,"\n");
     }
    fclose(arquivo);
    system("cls");
 }
void multiplicar(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC){

    int i,j,k;

    if(ncA==nlB)
    {
        *nlC=nlA;
        *ncC=ncB;

    for(i=0;i<*nlC;i++)
    {
        for(j=0;j<*ncC;j++)
        {
            C[i][j]=0;
        }
    }
    for(i=0; i<*nlC;i++)
    {
        for(j=0;j<*ncC;j++)
        {
            for(k=0;k<ncA;k++)
            {
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }
    system("cls");
    }
	else
	{
		system("cls");	
        printf("n�o foi poss�vel multiplicar a matriz");
	}
}
void subtrair(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC){

    int i,j;

    if(nlA == nlB && ncA == ncB){

        for(i=0;i<nlA;i++)
        {
            for(j=0;j<ncA;j++)
            {
                C[i][j]=A[i][j] - B[i][j];
            }
        }
        *nlC = nlA;
        *ncC = ncA;
        
        system("cls");
    }
	
	else{
		system("cls");
        printf("Nao foi poss�vel subtrair!");
    }
}
void somar(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC){

    int i,j;

    if(nlA == nlB && ncA == ncB){

        for(i=0;i<nlA;i++)
        {
            for(j=0;j<ncA;j++)
            {
                C[i][j]=A[i][j] + B[i][j];
            }
        }
        *nlC = nlA;
        *ncC = ncA;
		system("cls");
    }
	else
	{
		system("cls");
        printf("Nao foi poss�vel somar as matrizes!");
    }
}
void definir_tamA(int *linhas,int *colunas){

    printf("Digite a quantidade de linhas da matriz A: ");
    scanf("%d", linhas);

    while(*linhas<1||*linhas>TAM)
    {
        printf("Insira um valor no intervalo de 1 a %d: ",TAM);
        scanf("%d", linhas);
    }

    printf("Digite a quantidade de colunas da matriz A: ");
    scanf("%d", colunas);

    while(*colunas<1||*colunas>TAN)
    {
        printf("Insira um valor no intervalo de 1 a %d: ",TAN);
        scanf("%d", colunas);
    }
	system("cls");
}
void definir_tamB(int *linhas ,int *colunas){

	printf("Digite a quantidade de linhas da matriz B: ");
	scanf("%d", linhas);

    while(*linhas<1||*linhas>TAM)
    {
        printf("Insira um valor no intervalo de 1 a %d: ",TAM);
        scanf("%d", linhas);
    }

    printf("Digite a quantidade de colunas da matriz B: ");
    scanf("%d", colunas);

    while(*colunas<1||*colunas>TAN)
    {
        printf("Insira um valor no intervalo de 1 a %d: ",TAN);
        scanf("%d", colunas);
    }
	system("cls");
}
void preenchiemto_definido (float A[TAM][TAN],int linhas,int colunas){

    int i,j;

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("Digite o valor do elemento da matriz na posicao %dx%d\n",i+1,j+1);
            scanf("%f",&A[i][j]);
        }
    }
    system("cls");
}
void preenchimento_aleatorio (float B[TAM][TAN],int linha,int coluna ){

    float menor,maior;
    int i,j;

    srand(time(0));

    printf("Entre com o menor valor do intervalo: \n");
    scanf("%f",&menor);
    printf("Entre com o maior valor do intervalo: \n");
    scanf("%f",&maior);

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++)
		{
            B[i][j] = menor + (maior-menor)*((float)(rand())/RAND_MAX);
        }
    }
	system("cls");
}
int interface(void){

    int x;
    printf("\t\tPROGRAMA DE MANIPULACAO DE MATRIZES\n"
           "(1) Definir o tamanho da matriz A\n"
           "(2) Definir o tamanho da matriz B\n"
           "(3) Preencher a matriz A com valores aleatorios\n"
           "(4) Preencher a matriz B com valores aleatorios\n"
           "(5) Atribuir valor para um elemento da matriz A\n"
           "(6) Atribuir valor para um elemento da matriz B\n"
           "(7) Calcular A+B\n"
           "(8) Calcular A-B\n"
           "(9) Calcular A*B\n"
           "(10) Imprimir matriz A\n"
           "(11) Imprimir matriz B\n"
           "(12) Imprimir matriz C\n"
           "(13) Ler a matriz A de um arquivo\n"
           "(14) Ler a matriz B de um arquivo\n"
           "(15) Escrever a matriz C em um arquivo\n"
           "(16) Sair\n"
           "digite sua operacao: ");

    scanf("%d", &x);

    while(x<1 || x>16)
        {
            printf("escolha uma operacao valida: ");
            scanf("%d", &x);
        }
    return x;
}
void imprimir(float A[TAM][TAN], int linha, int coluna){

    int i,j;

    system("cls");

    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            printf("%f  ", A[i][j]);
        }printf("\n\n");
    }
system("pause");
system("cls");
}

