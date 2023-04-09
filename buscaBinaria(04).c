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

int buscaBinaria(LISTA *l, TIPOCHAVE ch)
{
    int esq, dir, meio;
    esq = 0;
    dir = l->nroElem - 1;
    while (esq <= dir)
    {
        meio = (esq + dir) / 2;
        if (l->A[meio].chave = ch)
        {
            return meio;
        }
        else
        {
            if (l->A[meio < ch])
            {
                esq = meio + 1;
            }
            else
            {
                dir = meio - 1;
            }
        }
    }
    return -1;
}
bool inserirElemListaOrd(LISTA *l, REGISTRO reg)
{
    if (l->nroElem >= MAX)
        return false;
    int pos = l->nroElem;
    while (pos > 0 && l->A[pos - 1].chave > reg.chave)
    {
        l->A[pos] = l->A[pos - 1];
        pos--;
    }
    l->A[pos] = reg;
    l->nroElem++;
}

bool excluirElemLista(TIPOCHAVE ch, LISTA *l)
{
    int pos, j;
    pos = buscaBinaria(l, ch);
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