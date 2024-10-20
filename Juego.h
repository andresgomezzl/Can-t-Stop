#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include "Tablero.h"
#include "Jugadores.h"
#include "Fichas.h"

using namespace std;

class Juego { 
public:
    void prueba() {
        Tablero t;
        Jugadores j;
        Fichas f;
        
        j.bienvenida(); //Inicio del juego, pide cantidad jugadores, pide nombres 
        f.elegirColores();
        
        /*Bueno, este comentario solo es una guia para saber como usar la estructura del tablero 

        t.board[5][0].push_back(1);  // jugador 1 coloca ficha
        t.board[5][0].push_back(2);  // jugador 2 coloca ficha en la misma posicion
        t.board[5][0].push_back(3);  // jugador 3 coloca ficha ahí también

        // Mostrar las fichas en una posición de la columna
        cout << "Fichas en la primera posición de la columna 7: ";
        for (int revisar : t.board[5][0]) {
            cout << revisar << " "; // Muestra los jugadores que tienen fichas en esa posición
        }
        cout << endl;

        // Condicionales para revisar valores
        for (int revisar : t.board[5][0]) {
            if (revisar == 1) {
                cout << "I need coito";
            }
        }
        */
        
        //rellena eso con ceros

        for(int i=0; i<=10; i++)
        {
            
            for(int j=0; j<t.board[i].size(); j++)
            {
                for(int k=0; k<4; k++)
                {
                    t.board[i][j].push_back(0);
                }
            }
        }
        
        //imprime todo el tablero
        
    }
};

#endif