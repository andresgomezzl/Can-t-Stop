#ifndef DADOS_H
#define DADOS_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dados {
public:
    int A, B, C, D;
    int sumaTotalDados;
    int vectorDados[4];
    int eleccionDado1, eleccionDado2;
    int pareja1, pareja2;
    int terceraPareja;

    Dados();
    void lanzarDados();
    void elegirPrimerPar();
    void elegirTercerPar();
};

#endif
