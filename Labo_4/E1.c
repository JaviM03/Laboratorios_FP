/* Crear un programa que permita transponer una matriz de 3x3 . 
Al transponer una matriz se hace el cambio de filas por columnas y de las columnas por filas en una nueva matriz*/
#include<stdio.h>
#define MAX 3
//gcc main.c -o main &&./main

    int main(int argc, char const *argv[])
    {
        int matriz[MAX][MAX],filas=3,col=3;

       //Le damos valores a la matriz
        for(int i=0;i<filas;i++){
            for(int j=0;j<col;j++){
                printf("Escribre los valores de la matriz en la posicion:[%d] [%d]: ",i+1,j+1);
                scanf("%d",&matriz[i][j]);
                
            }

        }

        printf("\n\n\t\tMatriz original");/*RUTINA PARA IMPRIMIR*/
  printf("\n\n");
  for(int i = 0;i < col;i++){
      printf("\n\t\t");
      for(int j = 0;j < filas;j++){
          printf("  %2d  ", matriz[i][j]);
          
          }
  }printf("\n");


   printf("\n\n\t\tMatriz transpuesta");/*RUTINA PARA IMPRIMIR*/
  printf("\n\n");
  for(int i = 0;i < col;i++){
      printf("\n\t\t");
      for(int j = 0;j < filas;j++){
          printf("  %d  ", matriz[j][i]);
          
          }
  }printf("\n");
        
        return 0;
    }
    