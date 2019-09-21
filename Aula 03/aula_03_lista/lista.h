#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct{
    int posicaoatual;
    int tamanho;
    int *dados; // permite listas com tamanhos diferentes
} Lista;

void criarLista(Lista *l, int tamanho);

bool vazia(Lista *l);

int numeroElementos(Lista *l);

bool insere(Lista *l, int elemento);

bool removeUltimo(Lista *l, int *elemento);

bool retornarElemento(Lista *l, int posicao, int *elemento);

bool retornarPosicaoElemento(Lista *l, int posicao, int *elemento);

bool inserePorPosicao(Lista *l, int posicao, int valor);

bool removePorPosicao(Lista *l, int posicao, int *valor);

void imprimirLista(Lista *l);

bool moverListaParaLista(Lista *listaOrigem, Lista *listaDestino);

void limparLista(Lista *l);

#endif // LISTA_H_INCLUDED
