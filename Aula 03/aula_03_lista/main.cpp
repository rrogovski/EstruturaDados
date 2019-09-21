#include <iostream>
#include <locale.h>

#include "lista.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    Lista lista1;
    Lista lista2;
    Lista lista3;

    cout << "Exemplo de uso do lista.h!" << endl;

    criarLista(&lista1,20);
    criarLista(&lista2,40);
    criarLista(&lista2,lista1.tamanho + lista2.tamanho);

    for(int i = 0; i < lista1.tamanho; i++)
        insere(&lista1, i+1);

    //imprimirLista(&lista1);

    moverListaParaLista(&lista1, &lista2);

    cout << " \n\nValores da lista 2" << endl;
    imprimirLista(&lista2);

    limparLista(&lista1);

    cout << " \n\nValores da lista 1" << endl;
    imprimirLista(&lista1);

    cout << " \n\nInserindo 10 elementos na lista 1" << endl;

    for(int i = 0; i < 10; i++)
        insere(&lista1, i+1);

    imprimirLista(&lista1);


//    insere(&lista1,1);
//    insere(&lista1,2);
//    insere(&lista1,3);
//    insere(&lista1,4);
//
//    int valorRemovido = 0;
//    removeUltimo(&lista1,&valorRemovido);
//
//    int elemento1 = 0;
//    retornarElemento(&lista1,0,&elemento1);
//    cout << "O elemento da lista 1, é: " << elemento1 << endl;
//
//    int posicaoElemento = retornarPosicaoElemento(&lista1,3,&posicaoElemento) ? posicaoElemento : 0;
//
//    if(retornarPosicaoElemento(&lista1,3,&posicaoElemento))
//        cout << "A posição do elemento 3, é: " << posicaoElemento << endl;
//    else
//        cout << "A posição não encontrada para o elemento 4! " << endl;
//
//    cout << "Número de elementos da lista 1: " << numeroElementos(&lista1) << endl;
//    cout << "Número de elementos da lista 2: " << numeroElementos(&lista2) << endl;
//
//    inserePorPosicao(&lista1, 3, 5);


    return 0;
}
