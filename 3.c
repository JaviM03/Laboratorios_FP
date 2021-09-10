#include <stdio.h>
int main()
{
    int km,lt;
    printf("\n Ingrese la cantidad de kilometros recorridos: ");
    scanf("%d",&km);
    printf("\n Ingrese la cantidad de combustible consumida: ");
    scanf("%d",&lt);
    printf("\n Se han consumido: %d litos en %d kilometros \n",lt,km );

    return 0;

}