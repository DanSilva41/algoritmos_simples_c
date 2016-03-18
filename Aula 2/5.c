#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[5],b[5],c[10],cont;
    for (cont=0;cont<5;cont++)
    {
        printf("Digite um valor para A[%d]: ",cont);
        scanf("%d",&a[cont]);
    }
    for (cont=0;cont<5;cont++)
    {
        printf("Digite um valor para B[%d]: ",cont);
        scanf("%d",&b[cont]);
    }
    for (cont=0;cont<10;cont++)
    {
        if (cont<5)
            c[cont]=a[cont];
        else
            c[cont]=b[cont-5];
    }
    printf("\n\n");
    for (cont=0;cont<10;cont++)
        printf("Valores em C[%d] - %d\n",cont,c[cont]);
    printf("\n\n");
    system("pause");
    return 0;
}
