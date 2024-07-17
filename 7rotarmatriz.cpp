#include <iostream>
using namespace std;

void rotarMatriz(int m[][4], int filas, int columnas) {

    for (int i = 0; i < filas; i++) {
        for (int j = i; j < columnas; j++) {
            int aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas / 2; j++) {
            int aux = m[i][j];
            m[i][j] = m[i][columnas - 1 - j];
            m[i][columnas - 1 - j] = aux;
        }
    }
}

int main(){
	
	int columnas=4;
	int filas=4;
	
	int matriz[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,1,2,3},
		{4,5,6,7},
	};
	
	int matrizAux[4][4];
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matrizAux[i][j]=matriz[i][j];
		}
	}
	
	rotarMatriz(matrizAux, 4, 4);
	
	cout << "\tMatriz original\t\t\tMatriz rotada" << endl << endl;
	for(int i=0; i<filas; i++){
		cout << "\t";
		for(int j=0; j<columnas; j++){
			cout << matriz[i][j] << "  ";
		}
		cout << "\t\t\t";
		for(int j=0; j<columnas; j++){
			cout << matrizAux[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}

