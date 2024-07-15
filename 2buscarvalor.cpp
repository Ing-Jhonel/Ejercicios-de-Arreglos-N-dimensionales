#include <iostream>
using namespace std;

bool encontrado(int m[][3], int filas, int columnas, int valor) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] == valor) {
                return true;
            }
        }
    }
    return false;
}

void buscarValor(int m[][3], int filas, int columnas, int valor) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] == valor) {
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 2, 6},
        {7, 2, 9}
    };

    int valor;
    cout << "Indique el valor a buscar: ";
    cin >> valor;
    cout << endl;

    if (encontrado(matriz, 3, 3, valor)) {
        cout << "El valor " << valor << " se encuentra en: " << endl << endl;
        buscarValor(matriz, 3, 3, valor);
    } else {
        cout << "El valor " << valor << " no se encuentra en la matriz." << endl;
    }

    return 0;
}
  
