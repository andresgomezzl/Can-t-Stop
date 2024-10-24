#ifndef Jugadores_H
#define Jugadores_H
#include <iostream>
#include <vector>
#include <string>
#include "Tablero.h"
#include "Dados.h"

using namespace std;

class Jugadores{
    
    public:
    
    int cantidadJugadores;
    int posicionElegida;
    string nombre;
    vector <string> jugador;
    vector <int> identificador;
    
    void bienvenida()
    {
        cout << "Bienvenidos a Cant Stop " << endl << endl ;
        
        
        while(true)
        {
            cout << "Por favor ingrese la cantidad de jugadores: " << endl;
            cin >> cantidadJugadores;
            cout << endl;
            
            if(cantidadJugadores>=2 && cantidadJugadores <=4)
            {
                 
                    for(int i=0; i<cantidadJugadores; i++)
                    {
                        cout<< "Ingrese el nombre del jugador " << i+1 << ":"<< endl;
                        cin >> nombre;
                        jugador.push_back(nombre);
                    }
                    
                    break;
                    
            }
            else
            {
               cout << "Rango permitido de jugadores es de 2 a 4, ingresa una opcion valida :)" << endl << endl;
            }
        }

        
    }

    void ponerFicha(Tablero &t)
    {
        Dados d;
        //Solo para probar el metodo de poner ficha (no esta incluida la logica del juego aún)
        for(int i=0; i<30; i++)
        {
            if(i<cantidadJugadores)
            {
                cout << "Turno de: " << jugador[i] << endl << endl;
                d.mostrarDados();
                d.elegirParejas();
                cout<< "Elija en que posicion de la fila " << d.pareja1 << " desea colocar su ficha (1-" << t.board[d.pareja1-2].size() << ")" <<endl;
                cin >> posicionElegida;
                t.board[d.pareja1-2][posicionElegida-1][i]=i+1;  //i+1 NO va ahí, debe ir el identificador del color elegido
                t.imprimirTablero();
            }
            else
            {
              i=-1;
            }
        }
    }
};

#endif