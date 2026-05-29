
#include <stdio.h>

int main()
{
// Definir o tipo com typedef 
    typedef struct {
        char *nome;
        int mesa;
        float total;
        int pedido;
} cliente;

// Criar variáveis desse tipo
cliente c1;
cliente c2;
cliente fila [100];

// Atribuindo Valores

c1.nome = "Maria";
c1.total = 39.58;
c1.pedido = 56;
c1.mesa = 5;

c2.nome = "Emanuelle";
c2.total = 38.50;
c2.pedido = 59;
c2.mesa = 8;

// Lendo Valores

printf("Nome do Cliente: %s\n", c1.nome);
printf("Total: %.2f\n", c1.total);
printf("Pedido: %d\n", c1.pedido);
printf("Mesa: %d\n", c1.mesa);

printf("\nNome do Cliente: %s\n", c2.nome);
printf("Total: %.2f\n", c2.total);
printf("Pedido: %d\n", c2.pedido);
printf("Mesa: %d\n", c2.mesa);

    return 0;
}