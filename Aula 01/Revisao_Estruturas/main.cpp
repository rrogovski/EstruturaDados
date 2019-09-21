//Para C
#include <stdio.h>
#include <stdlib.h>

//Para c++
#include <iostream>
#include <iomanip> // formatação de saída de dados
using namespace std;

void entrada_c(){
    printf("Entrada de dados em C\n");
    int a;
    float b;
    char c;
    char nome[20];
    char nomecompleto[50];

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite um numero real: ");
    scanf("%f", &b);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf("%c", &c);
    fflush(stdin);
    printf("Digite seu primeiro nome: ");
    scanf("%s", &nome);
    fflush(stdin);
    printf("Digite seu nome completo: ");
    gets(nomecompleto);

    printf("Os dados digitados foram:\n");
    printf("%d\n%f\n%c\n%s\n%s\n",a,b,c,nome,nomecompleto);
}

void entrada_cpp(){
    cout << "Entrada de dados em C++" << endl;
    int a;
    float b;
    char c;
    char nome[20];
    char nomecompleto[50];
    string nomestring;

    cout << "Digite um numero inteiro: "<< endl;
    cin >> a;
    cout << "Digite um numero real: "<< endl;
    cin >> b;
    cout << "Digite um caractere: "<< endl;
    cin >> c;
    cout <<"Digite seu primeiro nome: " << endl;
    cin >> nome;
    cin.ignore();
    cout << "Digite seu nome completo: " << endl;
    cin.getline(nomecompleto,50);
    cout << "Digite outro nome: " << endl;
    getline (cin,nomestring);

    cout << "Os dados digitados foram:\n";
    cout << a << endl;
    cout << fixed << setprecision(2) << b << endl;
    cout << c << endl << nome << endl << nomecompleto << endl << nomestring << endl;
}

void teste_if(){
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if(num%2)
        cout << "Numero impar" << endl;
    else
        cout << "Numero par" << endl;
}

void teste_for(){
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if(num>0)
        for(int i=0; i<=num; i++)
            cout << i << endl;
    else
        for(int i=num; i<=0; i++)
            cout << i << endl;
}

void teste_while(){
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if(num>0){
        int i=0;
        while(i<=num){
            cout << i << endl;
            i++;
        }
    } else {
        int i=num;
        while(i<=0){
            cout << i << endl;
            i++;
        }
    }
}

void teste_do(){
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if(num>0){
        int i=0;
        do{
            cout << i << endl;
            i++;
        }while(i<=num);
    } else {
        int i=num;
        do{
            cout << i << endl;
            i++;
        }while(i<=0);
    }
}

void teste_vetor(){
    int valores[5];
    int indice;
    printf("Escreva 5 números inteiros: ");
    for (indice = 0; indice < 5; indice++)
        scanf("%d", &valores[indice] );
    printf("Valores em ordem reversa:\n");
    for (indice = 4; indice >= 0; indice--)
        printf("%d ", valores[indice]);
}

void teste_matriz(){
    int valores[2][3];
    int linhas=2, colunas=3;
    cout << "Digite numeros para a matriz" << endl;
    for(int i=0; i < linhas; i++){
        cout << "Linha " << i << endl;
        for(int j=0; j<colunas; j++){
            cout << "Coluna " << j << ": ";
            cin >> valores[i][j];
        }
    }
    cout << "Os valores digitados foram"<< endl;
    for(int i=0; i < linhas; i++){
        for(int j =0; j<colunas; j++){
            cout << valores[i][j] << "\t";
        }
        cout << endl;
    }
}

#include "funcoes.h"

int main(){
    cout << "O maior valor e "<< maior(10,20)<< endl;
    int x=23, y=15;
    cout << "No inicio:" << endl << "X=" << x << "   Y=" << y << endl;
    troca(&x, &y);
    cout << "Depois da troca:" << endl << "X=" << x << "   Y=" << y << endl;
}

