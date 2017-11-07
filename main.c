#include <stdio.h>

void multiplicar(float A[50][50],float B[50][50],float C[50][50], int nlA[1], int nlB[1], int ncA[1], int ncB[1],int nlC[1],int ncC[1]){
	int i,j,k;
	
	if(ncA[0]==nlB[0])
	{
		nlC[0]=nlA[0];
		ncC[0]=ncB[0];
	
	for(i=0;i<nlC[0];i++)
	{
		for(j=0;j<ncC[0];j++)
		{
			C[i][j]=0;
		}
	}
	
	
	
	for(i=0; i<nlC[0];i++)
	{
		for(j=0;j<ncC[0];j++)
		{
			for(k=0;k<ncA[0];k++)
			{
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	
	}
	system("cls");
}
void subtrair(float A[50][50],float B[50][50],float C[50][50], int nlA[1], int nlB[1], int ncA[1], int ncB[1],int nlC[1],int ncC[1]){
    int i,j;
    if(nlA[0] == nlB[0] && ncA[0] == ncB[0]){
        for(i=0;i<nlA[0];i++)
		{
            for(j=0;j<ncA[0];j++)
			{
                C[i][j]=A[i][j] - B[i][j];
            }
        }
        nlC[0] = nlA[0];
        ncC[0] = ncA[0];

    }else{
        printf("Nao foi possível subtrair!");
    }
    system("cls");
}
void somar(float A[50][50],float B[50][50],float C[50][50], int nlA[1], int nlB[1], int ncA[1], int ncB[1],int nlC[1],int ncC[1]){
    int i,j;
    if(nlA[0] == nlB[0] && ncA[0] == ncB[0]){
        for(i=0;i<nlA[0];i++)
		{
            for(j=0;j<ncA[0];j++)
			{
                C[i][j]=A[i][j] + B[i][j];
            }
        }
        nlC[0] = nlA[0];
        ncC[0] = ncA[0];

    }else{
        printf("Nao foi possível somar as matrizes!");
    }
    system("cls");
}
void definir_tamA(int linhas [1],int colunas [1]){
    printf("Digite a quantidade de linhas da matriz A: ");
    scanf("%d", &linhas[0]);
    
    while(linhas[0]<1||linhas[0]>50)
	{
		printf("Insira um valor no intervalo de 1 a 50: ");
		scanf("%d", &linhas[0]);
	}
    printf("Digite a quantidade de colunas da matriz A: ");
    scanf("%d", &colunas[0]);
    
    while(colunas[0]<1||colunas[0]>50)
	{
		printf("Insira um valor no intervalo de 1 a 50: ");
		scanf("%d", &colunas[0]);
	}

system("cls");
}
void definir_tamB(int linhas [1],int colunas [1]){
  printf("Digite a quantidade de linhas da matriz B: ");
    scanf("%d", &linhas[0]);
    
    while(linhas[0]<1||linhas[0]>50)
	{
		printf("Insira um valor no intervalo de 1 a 50: ");
		scanf("%d", &linhas[0]);
	}
    printf("Digite a quantidade de colunas da matriz B: ");
    scanf("%d", &colunas[0]);
    
    while(colunas[0]<1||colunas[0]>50)
	{
		printf("Insira um valor no intervalo de 1 a 50: ");
		scanf("%d", &colunas[0]);
	}

system("cls");
}
void preenchiemto_definido (float A[50][50],int linhas[1],int colunas[1]){
    int i,j;

    for(i=0;i<linhas[0];i++){
        for(j=0;j<colunas[0];j++){
            printf("Digite o valor do elemento da matriz na posicao [%d][%d]\n",i,j);
            scanf("%f",&A[i][j]);
        }
    }
    system("cls");
}
void preenchimento_aleatorio (float B[50][50],int linha,int coluna ){

    int menor,maior;
    int i,j;
    srand(time(0));
    printf("Entre com o menor valor do intervalo: \n");
    scanf("%d",&menor);
    printf("Entre com o maior valor do intervalo: \n");
    scanf("%d",&maior);

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            B[i][j] = menor + (rand()%(maior-menor));
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
void imprimir(float A[50][50], int linha[1], int coluna[1]){
	int i,j;
	for(i=0;i<linha[0];i++)
	{
		for(j=0;j<coluna[0];j++)
		{
			printf("%2.2f ", A[i][j]);
		}printf("\n");
	}
}

main(){
    int i, j,x=0;
    float matA [50][50];
    float matB [50][50];
    float matC [50][50];
    int linhaA[1], colunaA[1], linhaB[1], colunaB[1], linhaC[1], colunaC[1];
    
    while(x!=16)
	{
		x=interface();
		
		switch(x)
		{
			case 1:
				definir_tamA(linhaA,colunaA);
				break;
			case 2:
				definir_tamB(linhaB,colunaB);
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
				somar(matA, matB, matC, linhaA, linhaB, colunaA, colunaB, linhaC, colunaC);
				break;
			case 8:
				subtrair(matA, matB, matC, linhaA, linhaB, colunaA, colunaB, linhaC, colunaC);
				break;
			case 9:
				multiplicar(matA, matB, matC, linhaA, linhaB, colunaA, colunaB, linhaC, colunaC);
				break;
			case 10:
				imprimir(matA, linhaA,colunaA);
				break;
			case 11:
				imprimir(matB, linhaB,colunaB);
				break;
			case 12:
				imprimir(matC, linhaC,colunaC);
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
