#ifndef TABLERO_H
#define TABLERO_H
#include<iostream>
#include <vector>
#include "colors.h+" 
using namespace std;

class Tablero {

public:

    // para hacer condiciones donde si alguna de estas 2 es true, el jugador pueda seguir tirando dados
    bool moverFicha = false, colocarFicha = false, tiroDados = false;

    // Crear el tablero con columnas de diferentes tamaños
    vector<vector<vector<int>>> board = {
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

    // Función para definir y limpiar el tablero
    void definirTablero() {
        // Rellenar con ceros para inicializar
        for (int col = 0; col < board.size(); col++) {
            for (int campo = 0; campo < board[col].size(); campo++) {
                board[col][campo].clear(); // limpiar el tablero
                for (int i = 0; i < 4; i++) {
                    board[col][campo].push_back(0); // Rellenar con ceros
                }
            }
        }
    }

    // Función para imprimir el tablero con colores
    void imprimirTablero() {
        cout << "                                 TABLERO" << endl;
        for (int col = 0; col < board.size(); col++) {
            for (int campo = 0; campo < board[col].size(); campo++) {
                // Imprimir cada valor con el color correspondiente
                for (int i = 0; i < board[col][campo].size(); i++) {
                    int valor = board[col][campo][i];
                    switch (valor) {
                        case 1:
                            cout << BG_RED << "A" << RESET;  // Jugador 1
                            break;
                        case 2:
                            cout << BG_BLUE << "B" << RESET;  // Jugador 2
                            break;
                        case 3:
                            cout << BG_GREEN<< "C" << RESET;  // Jugador 3
                            break;
                        case 4:
                            cout << BG_YELLOW << "D" << RESET;  // Jugador 4
                            break;
                        default:
                            cout << "-";  // Celda vacía
                            break;
                    }
                }
                cout << "|"; // Separador entre campos
            }
            // Imprimir el número de la fila (empieza en 2)
            cout << " Fila " << (col + 2) << endl;
        }
        cout << endl;
    }

    // Función para asignar un valor a una celda del tablero
    bool asignarFicha(int fila, int columna, int jugador) {
        if (fila < 0 || fila >= board.size() || columna < 0 || columna >= board[fila].size()) {
            cout << "Posición inválida. Pierdes el turno.\n";
            return false;
        }
        // Asignar el valor del jugador a la celda
        for (int i = 0; i < board[fila][columna].size(); i++) {
            if (board[fila][columna][i] == 0) {  // Si la celda está vacía
                board[fila][columna][i] = jugador;
                return true;
            }
        }
        cout << "La celda ya está llena. Pierdes el turno.\n";
        return false;
    }
};

#endif
