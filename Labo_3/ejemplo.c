#include <stdio.h>
#include <stdbool.h>
//gcc main.c -o main &&./main
int main()
{
    int x;
    int a=0,b=1,c=a+b;
    printf("Ingrese la cantidad de numeros a calcular: ");
    scanf("%d", &x);

    for(int i=0;i<x;i++){
      printf("%d\n",a);
        printf("%d\n",b);
        
        printf("La serie de fibonacci para x= %d es: %d\n",x,c);
        
        
        a=b;
        b=c;
        c=a+b;
        
        

    }

 
    
 }
