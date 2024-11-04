#include "Juego.h"
#include <iostream>

void Juego::prueba() {
    Tablero t;
    Jugadores j;
    Fichas f;
    Dados d;

    j.bienvenida();
    f.elegirColores(j);
    t.definirTablero();
    t.imprimirTablero();
    j.ponerFicha(t);
}
