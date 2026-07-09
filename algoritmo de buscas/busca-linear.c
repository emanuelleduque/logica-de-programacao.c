#include <stdio.h>

// retorna o índice ou -1 se não encontrar
int buscaLinear(int arr[], int tam, int alvo)  {

    for (int i = 0; i < tam; i++) {

        if (arr[i] == alvo)
        return i; // encontrado!
    }

    return -1;       // não existe

}

int main(){

    int pedidos[] = {5,3,8,1,9,2};
    int alvo = 9;
    int tam = 6;

    int pos = buscaLinear(
        pedidos, tam, alvo
    );

    printf("Pedido #9: %d", pos);

        if(pos == -1){
            printf("Pedido não encontrado!");
        } else{
            printf("")
        }

}