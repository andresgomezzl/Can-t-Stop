#include "Dados.h"

Dados::Dados() {
    srand(time(0));
    A = B = C = D = 0;
}

void Dados::lanzarDados() {
    A = (rand() % 6) + 1;
    B = (rand() % 6) + 1;
    C = (rand() % 6) + 1;
    D = (rand() % 6) + 1;
    sumaTotalDados = A + B + C + D;
    cout << "Resultado Dados: " << A << " " << B << " " << C << " " << D << endl << endl;
    vectorDados[0] = A;
    vectorDados[1] = B;
    vectorDados[2] = C;
    vectorDados[3] = D;
}

void Dados::elegirPrimerPar() {
    while (true) {
        cout << "Elija un dado para el primer par (1-4): ";
        cin >> eleccionDado1;
        cout << "Elija otro dado para el primer par (1-4): ";
        cin >> eleccionDado2;

        if (eleccionDado1 < 1 || eleccionDado1 > 4 || eleccionDado2 < 1 || eleccionDado2 > 4 || eleccionDado1 == eleccionDado2) {
            cout << "Elección inválida, por favor intente de nuevo" << endl << endl;
        } else {
            pareja1 = vectorDados[eleccionDado1 - 1] + vectorDados[eleccionDado2 - 1];
            pareja2 = sumaTotalDados - pareja1;
            cout << "Primer Par: " << pareja1 << ", Segundo Par (automático): " << pareja2 << endl << endl;
            break;
        }
    }
}

void Dados::elegirTercerPar() {
    while (true) {
        cout << "Seleccione un par para la tercera ficha:" << endl;
        cout << "Elija un dado (1-4): ";
        cin >> eleccionDado1;
        cout << "Elija otro dado (1-4): ";
        cin >> eleccionDado2;

        if (eleccionDado1 < 1 || eleccionDado1 > 4 || eleccionDado2 < 1 || eleccionDado2 > 4 || eleccionDado1 == eleccionDado2) {
            cout << "Elección inválida, intente de nuevo" << endl << endl;
        } else {
            terceraPareja = vectorDados[eleccionDado1 - 1] + vectorDados[eleccionDado2 - 1];
            cout << "Tercer Par seleccionado: " << terceraPareja << endl << endl;
            break;
        }
    }
}
