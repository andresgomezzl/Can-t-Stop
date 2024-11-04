#include "Dados.h"
#include <iostream>

Dados::Dados() {
    srand(time(0));
    A = B = C = D = 0;
}

void Dados::mostrarDados() {
    A = (rand() % 6) + 1;
    B = (rand() % 6) + 1;
    C = (rand() % 6) + 1;
    D = (rand() % 6) + 1;

    vectorDados[0] = A;
    vectorDados[1] = B;
    vectorDados[2] = C;
    vectorDados[3] = D;

    std::cout << "Dado 1: " << A << std::endl;
    std::cout << "Dado 2: " << B << std::endl;
    std::cout << "Dado 3: " << C << std::endl;
    std::cout << "Dado 4: " << D << std::endl;
}

void Dados::elegirParejas() {
    std::cout << "Elige el primer par de dados: ";
    std::cin >> eleccionDado1 >> eleccionDado2;
    pareja1 = vectorDados[eleccionDado1 - 1] + vectorDados[eleccionDado2 - 1];

    std::cout << "Elige el segundo par de dados: ";
    std::cin >> eleccionDado1 >> eleccionDado2;
    pareja2 = vectorDados[eleccionDado1 - 1] + vectorDados[eleccionDado2 - 1];
}
