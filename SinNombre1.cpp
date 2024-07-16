#include <iostream>
using namespace std;

void sumaDiagonales(int m[][4], int filas, int columnas) {
    int suma = 0;
    for (int i = 0; i < filas; i++) {
    			for(int j=0; j<columnas; j++){
			if(m[i][j]=m[j][i]){
				suma = suma + m[i][j];
			}
		}
        suma += m[i][columnas - i - 1];
    }
    cout << "La suma de la segunda diagonal es: " << suma << endl;
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    sumaDiagonales(matriz, 4, 4);

    return 0;
}

  
