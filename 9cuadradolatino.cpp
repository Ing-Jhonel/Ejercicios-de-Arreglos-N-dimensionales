#include <iostream>
using namespace std;

void imprimirCuadradoLatino(int N) {
    int m[N][N];

    // Generar el cuadrado latino
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            m[i][j]=(i-j+N)%N+1;
        }
    }

    // Imprimir el cuadrado latino
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
	
    int N;
    
    cout << "Introduce el orden del cuadrado latino: ";
    cin >> N;
	cout << endl;
	
    imprimirCuadradoLatino(N);

    return 0;
}

