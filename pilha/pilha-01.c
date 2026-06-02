#include <stdio.h>
#define MAX 10

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
pilha p;
inicializar(&p);
push(&p, 10); push(&p, 20); push(&p, 45);
printf("%d\n", pop(&p)); // 20

return 0;
}

