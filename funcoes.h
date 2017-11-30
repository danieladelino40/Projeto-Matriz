#ifndef FUNCOES_H
#define FUNCOES_H

#define TAM 50
#define TAN 51
/**
 * @brief obter_matriz Função que irá obter a matriz A ou B oriunda de um arquivo indicado pelo usuário
 * @param matriz Dado que irá armazenar a matriz A ou B oriunda do arquivo
 * @param linha Dado que irá receber a quantidade de linhas da matriz A ou B oriunda de um arquivo
 * @param coluna Dado que irá receber a quantidade de colunas da matriz A ou B oriunda de um arquivo
 */
void obter_matriz(float matriz[TAM][TAN], int *linha, int *coluna);
/**
 * @brief salvar_matriz Função que irá realizar o armazenamento da matriz resultante(matriz C) em um arquivo txt de acordo com uma das operações matemáticas entre as matrizes selecionada pelo usuário
 * @param matriz Dado que irá armazenar a matriz C (resultante)
 * @param linha Dado que irá receber a quantidade de linhas da matriz C
 * @param coluna Dado que irá receber a quantidade de colunas da matriz C
 */
void salvar_matriz(float matriz[TAM][TAN], int linha, int coluna);
/**
 * @brief multiplicar Função para realizar o produto das matrizes A e B e guardar o resultado na matriz C
 * @param A Dado no qual será gravado a matriz A para relização do cálculo
 * @param B Dado no qual será gravado a matriz B para relização do cálculo
 * @param C Dado no qual será gravado a matriz C que será resultante da operação do cálculo
 * @param nlA Dado da quantidade de linhas da matriz A
 * @param nlB Dado da quantidade de linhas da matriz B
 * @param ncA Dado da quantidade de colunas da matriz A
 * @param ncB Dado da quantidade de colunas da matriz B
 * @param nlC Dado da quantidade de linhas da matriz C
 * @param ncC Dado da quantidade de colunas da matriz C
 */
void multiplicar(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
/**
 * @brief subtrair Função para realizar a subtração das matrizes A e B e guardar o resultado na matriz C
 * @param A Dado no qual será gravado a matriz A para relização do cálculo
 * @param B Dado no qual será gravado a matriz B para relização do cálculo
 * @param C Dado no qual será gravado a matriz C que será resultante da operação do cálculo
 * @param nlA Dado da quantidade de linhas da matriz A
 * @param nlB Dado da quantidade de linhas da matriz B
 * @param ncA Dado da quantidade de colunas da matriz A
 * @param ncB Dado da quantidade de colunas da matriz B
 * @param nlC Dado da quantidade de linhas da matriz C
 * @param ncC Dado da quantidade de colunas da matriz C
 */
void subtrair(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
/**
 * @brief somar  Função para realizar a adição das matrizes A e B e guardar o resultado na matriz C
 * @param A Dado no qual será gravado a matriz A para relização do cálculo
 * @param B Dado no qual será gravado a matriz B para relização do cálculo
 * @param C Dado no qual será gravado a matriz C que será resultante da operação do cálculo
 * @param nlA Dado da quantidade de linhas da matriz A
 * @param nlB Dado da quantidade de linhas da matriz B
 * @param ncA Dado da quantidade de colunas da matriz A
 * @param ncB Dado da quantidade de colunas da matriz B
 * @param nlC Dado da quantidade de linhas da matriz C
 * @param ncC Dado da quantidade de colunas da matriz C
 */
void somar(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
/**
 * @brief definir_tamA Função usada para definir as dimensões da matriz A
 * @param linhas Dado que irá receber a quantidade de linhas da matriz A
 * @param colunas Dado que irá receber a quantidade de linhas da matriz A
 */
void definir_tamA(int *linhas,int *colunas);
/**
 * @brief definir_tamB Função usada para definir as dimensões da matriz B
 * @param linhas Dado que irá receber a quantidade de linhas da matriz B
 * @param colunas Dado que irá receber a quantidade de linhas da matriz B
 */
void definir_tamB(int *linhas ,int *colunas);
/**
 * @brief preenchiemto_definido Função que irá realizar o preenchimento de cada elemento da matriz A ou B de acordo com as escolhas do usuário
 * @param A Dado onde será armazenado a matriz A ou B com seus respectivos elementos
 * @param linhas Dado que irá receber a quantidade de linhas da matriz A ou B
 * @param colunas Dado que irá receber a quantidade de colunas da matriz A ou B
 */
void preenchiemto_definido (float A[TAM][TAN],int linhas,int colunas);
/**
 * @brief preenchimento_aleatorio Função para realizar o preenchimento aleatório da matriz A ou B de acordo com o intervalo escolhido pelo usuário
 * @param B Dado que irá receber a matriz A ou B com seus respectivos elementos definidos de maneira aleatória
 * @param linha Dado que irá receber a quantidade de linhas da matriz A ou B
 * @param coluna Dado que irá receber a quantidade de colunas da matriz A ou B
 */
void preenchimento_aleatorio (float B[TAM][TAN],int linha,int coluna );
/**
 * @brief interface Função que exibe as opções de interação com o usuário e o programa
 * @return retrona o valor de X que será utilizado nas escolhas das opções
 */
int interface(void);
/**
 * @brief imprimir Função utilizada para imprimir uma das 3 matrizes A, B ou C
 * @param A Dado que irá receber a matriz A, B ou C
 * @param linha Dado que irá receber a quantidade de linhas da matriz A, B ou C
 * @param coluna Dado que irá receber a quantidade de colunas da matriz A, B ou C
 */
void imprimir(float A[TAM][TAN], int linha, int coluna);

#endif
