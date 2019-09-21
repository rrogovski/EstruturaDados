#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

#include <math.h>>

typedef struct {
    int x;
    int y;
} Ponto;

///Cria um ponto
void setPonto(Ponto *p, int x, int y);

///Calcula a distância entre dois pontos
float distanciaPonto(Ponto p1, Ponto p2);

#endif // PONTO_H_INCLUDED
