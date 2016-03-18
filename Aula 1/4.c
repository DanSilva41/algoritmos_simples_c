#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    system("color f0");
    float num1,resultado;
    printf("Digite o valor de X para obter o valor de Y: ");
    scanf("%f",&num1);
    resultado=sqrt(num1+1)/pow(num1,3);
    printf("\nO valor de Y %c %.10f\n\n\n",130,resultado);
    system("pause");
    return 0;
}
