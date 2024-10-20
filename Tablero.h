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
};
#endif