#include <stdio.h>
#include <stdlib.h>
int main () {
    int vetor[10],cont;
    for (cont=0;cont<10;cont++)
    {
        vetor[cont]=cont*2;
        printf("%d - %d\n",cont,vetor[cont]);
    }
    printf("\n\n\n");
    system("pause");
    return 0;
}
