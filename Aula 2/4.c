#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main () {
    int vetor[10],cont;
    srand(time(NULL));
    for (cont=0;cont<10;cont++)
    {
        vetor[cont] = rand()%100;
        if (vetor[cont] % 2 == 0)
            printf("[%d] - %d\n",cont,vetor[cont]);
    }
    printf("\n\n\n");
    system("pause");
    return 0;
}
