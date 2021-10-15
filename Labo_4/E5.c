/*Crear un programa que suma dos matrices 5x5. Al finalizar debe mostrar la nueva matriz con los datos sumados.
*/
#include <stdio.h>
#define MAX 5
int main(int argc, char const *argv[])
{   
    int suma[MAX][MAX],filas=5,cols=5;
      int matriz[5][5]={
        {1, 2, 3, 4,5},
        {6, 7, 8, 9,10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19,20},
        {21, 22, 23, 24,25}
    };
      int matrizB[5][5]={
        {1, 2, 3, 4,5},
        {6, 7, 8, 9,10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19,20},
        {21, 22, 23, 24,25}
    };


    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            suma[i][j]=matriz[i][j]+matrizB[i][j];
        }
        
    }

       printf("\n\n\t\tMatriz SUMADA");/*RUTINA PARA IMPRIMIR*/
  printf("\n\n             ------------------------------------------");
  for(int i = 0;i < cols;i++){
      printf("\n\t\t");
      for(int j = 0;j < filas;j++){

          printf("|  %2d  ", suma[i][j]);
          
          
          }printf("| \n             ------------------------------------------");
          
  } printf("\n");
    
    return 0;
}
