#include <stdio.h>
#include <stdlib.h>
int main () {
    char charCPF[11];
    int intCPF[11],cont,cont1,soma[2],dv[2];
    printf("Digite um CPF: ");
    for (cont=0;cont<11;cont++)
        scanf("%c",&charCPF[cont]);
    for (cont=0;cont<11;cont++)
        intCPF[cont]=charCPF[cont]-48;
    // DV 1
    for (cont=0,cont1=10;cont<9;cont++,cont1--)
        soma[0]=soma[0]+intCPF[cont]*cont1;
    if (soma[0]%11 < 2)
        dv[0]=0;
    else
        dv[0]=11-(soma[0]%11);
    // DV 2
    for (cont=0,cont1=11;cont<10;cont++,cont1--)
    {
        if (cont!=9)
            soma[1]=soma[1]+intCPF[cont]*cont1;
        if (cont==9)
            soma[1]=soma[1]+dv[0]*cont1;
    }
    if (soma[1]%11 < 2)
        dv[1]=0;
    else
        dv[1]=11-(soma[1]%11);
    if (dv[0] == intCPF[9] && dv[1]==intCPF[10])
        printf("\nCPF VALIDO!");
    else
        printf("\nCPF INVALIDO!");
    printf("\n\n\n\n");
    system("pause");
    return 0;
}
