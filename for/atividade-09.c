#include <stdio.h>

int main()
{
    int numero;
    float soma = 0;
    float media;

printf("Digite um número inteiro: ");
scanf("%d", &numero);

if(numero > 0){
    for (int i = 1; i<=numero; i++){
    soma += i;
}
    media = soma / numero;
    printf("Soma de 1 até %d: %f\n", numero, soma);
    printf("Media dos Valores: %.2f\n", media);
} else {
    printf("O número deve ser positivo!\n");
}


    return 0;
}