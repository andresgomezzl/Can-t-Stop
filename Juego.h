#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include "Tablero.h"
#include "Jugadores.h"
using namespace std;

void prueba()
{
    Tablero t;
    Jugadores j;
    //
    j.bienvenida();
	//para board[5][0] , 5 es el indice (columna 7) y 0 la primer posicion de esa columna
	t.board[5][0].push_back(1);  // jugador 1 coloca ficha
	t.board[5][0].push_back(2);  // jugador 2 coloca ficha en la misma posicion
	t.board[5][0].push_back(3);  // jugador 3 coloca ficha ahi tambien xd

	// De esta forma se muestran las fichas que hay en X posicion de X columna
	cout << "Fichas en la primera posicion de la columna 7: ";
	for (int revisar:  t.board[5][0]) {
		cout << revisar << " ";  // Muestra los jugadores que tienen fichas en esa posicion
	}
	cout << endl;

	//
	for (int revisar: t.board[5][0]) {
		if(revisar==1)
		{
			cout <<  "I need coito";
		}
	}

}
#endif