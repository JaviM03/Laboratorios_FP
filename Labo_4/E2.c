/*
Crear un programa que separe los números pares de los impares en distintos arreglos. 
Primero preguntar al usuario cuántos valores desea ingresar al programa. 
Al final del programa debe mostrar los arreglos de números pares e impares.
*/
#include <stdio.h>

int main(int argc, char const *argv[])

{
    int m=0,n=0,pares[m],impares[n],num,arr[num];
    printf("Ingrese la cantidad de numeros: \n");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("Ingrese el numero en la posicion [%d]: ",i+1);
        scanf("%d",&arr[i]);
  //  }

    }
    
    printf("Arreglo de pares: \n");
    for(int i=0;i<num;i++){
        if(arr[i]%2==0)
        printf("%d \n",arr[i]);
    }
     printf("Arreglo de impares: \n");
    for(int i=0;i<num;i++){
        if(arr[i]%2!=0)
        printf("%d \n",arr[i]);
    }
   



    return 0;
}
