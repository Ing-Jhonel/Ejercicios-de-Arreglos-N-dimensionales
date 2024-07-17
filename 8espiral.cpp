#include <iostream>
using namespace std;

const int N = 5;
const int FILAS = 5;
const int COLUMNAS = 5;

// Función para recorrer la matriz en orden espiral
void recorrerMatrizEspiral(int matriz[N][N]) {
    int filaInicio = 0, filaFin = N - 1;
    int columnaInicio = 0, columnaFin = N - 1;

    while (filaInicio <= filaFin && columnaInicio <= columnaFin) {
        // Recorrer desde la columna inicial hasta la columna final de la fila superior
        for (int i = columnaInicio; i <= columnaFin; ++i) {
            cout << matriz[filaInicio][i] << " ";
        }
        filaInicio++;

        // Recorrer desde la fila superior hasta la fila final de la columna derecha
        for (int i = filaInicio; i <= filaFin; ++i) {
            cout << matriz[i][columnaFin] << " ";
        }
        columnaFin--;

        // Recorrer desde la columna derecha hasta la columna inicial de la fila inferior
        if (filaInicio <= filaFin) {
            for (int i = columnaFin; i >= columnaInicio; --i) {
                cout << matriz[filaFin][i] << " ";
            }
            filaFin--;
        }

        // Recorrer desde la fila inferior hasta la fila superior de la columna izquierda
        if (columnaInicio <= columnaFin) {
            for (int i = filaFin; i >= filaInicio; --i) {
                cout << matriz[i][columnaInicio] << " ";
            }
            columnaInicio++;
        }
    }
}

int main() {
    int matriz[N][N] = {
        {1,  2,  3,  4,  5},
        {6,  7,  8,  9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
	
	cout << "\t\t\tMatriz:" << endl << endl;
	for(int i=0; i<FILAS; i++){
		cout << "\t";
		for(int j=0; j<COLUMNAS; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
    cout << endl << "Recorrido en espiral:" << endl << endl;
    recorrerMatrizEspiral(matriz);

    return 0;
}


