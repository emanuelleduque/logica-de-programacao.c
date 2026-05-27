#include <stdio.h>
#define PI 3.14159

int main(){

    int opcao;
    float resultado, base = 0, altura = 0, raio = 0;

printf("\nQual o cálculo?");
printf("\nEscolha uma das oções abaixo:");
printf("\n1 - Círculo, 2 - Retângulo, 3 - Triângulo: ");
scanf("%d", &opcao);

if(opcao == 1){
    printf("Qual o valor do raio?");
    scanf("%f", &raio);

    resultado = PI * raio * raio;
    printf("A área é de: %.2f", resultado);

}else if(opcao == 2){
    printf("Valor da base: ");
    scanf("%f", &base);
    printf("Valor da altura: ");
    scanf("%f", &altura);

    resultado = (base * altura);
    printf("A área é de: %.2f", resultado);

}else if(opcao == 3){

    printf("Valor da base: ");
    scanf("%f", &base);
    printf("Valor da altura: ");
    scanf("%f", &altura);

    resultado =  (base * altura) / 2;

    printf("A área é de: %.2f", resultado);

}



    return 0;
}