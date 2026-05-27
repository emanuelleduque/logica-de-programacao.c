#include <stdio.h>

int main()
{
    int numero;
    float resultado;
    int opcao;
    
while(opcao != 3){
    printf("1. Calcule o Dobro \n2. Calcule o Quadrado \n3. Sair");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    
    printf("\nDigite um número: ");
    scanf("%d", &numero);

    if (opcao == 1){
    resultado = numero * 2;
    } else if (opcao == 2){
    resultado = numero * numero;
    } else (opcao == 3);{
    
    }
    

    

    printf("\nResultado: %f", resultado);
    return 0;
}
}
    
    
