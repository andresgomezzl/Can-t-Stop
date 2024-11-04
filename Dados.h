#ifndef DADOS_H
#define DADOS_H

#include <cstdlib>
#include <ctime>

class Dados {
public:
    int A, B, C, D;
    int sumaTotalDados;
    int vectorDados[4];
    int eleccionDado1, eleccionDado2;
    int pareja1, pareja2;

    Dados();
    void mostrarDados();
    void elegirParejas();
};

#endif
