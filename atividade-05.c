#include <stdio.h>

int main()
{
    int nota;

    printf("Nota: ");
    scanf("%d", &nota);

if (nota > 10){
    printf("Nota Inválida!");
    } else if (nota >= 0 && nota <= 4){
    printf("Insuficente!");
    } else if (nota >= 5 && nota <=6){
    printf("Regular.");
    } else if (nota >= 7 && nota <= 8){
    printf("Bom!");
    } else if (nota >= 9 && nota <= 10){
    printf("Excelente!");
    }


    return 0;
}