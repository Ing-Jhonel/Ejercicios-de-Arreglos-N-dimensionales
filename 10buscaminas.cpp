#include <iostream>
#include <cstdlib>
#include <ctime>  // Para obtener el tiempo actual como semilla para rand()

using namespace std;

const int FILAS = 10;
const int COLUMNAS = 10;

// Función para inicializar el tablero con minas aleatorias
void inicializarTablero(int tablero[][COLUMNAS]) {
    // Inicializar el generador de números aleatorios con una semilla única (tiempo actual)
    srand(time(NULL));

    // Llenar el tablero con minas aleatorias
    for (int i=0; i<FILAS; i++) {
        for (int j=0; j<COLUMNAS; j++) {
            tablero[i][j] = rand() % 2;  // Genera 0 o 1 (mina o vacío)
        }
    }
}

// Función para contar las minas adyacentes a cada celda
void contarMinasAdyacentes(int m[][COLUMNAS], int minasAdyacentes[][COLUMNAS]) {
    // Iterar sobre cada celda del tablero
    for (int i=0; i<FILAS; i++) {
        for (int j=0; j<COLUMNAS; j++) {
            // Inicializar contador de minas adyacentes
            int c = 0;
            
            // Iterar sobre las celdas adyacentes (8 direcciones)
            for (int di = -1; di <= 1; ++di) {
                for (int dj = -1; dj <= 1; ++dj) {
                    // Calcular coordenadas de la celda adyacente
                    int ni = i + di;
                    int nj = j + dj;

                    // Verificar si la celda adyacente está dentro de los límites del tablero
                    if (ni >= 0 && ni < FILAS && nj >= 0 && nj < COLUMNAS) {
                        c += m[ni][nj];
                    }
                }
            }

            // Almacenar el número de minas adyacentes en el tablero de minas adyacentes
            minasAdyacentes[i][j] = c;
        }
    }
}

// Función para mostrar el tablero en formato de texto
void mostrarTablero(int m[][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
	
    int tablero[10][10];
    int minasAdyacentes[10][10];

    // Inicializar tablero con minas aleatorias
    inicializarTablero(tablero);

    // Calcular el número de minas adyacentes
    contarMinasAdyacentes(tablero, minasAdyacentes);

    // Mostrar tablero original y tablero con números adyacentes lado a lado
    cout << "Tablero Original:" << endl;
    mostrarTablero(tablero);
    cout << endl << "Tablero con Minas Adyacentes:" << endl;
    mostrarTablero(minasAdyacentes);

    return 0;
}

