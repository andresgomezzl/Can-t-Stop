#ifndef Jugadores_H
#define Jugadores_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Jugadores{
    
    public:
    
    int cantidadJugadores;
    string nombre;
    vector <string> jugador;
    
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
};

#endif