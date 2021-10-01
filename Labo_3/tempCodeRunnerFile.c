#include <stdio.h>
//gcc main.c -o main &&./main
int main()
{
    //condicional IF
    int numero = 5;
    if(numero >0){
        printf("El numero es positivo \n");
        printf("Su numero multuplicado por dos es: %d\n" , numero*2 );

    }

    if(numero==5)
        printf("El numero es 5\n");

    return 0;
}