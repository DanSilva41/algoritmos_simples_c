#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    system("color f0");
    float num1,resultado;
    printf("Digite o numero que deseja obter a raiz quadrada: ");
    scanf("%f",&num1);
    resultado=sqrt(num1);
    printf("\nResultado: %.4f\n\n\n",resultado);
    system("pause");
    return 0;
}
