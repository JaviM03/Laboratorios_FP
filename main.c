#include <stdio.h>
#include <math.h>
//gcc main.c -o main &&./main
int main()
{
    int num;

    scanf("%d", &num);
    printf("%d\n", num);

    // Operaciones
    int n1, n2, suma,resta,multiplicacion,division,modulo;
   printf("\n Introduzca el primer numero (entero): ");
   scanf("%d", &n1);
   printf("\n Introduzca el segundo numero (entero): ");
   scanf("%d", &n2);
   suma= n1 +n2;
   printf("\n La suma es: %d",suma);
   resta=n1-n2;
   printf("\n La resta es: %d",resta);
   multiplicacion= n1*n2;
      printf("\n La multiplicacion es: %d",multiplicacion);
    division=n1/n2;
       printf("\n La division es: %d",division);
    modulo=n1%n2;
       printf("\n El modulo es: %d",modulo);

//Potencia
  /*  float base, potencia, resultado;
    printf("\n Introduzca el numero base: ");
    scanf("%f", &base);
    printf("\n Introduzca el numero a potenciar: ");
    scanf("%f", &potencia);
    resultado = pow(base, potencia);
    printf("\n la Potencia es: %f", resultado);*/

//Raiz cuadrada
/*
float base,resultado;
printf(" \n Introduzca el numero a sacar raiz");
scanf("%f", &base);

resultado =sqrt(base);
printf("\n La raiz cuadrada es: %f", resultado);*/

    return 0;
}