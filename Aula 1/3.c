#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    system("color f0");
    float num1,seno,cosseno,radiano;
    printf("\tDigite o numero que deseja obter o seno e cosseno: ");
    scanf("%f",&num1);
    radiano=(M_PI*num1)/180;
    seno=sin(radiano);
    cosseno=cos(radiano);
    printf("\nSeno: %.4f\nCosseno: %.4f\n\n",seno,cosseno);
    system("pause");
    return 0;
}
