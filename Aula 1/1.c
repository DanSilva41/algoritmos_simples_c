#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    system("color f0");
    int num1,num2,resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero:  ");
    scanf("%d",&num2);
    resultado=pow(num1,num2);
    printf("\nResultado: %d\n\n\n",resultado);
    system("pause");
    return 0;
}
