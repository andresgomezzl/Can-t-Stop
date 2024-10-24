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
        t.mostrarTablero();
        
        


        //Probando que los dados si funcionen y si se armen las parejas
        for(int i=0; i<3;i++)
        {
        d.mostrarDados();
        d.elegirParejas();
        }
        
        
    }
};

#endif