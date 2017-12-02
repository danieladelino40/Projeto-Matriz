#ifndef FUNCOES_H
#define FUNCOES_H

#define TAM 60
#define TAN 60
/**
 * @brief obter_matriz Fun��o que ir� obter a matriz A ou B oriunda de um arquivo indicado pelo usu�rio
 * @param matriz Dado que ir� armazenar a matriz A ou B oriunda do arquivo
 * @param linha Dado que ir� receber a quantidade de linhas da matriz A ou B oriunda de um arquivo
 * @param coluna Dado que ir� receber a quantidade de colunas da matriz A ou B oriunda de um arquivo
 */
void obter_matriz(float matriz[TAM][TAN], int *linha, int *coluna);
/**
 * @brief salvar_matriz Fun��o que ir� realizar o armazenamento da matriz resultante(matriz C) em um arquivo txt de acordo com uma das opera��es matem�ticas entre as matrizes selecionada pelo usu�rio
 * @param matriz Dado que ir� armazenar a matriz C (resultante)
 * @param linha Dado que ir� receber a quantidade de linhas da matriz C
 * @param coluna Dado que ir� receber a quantidade de colunas da matriz C
 */
void salvar_matriz(float matriz[TAM][TAN], int linha, int coluna);
/**
 * @brief multiplicar Fun��o para realizar o produto das matrizes A e B e guardar o resultado na matriz C
 * @param A Dado no qual ser� gravado a matriz A para reliza��o do c�lculo
 * @param B Dado no qual ser� gravado a matriz B para reliza��o do c�lculo
 * @param C Dado no qual ser� gravado a matriz C que ser� resultante da opera��o do c�lculo
 * @param nlA Dado da quantidade de linhas da matriz A
 * @param nlB Dado da quantidade de linhas da matriz B
 * @param ncA Dado da quantidade de colunas da matriz A
 * @param ncB Dado da quantidade de colunas da matriz B
 * @param nlC Dado da quantidade de linhas da matriz C
 * @param ncC Dado da quantidade de colunas da matriz C
 */
void multiplicar(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
/**
 * @brief subtrair Fun��o para realizar a subtra��o das matrizes A e B e guardar o resultado na matriz C
 * @param A Dado no qual ser� gravado a matriz A para reliza��o do c�lculo
 * @param B Dado no qual ser� gravado a matriz B para reliza��o do c�lculo
 * @param C Dado no qual ser� gravado a matriz C que ser� resultante da opera��o do c�lculo
 * @param nlA Dado da quantidade de linhas da matriz A
 * @param nlB Dado da quantidade de linhas da matriz B
 * @param ncA Dado da quantidade de colunas da matriz A
 * @param ncB Dado da quantidade de colunas da matriz B
 * @param nlC Dado da quantidade de linhas da matriz C
 * @param ncC Dado da quantidade de colunas da matriz C
 */
void subtrair(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
/**
 * @brief somar  Fun��o para realizar a adi��o das matrizes A e B e guardar o resultado na matriz C
 * @param A Dado no qual ser� gravado a matriz A para reliza��o do c�lculo
 * @param B Dado no qual ser� gravado a matriz B para reliza��o do c�lculo
 * @param C Dado no qual ser� gravado a matriz C que ser� resultante da opera��o do c�lculo
 * @param nlA Dado da quantidade de linhas da matriz A
 * @param nlB Dado da quantidade de linhas da matriz B
 * @param ncA Dado da quantidade de colunas da matriz A
 * @param ncB Dado da quantidade de colunas da matriz B
 * @param nlC Dado da quantidade de linhas da matriz C
 * @param ncC Dado da quantidade de colunas da matriz C
 */
void somar(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
/**
 * @brief definir_tamA Fun��o usada para definir as dimens�es da matriz A
 * @param linhas Dado que ir� receber a quantidade de linhas da matriz A
 * @param colunas Dado que ir� receber a quantidade de linhas da matriz A
 */
void definir_tamA(int *linhas,int *colunas);
/**
 * @brief definir_tamB Fun��o usada para definir as dimens�es da matriz B
 * @param linhas Dado que ir� receber a quantidade de linhas da matriz B
 * @param colunas Dado que ir� receber a quantidade de linhas da matriz B
 */
void definir_tamB(int *linhas ,int *colunas);
/**
 * @brief preenchiemto_definido Fun��o que ir� realizar o preenchimento de cada elemento da matriz A ou B de acordo com as escolhas do usu�rio
 * @param A Dado onde ser� armazenado a matriz A ou B com seus respectivos elementos
 * @param linhas Dado que ir� receber a quantidade de linhas da matriz A ou B
 * @param colunas Dado que ir� receber a quantidade de colunas da matriz A ou B
 */
void preenchiemto_definido (float A[TAM][TAN],int linhas,int colunas);
/**
 * @brief preenchimento_aleatorio Fun��o para realizar o preenchimento aleat�rio da matriz A ou B de acordo com o intervalo escolhido pelo usu�rio
 * @param B Dado que ir� receber a matriz A ou B com seus respectivos elementos definidos de maneira aleat�ria
 * @param linha Dado que ir� receber a quantidade de linhas da matriz A ou B
 * @param coluna Dado que ir� receber a quantidade de colunas da matriz A ou B
 */
void preenchimento_aleatorio (float B[TAM][TAN],int linha,int coluna );
/**
 * @brief interface Fun��o que exibe as op��es de intera��o com o usu�rio e o programa
 * @return retrona o valor de X que ser� utilizado nas escolhas das op��es
 */
int interface(void);
/**
 * @brief imprimir Fun��o utilizada para imprimir uma das 3 matrizes A, B ou C
 * @param A Dado que ir� receber a matriz A, B ou C
 * @param linha Dado que ir� receber a quantidade de linhas da matriz A, B ou C
 * @param coluna Dado que ir� receber a quantidade de colunas da matriz A, B ou C
 */
void imprimir(float A[TAM][TAN], int linha, int coluna);

#endif

