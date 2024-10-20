#ifndef FICHAS_H
#define FICHAS_H 
#include "Jugadores.h"

class Fichas{
public:
    vector  <int> coloresElegidos; //posicion de color respectiva a jugador;
    int colorElegido; //Rojo=0; Azul=1; Verde=2; Amarillo=2;
    vector <bool> disponibilidadColores{true, true, true, true};
    bool validez;

    //NOTA: Este metodo funciona un 94% bien, haciendo casos de prueba hay partes que sugieren error logico, toca revisar
    void elegirColores(Jugadores &j)
    {
        coloresElegidos.resize(j.cantidadJugadores);
       
        for (int i = 0; i < j.cantidadJugadores; i++) {
            
            validez=true;
            while(validez)
            {
              cout << j.jugador[i]<< ", elige un color (1-Rojo, 2-Azul, 3-Verde, 4-Amarillo): " << endl;
              cin >> colorElegido;
              if(disponibilidadColores[colorElegido-1]==true)
              {
                coloresElegidos[i]=colorElegido-1;
                disponibilidadColores[colorElegido-1]=false;
                validez=false;
              }
              else
              {
                if(colorElegido-1>3 || colorElegido-1<0)
                {
                    cout << "Color no valido" << endl << endl;
                }
                else
                {
                    cout << "Color ya tomado, intente de nuevo" << endl << endl;
                }
              }
            }
        }

        for(int k=0; k<j.jugador.size();k++)
        {
            cout << "Identificador de fichas de  " << j.jugador[k] << " es: " << coloresElegidos[k]+1 << endl;
        }
        cout << endl;

        cout<< "TABLERO:" << endl << endl;
    }
};

#endif