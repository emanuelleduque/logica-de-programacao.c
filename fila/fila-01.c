#include <stdio.h>
#define MAX 10

typedef struct {
    int dados [MAX];
    int inicio;
    int fim;
    int tamanho;
} fila;

void inicializar(fila *f) {
    f->inicio = f->fim = f->tamanho = 0;
}
int estaVazia(fila *f) {
    return f->tamanho == 0;
}
int estaCheia(fila *f) {
    return f->tamanho == MAX;
}
void enqueue(fila *f, int valor) {
    if (estaCheia(f)) return;
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % MAX;
    f->tamanho++;
}
int dequeue(fila *f) {
    if (estaVazia(f)) return -1;
    int v = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->tamanho--;
    return v;
}
int front(fila *f){
    if (estaVazia(f)) return -1;
    return f->dados[f->inicio];
}

int main()
{
fila f; 
inicializar (&f);
enqueue(&f, 101); 
enqueue(&f, 102); 
enqueue(&f, 103); 
enqueue(&f, 104);
printf("%d\n", dequeue(&f));
printf("%d\n", dequeue(&f));
enqueue(&f, 105); 
enqueue(&f, 106);

while (!estaVazia(&f)){
    printf("%d\n", dequeue(&f));

   
}
return 0;
}