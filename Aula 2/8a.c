#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int intCPF[11],cont,cont1,soma,soma1;
    srand(time(NULL));
    printf("\t\t\t :: GERADOR DE CPF ::");
    do
    {
    soma=0,soma1=0;
    printf("\nCPF gerado: ");
    for (cont=0;cont<9;cont++)
        intCPF[cont]=rand()%10;
    // DV 1
    for (cont=0,cont1=10;cont<9;cont++,cont1--)
        soma=soma+intCPF[cont]*cont1;
    if (soma%11<2)
        intCPF[9]=0;
    else
        intCPF[9]=11-(soma%11);
    // DV 2
    for (cont=0,cont1=11;cont<10;cont++,cont1--)
        soma1=soma1+intCPF[cont]*cont1;
    if (soma1%11<2)
        intCPF[10]=0;
    else
        intCPF[10]=11-(soma1%11);
    for (cont=0;cont<11;cont++,cont1--)
        printf("%d",intCPF[cont]);
    printf("\n\n[1]Gerar outro CPF\n[2]Encerrar\n\nSelecione uma opcao: ");
    scanf("%d",&cont);
    }while(cont==1);
    printf("\n\n\n\n");
    system("pause");
    return 0;
}
