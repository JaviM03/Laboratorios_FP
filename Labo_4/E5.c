/*Crear un programa que suma dos matrices 5x5. Al finalizar debe mostrar la nueva matriz con los datos sumados.
*/
#include <stdio.h>
#define MAX 5
int main(int argc, char const *argv[])
{   
  //MATRICES 5x5 con valores quemados
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

  // Suma de las matrices
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            suma[i][j]=matriz[i][j]+matrizB[i][j]; //A la matriz SUMA[][] en los valores de i y j se les suma los valores que se encuentran en esas posiciones de las otras dos matrices
        }
        
    }

//Imprimimos la matriz SUMA[][]
       printf("\n\n\t\tMatriz SUMADA");/*RUTINA PARA IMPRIMIR*/
  printf("\n\n             ------------------------------------------");//esta linea es para formato
  for(int i = 0;i < cols;i++){
      printf("\n\t\t");
      for(int j = 0;j < filas;j++){

          printf("|  %2d  ", suma[i][j]); //el '2' del %2d ayuda al formato
          
          
          }printf("| \n             ------------------------------------------");//esta linea es para formato
          
  } printf("\n");
    
    return 0;
}
