#include <iostream>
using namespace std;

void productoMatrices(int m1[][3], int m2[][3], int pm[][3], int filas, int columnas){
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			pm[i][j]=0;
			for(int k=0; k<columnas; k++){
				pm[i][j] += m1[i][k]*m2[k][j];
			}
		}
	}
}

void mostrarMatriz(int matriz[][3], int filas, int columnas){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
}

int main(){
	
	int matriz1[3][3]={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int matriz2[3][3]={
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};
	
    int producto[3][3];
    productoMatrices(matriz1, matriz2, producto, 3, 3);
    
    int filas=3;
    int columnas=3;
    cout << "\tMatriz A:" << "\t\t" << "Matriz B:" << "\t" << "\tResultado:" << endl << endl;
    for(int i=0; i<3; i++){
    	
    	cout << "\t";
    	
    	for(int j=0; j<columnas; j++){
    		cout << matriz1[i][j] << " ";
		}
		
		cout << "\t\t\t";
		
		for(int j=0; j<columnas; j++){
    		cout << matriz2[i][j] << " ";
		}
		
		cout << "\t\t\t";
		
		for(int j=0; j<columnas; j++){
    		cout << producto[i][j] << " ";
		}
		
		cout << endl;
	}
}                
