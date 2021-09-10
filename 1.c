//Realizar un programa que calcule el área de un círculo con radio 5.6 y el volúmen de una esfera con el mismo valor del radio
#include <stdio.h>
#include <math.h>
int main()
{
    //Area= Pi*r**2
    //Volumen 4/3 Pi r**3
    int r,area,volumen;
    r=5.6;
    area=M_PI*pow(r,2);
    volumen=(4*M_PI*pow(r,3))/3;


    return 0;
}