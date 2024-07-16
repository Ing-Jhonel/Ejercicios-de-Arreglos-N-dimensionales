#include <iostream>

using namespace std;

const int filas = 5;
const int columnas = 5;

void reflejarImagen(int imagen[][columnas]) {
	
    for (int i=0; i<filas; i++) {
        int izquierda = 0;
        int derecha = columnas-1;
        while (izquierda < derecha) {
        	
            // Intercambiar elementos de la fila
            
            int temp = imagen[i][izquierda];
            imagen[i][izquierda] = imagen[i][derecha];
            imagen[i][derecha] = temp;
            izquierda++;
            derecha--;
        }
    }
}

void mostrarMatricesLadoALado(int original[][columnas], int reflejada[][columnas]) {
	cout << endl;
    cout << "\tMatriz Original              Matriz Reflejada" << endl << endl;
    for (int i=0; i<filas; i++) {
    	cout << "\t  ";
        for (int j=0; j<columnas; j++) {
            cout << original[i][j] << " ";
        }
        
        cout << "                    ";
        
        for (int j=0; j <columnas; j++) {
            cout << reflejada[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[filas][columnas] = {
        {1,2,3,4,5},
        {6,7,8,9,1},
        {2,3,4,5,6},
        {7,8,9,1,2},
        {3,4,5,6,7}
    };

    int matrizAux[filas][columnas];

    // Copiar la imagen original a la imagen reflejada antes de modificarla
    for (int i=0; i<filas; i++) {
        for (int j=0; j<columnas; j++) {
            matrizAux[i][j] = matriz[i][j];
        }
    }
    
    reflejarImagen(matrizAux);
    
    mostrarMatricesLadoALado(matriz, matrizAux);

    return 0;
}



	
