#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int vetor[10],cont,aux=0,aux1;
    srand(time(NULL));
    for (cont=0;cont<10;cont++)
    {
        vetor[cont] = rand()%100;
        printf("[%d] - %02d\n",cont,vetor[cont]);
        if (vetor[cont] > aux)
        {
            aux = vetor[cont];
            aux1 = cont;
        }
    }
    printf("\n\n\n\n\n");
    printf("Maior valor armazenado: vetor[%d] - %d",aux1,aux);
    printf("\n\n\n");
    system("pause");
    return 0;
}
