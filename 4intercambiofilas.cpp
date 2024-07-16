#include <iostream>

using namespace std;

void intercambiarFilas(int matriz[4][4], int fila1, int fila2) { 
    for (int i = 0; i < 4; ++i) {
        int temp = matriz[fila1][i];
        matriz[fila1][i] = matriz[fila2][i];
        matriz[fila2][i] = temp;
    }
}

void mostrarMatricesLadoALado(int m1[4][4], int m2[4][4], int filas, int columnas) {
	
	cout << endl;
	cout << "\tMatriz Original          Matriz Modificada" << endl << endl;
	
    for (int i=0; i<filas; i++) {
    	cout << "\t";
        for (int j=0; j<columnas; j++) {
            cout << m1[i][j] << " ";
        }
        
        cout << "\t\t";
        
        for (int j=0; j<columnas; j++) {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int matrizAux[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            matrizAux[i][j] = matriz[i][j];
        }
    }

    int fila1 = 0;
    int fila2 = 2;

    intercambiarFilas(matrizAux, fila1, fila2);
    mostrarMatricesLadoALado(matriz, matrizAux, 4, 4);
    
    return 0;
}


