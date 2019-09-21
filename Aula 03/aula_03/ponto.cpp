#include "ponto.h"

void setPonto(Ponto *p, int x, int y){
    p->x=x;p->y=y;
};

float distanciaPonto(Ponto p1, Ponto p2){
    float distancia = sqrt( pow(p2.x -p1.x, 2) + pow(p2.y -p2.y, 2));
    return distancia;
};
