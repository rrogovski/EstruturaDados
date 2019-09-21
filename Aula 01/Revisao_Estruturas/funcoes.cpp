#include "funcoes.h"

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int maior(int a , int b){
    if(a>b)
        return a;
    return b;
}
