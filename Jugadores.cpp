#include "Jugadores.h"
#include <iostream>

void Jugadores::bienvenida() {
    std::cout << "Bienvenidos a Cant Stop " << std::endl << std::endl;

    while (true) {
        std::cout << "Por favor ingrese la cantidad de jugadores: " << std::endl;
        std::cin >> cantidadJugadores;
        std::cout << std::endl;

        if (cantidadJugadores >= 2 && cantidadJugadores <= 4) {
            for (int i = 0; i < cantidadJugadores; i++) {
                std::cout << "Ingrese el nombre del jugador " << i + 1 << ":" << std::endl;
                std::cin >> nombre;
                jugador.push_back(nombre);
            }
            break;
        } else {
            std::cout << "Rango permitido de jugadores es de 2 a 4, ingresa una opción válida :)" << std::endl << std::endl;
        }
    }
}

void Jugadores::ponerFicha(Tablero &t) {
    Dados d;
    for (int i = 0; i < 30; i++) {
        if (i < cantidadJugadores) {
            std::cout << "Turno de: " << jugador[i] << std::endl << std::endl;
            d.mostrarDados();
            d.elegirParejas();
            std::cout << "Elija en qué posición de la fila " << d.pareja1 << " desea colocar su ficha (1-" << t.board[d.pareja1 - 2].size() << ")" << std::endl;
            std::cin >> posicionElegida;
            t.board[d.pareja1 - 2][posicionElegida - 1][i] = i + 1;
            t.imprimirTablero();
        } else {
            i = -1;
        }
    }
}
