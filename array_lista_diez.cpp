#include <iostream>
using namespace std;

int main(){
	int i, n;
	float prom, suma = 0;
	
	cout << "Ingrese la cant de elementos en el array" << endl;
	cin >> n;
	float* lista = new float[n];
	
	for(i = 0; i < n ; i++){
		cout << "Ingrese el elemento " << i << " : ";
		cin >> lista[i];
		suma = suma + lista[i];
	}
	
	cout << endl << "Elementos ingresados: " << lista[n] << endl;
	
	prom = suma / n;
	
	cout << "Promedio total de " << n << " estudiantes es : " << prom << endl;
	for(i=0; i < n; i++){
		
		cout << "El elemento " << i << " es: " << lista[i] << endl;
	}
	
	
	return 0;
}
