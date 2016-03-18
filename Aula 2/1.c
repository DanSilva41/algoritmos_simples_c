#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int vetor[50],cont;
    srand(time(NULL));
    for (cont=0;cont<50;cont++)
    {
        vetor[cont] = rand()%100;
        printf("vetor[%d] - %02d\n",cont,vetor[cont]);
    }
    printf("\n\n\n\n\n");
    system("pause");
    return 0;
}
