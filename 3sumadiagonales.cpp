#include <iostream>
using namespace std;

void sumaDiagonales(int m[][4], int filas, int columnas, int suma){
	
	for(int i=0; i<filas; i++){
		suma += m[i][i];
		suma += m[i][filas-1-i];
	}
	cout << suma << endl;
}

void mostrarMatriz(int m[][4], int filas, int columnas){
	for(int i=0; i<filas; i++){
		cout << "\t";
		for(int j=0; j<columnas; j++){
			cout << m[i][j] << "  ";
		}
		cout << endl;
	}
}
int main(){
	
	int matriz[4][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,1,2,3},
	{4,5,6,7}
	};
	
	cout << "\t  Matriz:" << endl << endl;
	mostrarMatriz(matriz, 4, 4);
	cout << endl;
	cout << "La suma de sus dos diagonales es ";
	sumaDiagonales(matriz, 4, 4, 0);
	return 0;
}
