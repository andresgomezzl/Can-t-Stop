#ifndef FICHAS_H
#define FICHAS_H 
#include "Jugadores.h"

class Fichas{
public:
    vector <string> coloresDisponibles{"Rojo", "Azul", "Verde", "Amarillo"};
    vector  <string> coloresElegidos; //posicion de color respectiva a jugador;
    int colorElegido; //Rojo=0; Azul=1; Verde=2; Amarillo=2;



    void elegirColores()
    {
        Jugadores j;
        cout << endl;
        
        /*#ERROR LOGICO: No se por que benditos este ciclo se ejecuta 8 veces, no se por que toma la variable
        cantidadJugadores como =8???, wtff, si ejecutan el codigo ustedes van a ver que ese ciclo se repetirá 8 veces
        #Ayuda
        */
        for(int i=0; i<j.cantidadJugadores; i++)
        {
            cout << "Jugador " << i+1 << " Por favor elija un color " << endl ;

        }

        
    }


};

#endif