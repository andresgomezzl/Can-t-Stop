#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include "Tablero.h"
#include "Jugadores.h"
#include "Fichas.h"
#include "Dados.h"

using namespace std;

class Juego { 
public:
    void prueba() {
        Tablero t;
        Jugadores j;
        Fichas f;
        Dados d;

        
        j.bienvenida(); //Inicio del juego, pide cantidad jugadores, pide nombres 
        f.elegirColores(j);
        t.definirTablero();
        t.imprimirTablero();
        j.ponerFicha(t);
        
        
    }
};

#endif