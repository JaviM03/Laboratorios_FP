#include <stdio.h>
#include <stdbool.h>
//gcc main.c -o main &&./main
int main()
{

    //condicional IF
    /* int numero = 5;
    if(numero >0){
        printf("El numero es positivo \n");
        printf("Su numero multuplicado por dos es: %d\n" , numero*2 );

    }

    if(numero==5)
        printf("El numero es 5\n");*/

    //ELSE
    /*
    int numero= -10;
    if(numero >0){
        printf("El numero es positivo \n");
        printf("Su numero multuplicado por dos es: %d\n" , numero*2 );
    }
    else{
        printf("El numero es negativo \n" );
    }
     if(numero==10)
        printf("El numero es 10\n");
    else
    printf("El numero no es 10\n");*/

    //Operador AND & OR
    /* bool booleano1 =true;
    bool booleano2 =false;
    bool booleano3 =true;
    bool booleano4 =false;

    if(booleano1 && booleano2){
        printf("Este if no se va a ejecutar\n");
    }
    if(booleano1 && booleano3){
        printf("Este if si se va a ejectuar\n");
    }

        if(booleano1 || booleano2){
        printf("Este if no se va a ejecutar\n");
    }
    if(booleano1 || booleano3){
        printf("Este if si se va a ejectuar\n");
    }
    if (booleano2 ||booleano4){
        printf("Este if no se va a ejectuar\n");
    }*/

    //WHILE
    /* int numero =1;
    printf("Contando del 1 al 10... con while\n");

    while(numero<11){
        printf("%d\n",numero);
        numero++;// numero++ == numero=numero+1

    }

    //DO WHILE
  /*  int numero2 =1;
     printf("Contando del 1 al 10... con do while\n");
     do{
         printf("%d\n",numero2);
         numero2++;
     }
     while(numero2<11);*/

    //FOR
    int n=10;

    printf("\nContando del 1 al 10...\n");

    for( int i =0; i<n;i++){
        printf("%i\n",i+1);
    }
printf("Contando del 10 al 1...\n");
        for( int i =10; i>0;i--){
        printf("%i\n",i);
    }

    return 0;
}