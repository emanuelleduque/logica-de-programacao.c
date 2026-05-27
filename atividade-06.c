#include <stdio.h>

int main()
{
    int ano;

    printf("Insira o Ano: ");
    scanf("%d", &ano);

if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
    printf("Ano Bissexto!");
} else if (ano % 100 == 0){
    printf("Ano Centenário!");
} else {
    printf("Não é Ano Bissexto");
}














    return 0;
}