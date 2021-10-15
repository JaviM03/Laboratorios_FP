/*Crear un programa que sume los valores de la diagonal de izquierda a derecha de un arreglo 5x5.*/
#include <stdio.h>
#define MAX 5

int main(int argc, char const *argv[])
{
    int filas=5,col=5,suma;
    int matriz[5][5]={
        {1, 2, 3, 4,5},
        {6, 7, 8, 9,10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19,20},
        {21, 22, 23, 24,25}
    };




     printf("\n\n\t\tMatriz ");/*RUTINA PARA IMPRIMIR*/
  printf("\n\n");
  for(int i = 0;i < col;i++){
      printf("\n\t\t");
      for(int j = 0;j < filas;j++){
          printf("  %2d  ", matriz[i][j]);
          
          }
  }


  for (int i = 0; i < filas;)
  {
      for (int j = 0; j < col;j++)
      {
          suma=matriz[i][j]+suma;
          i++;
      }
      
  } printf("\n La suma de la diagonal es : %d \n",suma);
  
    return 0;
}
