#include <stdio.h>

void preenchiemto_definido (float A[20][20],int linhas,int colunas){
    int i,j;

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("Digite o valor do elemento da matriz na posição [%d][%d]\n",i,j);
            scanf("%f",&A[i][j]);
        }
    }
}
void preenchimento_aleatorio (float B[20][20],int linha,int coluna ){

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


}
void imprimir_menu(void){
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
           "(13) Sair\n");

}
main(){
    int matA [2][2];
    imprimir_menu();
    preenchiemto_definido(matA, 2,2);

}
