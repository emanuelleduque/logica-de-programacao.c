#include <stdio.h>

int main()
{ 
    float lado1, lado2, lado3;

printf("Lado 1: ");
scanf("%f", &lado1);

printf("Lado 2: ");
scanf("%f", &lado2);

printf("Lado 3: ");
scanf("%f", &lado3);

if (lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){
    printf("Triângulo Válido!");
} else {
    printf("Triângulo Inválido!");
}

if (lado1==lado2 && lado2==lado3 && lado3==lado1){
    printf("\nTriângulo Equilátero");
} else if (lado1==lado2 || lado2==lado3 || lado3==lado1){
    printf("\nTriângulo Isósceles");
} else {
    printf("\nTriângulo Escaleno");
}

    return 0;
}
