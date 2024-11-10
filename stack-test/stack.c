#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int dado;
    struct lista *prox;
}celula;

void imprimir();
void push(int);
void pop();

celula *top = NULL;

int main()
{
    int n, opcao;
    do
    {
        printf("\n\nStack Menu\n1. Empilhar \n2. Desempilhar\n3. Imprimir\n0. Exit");
        printf("\nEscolha uma opção 0-3? : ");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1: 
            printf("\nEntre com um valor para ser empilhado: ");
            scanf("%d", &n);
            push(n);
            break;
            case 2:
            pop();
            break;
            case 3:
            imprimir();
            break;
        }
    }while(opcao != 0);
}

void push(int item)
{
    printf("\n===============================");
    printf("\n===========EMPILHADO===========");
    celula *novo = malloc(sizeof(celula));
    novo->dado = item;
    novo->prox = top;
    top = novo;
    printf("\nValor %d empilhado", novo->dado);
    printf("\n===============================");
}

void pop()
{
    printf("\n===============================");
    printf("\n=========DESEMPILHANDO=========");
    if(top == NULL)
    {
        printf("\n\nApilha esta vazia ");

    }
    else
    {
        celula *temp;
        temp = top;
        top = top->prox;
        printf("\n\n%d desempilhado", temp->dado);
        free(temp);
    }
    printf("\n==============================");
}

void imprimir()
{
    celula *temp;
    temp = top;
    printf("\n==============================");
    printf("\n=======IMPRIMINDO PILHA=======");
    while(temp != NULL){
        printf("\n%d", temp->dado);
        temp = temp->prox;
    }
    printf("\n==============================");
}