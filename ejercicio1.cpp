#include <iostream>
using namespace std;

int main(){
	
	int vector[10], i, suma;
	float promedio;
	suma = 0;
	for(i = 0; i < 10; i++){
		cout <<"Ingrese el dato de la posicion " << i << " :" << endl;
		cin >> vector[i];
		suma = suma + vector[i];
	}
	
	promedio =(float) suma / 10;
	
	for(i = 0; i < 10; i++){
		cout << "Elemento de la posicion " << i <<" es: " << vector[i] << endl;
	}
	cout << "El promedio de los elementos ingresados en el vector es de " << promedio << endl;
	
	
	return 0; 
}
