#include "Jugadores.h"

void Jugadores::bienvenida() {
    cout << "Bienvenidos a Cant Stop " << endl << endl;
    while (true) {
        cout << "Por favor ingrese la cantidad de jugadores: ";
        cin >> cantidadJugadores;
        cout << endl;

        if (cantidadJugadores >= 2 && cantidadJugadores <= 4) {
            for (int i = 0; i < cantidadJugadores; i++) {
                cout << "Ingrese el nombre del jugador " << i + 1 << ": ";
                cin >> nombre;
                jugador.push_back(nombre);
            }
            break;
        } else {
            cout << "Rango permitido de jugadores es de 2 a 4, ingresa una opción válida :)" << endl << endl;
        }
    }
}

void Jugadores::ponerFicha(Tablero &t) {
    Dados d;

    for (int ronda = 0; ronda < 30; ronda++) {
        if (ronda < cantidadJugadores) {
            cout << "Turno de: " << jugador[ronda] << endl << endl;

            d.lanzarDados();
            d.elegirPrimerPar();

            cout << "Coloca la ficha en fila " << d.pareja1 << ": ";
            int pos1;
            cin >> pos1;
            t.asignarFicha(d.pareja1 - 2, pos1 - 1, ronda + 1);

            cout << "Coloca la ficha en fila " << d.pareja2 << ": ";
            int pos2;
            cin >> pos2;
            t.asignarFicha(d.pareja2 - 2, pos2 - 1, ronda + 1);

            d.lanzarDados();
            d.elegirTercerPar();
            cout << "Coloca la ficha en fila " << d.terceraPareja << ": ";
            int pos3;
            cin >> pos3;
            t.asignarFicha(d.terceraPareja - 2, pos3 - 1, ronda + 1);

            t.imprimirTablero();
        } else {
            ronda = -1;
        }
    }
}
