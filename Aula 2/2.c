/*   LOGICA RETIRADA DA INTERNET


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int vetor[10],cont,maior,menor;
    srand(time(NULL));

    for (cont=0;cont<10;cont++)
    {
        vetor[cont] = rand()%100;
        printf("%02d. %02d\n",cont+1,vetor[cont]);
    }
    printf("\n\n\n\n\n");

    maior = vetor[0];
    menor = vetor[0];

    for (cont=0;cont<10;cont++)
    {
        if (vetor[cont] > maior)
            maior = vetor[cont];
        else if (vetor[cont] < menor)
            menor = vetor[cont];
    }
    printf("maior: %d \nmenor: %d",maior,menor);
    printf("\n\n\n\n\n");
    system("pause");
    return 0;
}
