#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
    int y,cont;
    char x[300];
    printf("Digite um nome: ");
    scanf("%s",&x[0]);
    y=strlen(x);
    printf("Quantidade de caracteres: %d\n\n",y);
    y--;
    for (cont=y;cont>=0;cont--)
    {
        printf("%c",x[cont]);
        printf("%d\n",cont);
    }
    printf("\n\n\n");
    system("pause");
    return 0;
}
