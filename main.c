#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"
#define TAM 60
#define TAN 60
main(){

    int x=0;
    float matA [TAM][TAN];
    float matB [TAM][TAN];
    float matC [TAM][TAN];

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
                obter_matriz(matA, &linhaA, &colunaA);
                break;
            case 14:
                 obter_matriz(matB, &linhaB, &colunaB);
                break;
            case 15:
                salvar_matriz(matC, linhaC, colunaC);
                break;
        }
    }
}
