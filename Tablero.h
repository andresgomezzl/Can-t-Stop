#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <vector>
#include "colors.h"

class Tablero {
public:
    bool moverFicha = false, colocarFicha = false, tiroDados = false;
    std::vector<std::vector<std::vector<int>>> board = {
        std::vector<std::vector<int>>(3),
        std::vector<std::vector<int>>(5),
        std::vector<std::vector<int>>(7),
        std::vector<std::vector<int>>(9),
        std::vector<std::vector<int>>(11),
        std::vector<std::vector<int>>(13),
        std::vector<std::vector<int>>(11),
        std::vector<std::vector<int>>(9),
        std::vector<std::vector<int>>(7),
        std::vector<std::vector<int>>(5),
        std::vector<std::vector<int>>(3)
    };

    void definirTablero();
    void imprimirTablero();
    bool asignarFicha(int fila, int columna, int jugador);
};

#endif
