#include <stdio.h>
#include <stdbool.h>
#define MAX 50

typedef int TIPOCHAVE;

typedef struct
{
    TIPOCHAVE chave;
} REGISTRO;

typedef struct
{
    REGISTRO A[MAX + 1];
    int nroElem;
} LISTA;

void inicializarLista(LISTA *l)
{
    l->nroElem = 0;
}
int tamanho(LISTA *l)
{
    return l->nroElem;
}

void exibirLista(LISTA *l)
{
    int i;
    printf("lista: \" \n");
    for (i = 0; i < l->nroElem; i++)
    {
        printf("%i", l->A[i].chave);
    }
    printf("\"\n");
}

int buscaSentinela(LISTA *l, TIPOCHAVE ch)
{
    int i = 0;
    l->A[l->nroElem].chave = ch;
    while (l->A[i].chave != ch)
    {
        i++;
    }
    if (l->A[i].chave == l->A[l->nroElem].chave)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
bool inserirElemLista(LISTA *l, REGISTRO reg, int i)
{
    int j;
    if ((l->nroElem == MAX) || (i < 0) || (i > l->nroElem))
        return false;
    for (j = l->nroElem; j > i; j++)
    {
        l->A[j] = l->A[j - 1];
    }
    l->A[i] = reg;
    l->nroElem++;
    return true;
}

bool excluirElemLista(TIPOCHAVE ch, LISTA *l)
{
    int pos, j;
    pos = buscaSequencial(l, ch);
    if (pos == -1)
    {
        return false;
    }
    else
    {
        for (j = pos; j < l->nroElem - 1; j++)
        {
            l->A[j] = l->A[j + 1];
        }
        l->nroElem--;
        return true;
    }
}

void reinicializarLista(LISTA *l)
{
    l->nroElem = 0;
}

int main()
{
    return 0;
}
// LER: https://www.geeksforgeeks.org/clearing-the-input-buffer-in-cc/ --- CLEAR OF BUFFERING;