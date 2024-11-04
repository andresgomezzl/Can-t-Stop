#ifndef JUGADORES_H
#define JUGADORES_H

#include <iostream>
#include <vector>
#include <string>
#include "Tablero.h"
#include "Dados.h"

class Jugadores {
public:
    int cantidadJugadores;
    int posicionElegida;
    std::string nombre;
    std::vector<std::string> jugador;
    std::vector<int> identificador;

    void bienvenida();
    void ponerFicha(Tablero &t);
};

#endif
