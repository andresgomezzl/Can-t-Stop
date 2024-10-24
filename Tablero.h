#ifndef TABLERO_H
#define TABLERO_H
#include<iostream>
#include <vector>
using namespace std;
class Tablero {

public:

	// Crear el tablero con columnas de diferentes tamanos
	vector<vector<vector<int>>> board= {
						 vector<vector<int>>(3),  // Columna 2  tiene 3 campos  INDICE 0
		                 vector<vector<int>>(5),  // Columna 3  tiene 5 campos  INDICE 1
		                 vector<vector<int>>(7),  // Columna 4  tiene 7 campos  INDICE 2
		                 vector<vector<int>>(9),  // Columna 5  tiene 9 campos  INDICE 3
		                 vector<vector<int>>(11), // Columna 6  tiene 11 campos INDICE 4
		                 vector<vector<int>>(13), // Columna 7  tiene 13 campos INDICE 5
		                 vector<vector<int>>(11), // Columna 8  tiene 11 campos INDICE 6
		                 vector<vector<int>>(9),  // Columna 9  tiene 9 campos  INDICE 7
		                 vector<vector<int>>(7),  // Columna 10 tiene 7 campos  INDICE 8
		                 vector<vector<int>>(5),  // Columna 11 tiene 5 campos  INDICE 9
		                 vector<vector<int>>(3)   // Columna 12 tiene 3 campos  INDICE 10
	};

	void mostrarTablero()
	{
		//rellena eso con ceros para imprimirlo
        for (int col = 0; col < board.size(); col++) {
        for (int campo = 0; campo < board[col].size(); campo++) {
            board[col][campo].clear(); //limpiar el tablero (tener en cuenta para un futuro cuando jugador gane una fila);
            for (int i = 0; i < 4; i++) {
                board[col][campo].push_back(0); // Rellenar 
            }
        }
    }
        
       

    // Imprimir el tablero
    for (int col = 0; col < board.size(); col++) 
    {
        for (int campo = 0; campo < board[col].size(); campo++)
         {
            // Imprimir cada cero
            for (int i = 0; i < board[col][campo].size(); i++) {
                cout << board[col][campo][i];
            }
            cout << "|"; // Separador entre campos
        }
        // Imprimir el número de la columna
        cout << " Columna " << (col + 2) << endl; // Columna empieza en 2
    }
    cout << endl;
	}
};
#endif