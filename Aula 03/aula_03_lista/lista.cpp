#include "lista.h"

using namespace std;

void criarLista(Lista *l, int tamanho) {
    l->dados = (int *) malloc(tamanho*sizeof(int));
    l->tamanho = tamanho;
    l->posicaoatual = 0;
}

bool vazia(Lista *l) {
    if ( 0 == l->posicaoatual)
        return true;

    return false;
}

bool cheia(Lista *l) {
    if ( l->tamanho == l->posicaoatual)
        return true;

    return false;
}

int numeroElementos(Lista *l) {
    return l->posicaoatual;
}

bool insere(Lista *l, int elemento){
    if(!cheia(l)){
        l->dados[l->posicaoatual++] = elemento;
        return true;
    }
    return false;
}

bool removeUltimo(Lista *l, int *elemento) {
    if(!cheia(l)){
        *elemento = l->dados[l->posicaoatual-1];
        l->posicaoatual--;
        return true;
    }

    return false;
}

bool retornarElemento(Lista *l, int posicao, int *elemento) {
    if( l->tamanho-- == posicao)
        return false;

    *elemento = l->dados[posicao];
    return true;
}

bool retornarPosicaoElemento(Lista *l, int elemento, int *posicao) {
    if(vazia(l))
        return false;

    for(int i=0;i<l->posicaoatual;i++)
    {
        if(l->dados[i] == elemento)
        {
            *posicao = i;
            return true;
        }
    }

    return false;
}

bool inserePorPosicao(Lista *l, int posicao, int valor) {
    if(cheia(l) || posicao<0)
        return false;

    if(vazia(l))
        return insere(l, valor);

    if(posicao >= l->posicaoatual)
        return insere(l, valor);

    for(int i = l->posicaoatual; i!=posicao; i--)
            l->dados[i] = l->dados[i-1];
    l->dados[posicao] = valor;

    l->posicaoatual++;

    return true;
}

bool removePorPosicao(Lista *l, int posicao, int *valor) {
    if(vazia(l) || posicao < 0 || posicao >= l->posicaoatual)
        return false;

    if(retornarElemento(l, posicao, valor))
    {
        for(int i = posicao; i < l->posicaoatual; i++)
            l->dados[i] = l->dados[i+1];

        l->posicaoatual--;

        return true;
    }
    return false;
}

void imprimirLista(Lista *l){
    if(l->posicaoatual > 0)
        for(int i = 0; i < l->posicaoatual; i++)
            cout << "lista[" << i << "] = " << l->dados[i] << endl;
    else
        cout << "A lista está vaiza" << endl;
}

bool moverListaParaLista(Lista *listaOrigem, Lista *listaDestino) {
    if (listaDestino->tamanho < listaOrigem->tamanho || listaOrigem->posicaoatual == 0) {
            cout << "Lista de destino tem tamanho menor que a lista de origem ou a lista de origem está vazia. Verifique!" << endl;
            return false;
    }

    for(int i = 0; i < listaOrigem->posicaoatual; i++) {
        //cout << "Dado copiado: " << listaOrigem->dados[i] << endl;
        insere(listaDestino,listaOrigem->dados[i]);
    }

    return true;
}

void limparLista(Lista *l) {
    l->posicaoatual = 0;
    free(l->dados);
}
