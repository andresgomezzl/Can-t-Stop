#ifndef DADOS_H
#define DADOS_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dados {
public:
    int A, B, C, D; //resultados de los dados
    int sumaTotalDados;
    int vectorDados[4];
    int eleccionDado1, eleccionDado2;
    int pareja1, pareja2;

    Dados() {
        
        srand(time(0));
        A = 0;
        B = 0;
        C = 0;
        D = 0;
    }

    void mostrarDados() {
        A = (rand() % 6) + 1; 
        B = (rand() % 6) + 1;
        C = (rand() % 6) + 1;
        D = (rand() % 6) + 1;
        sumaTotalDados=A+B+C+D; //pareja2= sumaTotalDados- pareja1
        cout << "Resultado Dados: " << A << " " << B << " " << C << " "<< D << endl <<endl;
        vectorDados[0]=A;
        vectorDados[1]=B;
        vectorDados[2]=C;
        vectorDados[3]=D;
    }

    void elegirParejas()
    {

       while(true)
       {
            cout << "Elija un dado (1-4) "<< endl;
            cin >> eleccionDado1;
            cout << "Elija otro dado (1-4)" << endl;
            cin >> eleccionDado2;

            if(eleccionDado1<1 || eleccionDado1>4 || eleccionDado2<1 || eleccionDado2>4 || eleccionDado1==eleccionDado2)
            {
                cout<< "Eleccion invalida, por favor intente de nuevo" << endl << endl;
            }

            else 
            {  
                pareja1=vectorDados[eleccionDado1-1]+vectorDados[eleccionDado2-1];  //arma la pareja 1
                cout << "Combinacion 1: " << pareja1 << endl;
                pareja2=sumaTotalDados-pareja1;
                cout << "Combinacion 2: " << pareja2 << endl <<endl;
                
                
                break;
            }
       }
   

    }


};

#endif