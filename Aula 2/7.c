#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
    int y,cont;
    char x[300];
    printf("Digite um nome: ");
    scanf("%[^\n]s",&x[0]); //permite que guarde tudo o que foi digitado e nao leia ate o primeiro "espaço"
    setbuf(stdin, NULL); //limpa o buffer para evitar complicações do codigo anterior, como pular o proximo scanf
    y=strlen(x);
    printf("Quantidade de caracteres: %d\n\n",y);
    for (cont=0;cont<=y;cont++)
        if (x[cont]=='a'||x[cont]=='e'||x[cont]=='i'||x[cont]=='o'||x[cont]=='u')
            printf("%c",x[cont]);
        else if (x[cont]=='A'||x[cont]=='E'||x[cont]=='I'||x[cont]=='O'||x[cont]=='U')
            printf("%c",x[cont]);
    printf("\n\n\n");
    system("pause");
    return 0;
}
