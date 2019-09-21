#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define TAMANHO 20
int lista[TAMANHO];
int posicaoatual=0;

bool vazia(){
    return posicaoatual==0;
}

bool cheia(){
    return posicaoatual==TAMANHO;
}

int tamanho(){
    return posicaoatual;
}

bool insere(int n){
    if(!cheia()){
        lista[posicaoatual++]=n;
        return true;
    }
    return false;
}

bool removeUltimo(int *elemento)
{
    if(!vazia())
    {
        *elemento=lista[posicaoatual-1];
        posicaoatual--;
        return true;
    }
    return false;
}


int getelemento(int posicao, int *elemento)
{
    if(!vazia() && posicao<posicaoatual)
    {
        *elemento=lista[posicao];
        return 1;
    }
    return 0;
}

bool pesquisar(int valor, int *posicao)
{
    if(vazia())
        return false;
    for(int i=0;i<posicaoatual;i++)
    {
        if(lista[i]==valor)
        {
            *posicao=i;
            return true;
        }
    }
    return false;
}

bool insereMeio(int posicao, int valor)
{
    if(cheia())
        return false;
    if(posicao<0)
        return false;
    if(vazia())
        return insere(valor);
    if(posicao>=posicaoatual)
        return insere(valor);
    for(int i=posicaoatual;i!=posicao;i--)
            lista[i]=lista[i-1];
    lista[posicao]=valor;
    posicaoatual++;
    return true;
}


bool remove(int *n, int posicao){
    if(!vazia() && posicao<posicaoatual){
        *n = lista[posicao];
        for(int i=posicao; i<posicaoatual-1; i++)
            lista[i]=lista[i+1];
        posicaoatual--;
        return true;
    }
    return false;
}

bool removeMeio(int posicao, int*valor)
{
    if(vazia() || posicao<0 || posicao>=posicaoatual)
        return false;
    if(getelemento(posicao,valor))
    {
        for(int i=posicao;i<posicaoatual;i++)
            lista[i]=lista[i+1];
        posicaoatual--;
        return true;
    }
    return false;
}

void mostra(){
    if(posicaoatual>0)
        for(int i=0;i<posicaoatual;i++)
            cout << "lista[" << i << "] = " << lista[i] << endl;
    else
        cout << "lista vazio\n";
}

int main(){
    srand (time(NULL));
    int numero;
    for(int i=0; i<TAMANHO+2; i++){
        cout << i << " Cheia? " << cheia() << endl;
        if(insere(rand()%100))
            cout << "Inserido com sucesso" << endl;
        else
            cout << "Erro para inserir" << endl;
    }
    mostra();
    if(remove(&numero, 4))
         cout << "O valor (posicao 4) removido foi o " << numero << endl;
    if(removeUltimo(&numero))
         cout << "O valor (ultimo) removido foi o " << numero << endl;
    if(removeMeio(8,&numero))
         cout << "O valor (posicao 8) removido foi o " << numero << endl;
    mostra();

    return 0;
}

