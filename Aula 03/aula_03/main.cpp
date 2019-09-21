#include <iostream>
#include <iomanip>

#include "ponto.h"

using namespace std;

int main()
{
    Ponto p1, p2;

    cout << "Informe o valor x para o ponto 1:" << endl;
    cin >> p1.x;

    cout << "Informe o valor y para o ponto 1:" << endl;
    cin >> p1.y;

    setPonto(&p1, p1.x, p1.y);

    cout << "Informe o valor x para o ponto 2:" << endl;
    cin >> p2.x;

    cout << "Informe o valor y para o ponto 2:" << endl;
    cin >> p2.y;

    setPonto(&p2, p2.x, p2.y);

    float distancia = distanciaPonto(p1,p2);
    std::cout << std::setprecision(2);
    cout << "A distancia dos pontos é: " << distancia  << endl;

    return 0;
}
