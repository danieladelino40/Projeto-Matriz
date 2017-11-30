#ifndef FUNCOES_H
#define FUNCOES_H

#define TAM 50
#define TAN 51

void obter_matriz(float matriz[TAM][TAN], int *linha, int *coluna);
void salvar_matriz(float matriz[TAM][TAN], int linha, int coluna);
void multiplicar(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
void subtrair(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
void somar(float A[TAM][TAN],float B[TAM][TAN],float C[TAM][TAN], int nlA, int nlB, int ncA, int ncB,int *nlC,int *ncC);
void definir_tamA(int *linhas,int *colunas);
void definir_tamB(int *linhas ,int *colunas);
void preenchiemto_definido (float A[TAM][TAN],int linhas,int colunas);
void preenchimento_aleatorio (float B[TAM][TAN],int linha,int coluna );
int interface(void);
void imprimir(float A[TAM][TAN], int linha, int coluna);

#endif
