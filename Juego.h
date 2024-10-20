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
        f.elegirColores(j);
        
        
        //rellena eso con ceros para imprimirlo
        for (int col = 0; col < t.board.size(); col++) {
        for (int campo = 0; campo < t.board[col].size(); campo++) {
            t.board[col][campo].clear(); //limpiar el tablero;
            for (int i = 0; i < 4; i++) {
                t.board[col][campo].push_back(0); // Rellenar 
            }
        }
    }
        
       

    // Imprimir el tablero
    for (int col = 0; col < t.board.size(); col++) {
        for (int campo = 0; campo < t.board[col].size(); campo++) {
            // Imprimir cada cero
            for (int i = 0; i < t.board[col][campo].size(); i++) {
                cout << t.board[col][campo][i];
            }
            cout << "|"; // Separador entre campos
        }
        // Imprimir el número de la columna
        cout << " Columna " << (col + 2) << endl; // Columna empieza en 2
    }
        
        
        
    }
};

#endif