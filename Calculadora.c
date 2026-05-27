#include <stdio.h>

int main()
{
    
float a, b, resultado;
int opcao;

printf("Primeiro Número: ");
scanf("%f", &a);

printf("Segundo Número: ");
scanf("%f", &b);

printf("\n--Calculadora--\n 1. Soma\n 2. Subtração\n 3. Multiplicação\n 4. Divisão\n Escolha uma opção: ");
scanf("%d", &opcao);

if (opcao == 1){
    resultado = a + b;
} else if (opcao == 2){
    resultado = a - b;
} else if (opcao == 3){
    resultado = a * b;
} else {
    resultado = a / b;
}

printf("Resultado: %f", resultado);




return 0;
}
