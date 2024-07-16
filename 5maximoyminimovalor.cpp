#include <iostream>
using namespace std;

void MostrarMaximoYMinimo(int m[][4], int filas, int columnas){
	int maximo = m[0][0];
	int minimo = m[0][0];
	int filaMaximo;
	int columnaMaximo;
	int filaMinimo;
	int columnaMinimo;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if(m[i][j]>maximo){
				maximo=m[i][j];
				filaMaximo=i;
				columnaMaximo=j;
			}
			if(m[i][j]<minimo){
				minimo=m[i][j];
				filaMinimo=i;
				columnaMinimo=j;
			}
		}
	}
	
	cout << "El maximo valor es " << maximo << ". Sus posiciones son: " << endl;
	cout << "Fila " << filaMaximo << ", Columna " << columnaMaximo << "." << endl << endl;
	cout << "El minimo valor es " << minimo << ". Sus posiciones son: " << endl;
	cout << "Fila " << filaMinimo << ", Columna " << columnaMinimo << "." << endl;
}

int main() {
	
	int matriz[4][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
	};
	
	MostrarMaximoYMinimo(matriz, 4, 4);
    return 0;
}
	
