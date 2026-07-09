#include <stdio.h>
#define MAX 100

typedef struct {    
    int dados[MAX]; // os elementos
    int topo;       // indice do topo
} pilha;            // -1 = vazia

void inicializar(pilha *p) {
    p->topo = -1;
}

int estaVazia(pilha *p) {
    return p->topo == -1;
}

int estaCheia(pilha *p){
    return p->topo == MAX - 1;
}

void push(pilha *p, int valor){
    if (estaCheia(p)) return;
    p->dados[++p->topo] = valor;
}

int pop(pilha *p){
    if (estaVazia(p)) return -1;
    return p->dados[p->topo];
}

// Uso: 

int main()
{
    int opcao = 1;
    pilha lixeira;
    pilha historico; 
    int valor;

    inicializar(&historico);
    inicializar(&lixeira);

        while(opcao != 0){
            printf("----Menu---\n");
            printf("1. Executar Nova Ação\n");
            printf("2. Desfazer\n");
            printf("3. Refazer\n");
            printf("4. Ver estado das pilhas\n");
            printf("0. Sair\n");

            printf("Digite sua opção: ");
            scanf("%d", &opcao);


            if(opcao ==1){
                printf("Executar Nova Ação\n");
                scanf("%d", &valor);
                push(&historico, valor);
            }

            else if(opcao == 2){
            valor = pop(&historico);
            push(&lixeira, valor);
            
            }

            else if(opcao == 3){
            valor = pop(&lixeira);
            push(&historico, valor);

            }

            else if(opcao == 4){
            printf("Ver Estado das Pilhas");
            }

            else if(opcao == 0){
            printf("Saindo...");}

            
        }

return 0;
}

