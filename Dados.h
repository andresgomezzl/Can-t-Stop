#ifndef DADOS_H
#define DADOS_H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dados {
public:
    int A, B, C, D;

    Dados() {
        
        srand(time(0));
        A = 0;
        B = 0;
        C = 0;
        D = 0;
    }

    void lanzar() {
        A = (rand() % 6) + 1; 
        B = (rand() % 6) + 1;
        C = (rand() % 6) + 1;
        D = (rand() % 6) + 1;
    }
};

#endif