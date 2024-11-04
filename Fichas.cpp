#include "Fichas.h"
#include <iostream>

void Fichas::elegirColores(Jugadores &j) {
    coloresElegidos.resize(j.cantidadJugadores);

    for (int i = 0; i < j.cantidadJugadores; i++) {
        validez = true;
        while (validez) {
            std::cout << j.jugador[i] << ", elige un color (1-Rojo, 2-Azul, 3-Verde, 4-Amarillo): " << std::endl;
            std::cin >> colorElegido;
            if (disponibilidadColores[colorElegido - 1] == true) {
                coloresElegidos[i] = colorElegido - 1;
                disponibilidadColores[colorElegido - 1] = false;
                validez = false;
            } else {
                if (colorElegido - 1 > 3 || colorElegido - 1 < 0) {
                    std::cout << "Color no válido" << std::endl << std::endl;
                } else {
                    std::cout << "Color ya tomado, intente de nuevo" << std::endl << std::endl;
                }
            }
        }
    }

    for (int k = 0; k < j.jugador.size(); k++) {
        std::cout << "Identificador de fichas de " << j.jugador[k] << " es: " << coloresElegidos[k] + 1 << std::endl;
    }
    std::cout << std::endl;
}
