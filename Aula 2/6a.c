#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[200];
    int tamanho_texto,tamanho_texto1,tamanho_texto2,j,i;
    printf("Digite a palavra, número o caracter para saber se é Palindromo\n");
    scanf("%s", &texto);
    tamanho_texto = strlen(texto);
    for (i=0;i>=tamanho_texto;i++)
        tamanho_texto1=tamanho_texto[i];
    for (j=0;i>=tamanho_texto;j--)
        tamanho_texto2=tamanho_texto[j];
    if (strcmp(tamanho_texto1,tamanho_texto2) == 0)
        printf("\nE um palindromo\n");
    else
        printf("\nNão e um palindromo\n");
    system("PAUSE");
    return 0;
}
