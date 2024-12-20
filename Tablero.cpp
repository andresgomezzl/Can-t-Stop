#include "Tablero.h"
#include "colors.h"
#include <iostream>

void Tablero::definirTablero() {
    for (int col = 0; col < board.size(); col++) {
        for (int campo = 0; campo < board[col].size(); campo++) {
            board[col][campo].clear();
            for (int i = 0; i < 4; i++) {
                board[col][campo].push_back(0);
            }
        }
    }
}

void Tablero::imprimirTablero() {
    std::cout << "                                 TABLERO" << std::endl;

    // Arreglo de colores basado en el índice del jugador
    const std::string colores[] = { "-", BG_RED "A" RESET, BG_BLUE "B" RESET, BG_GREEN "C" RESET, BG_YELLOW "D" RESET };

    for (int col = 0; col < board.size(); col++) {
        for (int campo = 0; campo < board[col].size(); campo++) {
            for (int i = 0; i < board[col][campo].size(); i++) {
                int valor = board[col][campo][i];
                
                // Imprime el color correspondiente al valor en el tablero
                std::cout << (valor >= 1 && valor <= 4 ? colores[valor] : colores[0]);
            }
            std::cout << "|";
        }
        std::cout << " Fila " << (col + 2) << std::endl;
    }
    std::cout << std::endl;
}

bool Tablero::asignarFicha(int fila, int columna, int jugador) {
    if (fila < 0 || fila >= board.size() || columna < 0 || columna >= board[fila].size()) {
        std::cout << "Posición inválida. Pierdes el turno.\n";
        return false;
    }
    for (int i = 0; i < board[fila][columna].size(); i++) {
        if (board[fila][columna][i] == 0) {
            board[fila][columna][i] = jugador;
            return true;
        }
    }
    std::cout << "La celda ya está llena. Pierdes el turno.\n";
    return false;
}
