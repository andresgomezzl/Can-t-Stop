#ifndef Jugadores_H
#define Jugadores_H
#include <iostream>
#include <vector>

using namespace std;

class Jugadores{
    
    public:
    
    int cantidadJugadores;
    vector<string> jugador;
    
    void bienvenida()
    {
        cout << "Bienvenido a Can´t Stop " << endl << endl ;
        
        
        while(true)
        {
            cout << "Por favor ingrese la cantidad de jugadores: " << endl;
            cin >> cantidadJugadores;
            cout << endl;
            
            if(cantidadJugadores>=2 && cantidadJugadores <=4)
            {
                break;
            }
            else
            {
               cout << "Rango permitido de jugadores es de 2 a 4, ingresa una opcion valida :)" << endl << endl;
            }
        }
        
    }
};

#endif