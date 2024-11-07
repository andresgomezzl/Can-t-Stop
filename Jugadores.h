#ifndef JUGADORES_H
#define JUGADORES_H
#include <iostream>
#include <vector>
#include <string>
#include "Tablero.h"
#include "Dados.h"

using namespace std;

class Jugadores {
public:
    int cantidadJugadores;
    string nombre;
    vector<string> jugador;
    vector<int> identificador;

    void bienvenida();
    void ponerFicha(Tablero &t);
};

#endif
