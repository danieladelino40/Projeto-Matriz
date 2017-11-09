#include <stdio.h>
#include <stdlib.h>

void multiplicar(float A[50][50],float B[50][50],float C[50][50], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC){

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


    }

    system("cls");

}
void subtrair(float A[50][50],float B[50][50],float C[50][50], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC){

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


    }else{

        printf("Nao foi possível subtrair!");

    }

    system("cls");

}

void somar(float A[50][50],float B[50][50],float C[50][50], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC){

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


    }else{

        printf("Nao foi possível somar as matrizes!");

    }

    system("cls");

}

void definir_tamA(int *linhas,int *colunas){

    printf("Digite a quantidade de linhas da matriz A: ");

    scanf("%d", linhas);


    while(*linhas<1||*linhas>50)

    {

        printf("Insira um valor no intervalo de 1 a 50: ");

        scanf("%d", linhas);

    }

    printf("Digite a quantidade de colunas da matriz A: ");

    scanf("%d", colunas);


    while(*colunas<1||*colunas>50)

    {

        printf("Insira um valor no intervalo de 1 a 50: ");

        scanf("%d", colunas);

    }


system("cls");

}


void definir_tamB(int *linhas ,int *colunas){

  printf("Digite a quantidade de linhas da matriz B: ");

    scanf("%d", linhas);


    while(*linhas<1||*linhas>50)

    {

        printf("Insira um valor no intervalo de 1 a 50: ");

        scanf("%d", linhas);

    }

    printf("Digite a quantidade de colunas da matriz B: ");

    scanf("%d", colunas);


    while(*colunas<1||*colunas>50)

    {

        printf("Insira um valor no intervalo de 1 a 50: ");

        scanf("%d", colunas);

    }


system("cls");

}

void preenchiemto_definido (float A[50][50],int linhas,int colunas){

    int i,j;


    for(i=0;i<linhas;i++){

        for(j=0;j<colunas;j++){

            printf("Digite o valor do elemento da matriz na posicao %dx%d\n",i+1,j+1);

            scanf("%f",&A[i][j]);

        }

    }

    system("cls");

}

void preenchimento_aleatorio (float B[50][50],int linha,int coluna ){


    float menor,maior;
    int i,j;

    srand(time(0));

    printf("Entre com o menor valor do intervalo: \n");

    scanf("%f",&menor);

    printf("Entre com o maior valor do intervalo: \n");

    scanf("%f",&maior);
    
    for(i=0;i<linha;i++){

        for(j=0;j<coluna;j++){
			
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

void imprimir(float A[50][50], int linha, int coluna){

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


main(){

    int i, j,x=0;

    float matA [50][50];

    float matB [50][50];

    float matC [50][50];

    int linhaA, colunaA, linhaB, colunaB, linhaC, colunaC;


    while(x!=16)

    {

        x=interface();


        switch(x)

        {

            case 1:

                definir_tamA(&linhaA, &colunaA);

                break;

            case 2:

                definir_tamB(&linhaB, &colunaB);

                break;

            case 3:

               preenchimento_aleatorio (matA, linhaA, colunaA );

                break;

            case 4:

               preenchimento_aleatorio (matB, linhaB, colunaB );

                break;

            case 5:

                preenchiemto_definido(matA, linhaA,colunaA);

                break;

            case 6:

                preenchiemto_definido(matB, linhaB,colunaB);

                break;

            case 7:

               somar(matA, matB, matC, linhaA, linhaB, colunaA, colunaB, &linhaC, &colunaC);

                break;

            case 8:

                subtrair(matA, matB, matC, linhaA, linhaB, colunaA, colunaB, &linhaC, &colunaC);

                break;

            case 9:

                multiplicar(matA, matB, matC, linhaA, linhaB, colunaA, colunaB, &linhaC, &colunaC);

                break;

            case 10:

                imprimir(matA, linhaA ,colunaA);

                break;

            case 11:

                imprimir(matB, linhaB ,colunaB);

                break;

            case 12:

                imprimir(matC, linhaC ,colunaC);

                break;

            case 13:


                break;

            case 14:


                break;

            case 15:


                break;


        }

    }



}
