#ifndef FICHAS_H
#define FICHAS_H

#include <vector>
#include "Jugadores.h"

class Fichas {
public:
    std::vector<int> coloresElegidos;
    int colorElegido;
    std::vector<bool> disponibilidadColores{true, true, true, true};
    bool validez;

    void elegirColores(Jugadores &j);
};

#endif
