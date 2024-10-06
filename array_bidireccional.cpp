#include <iostream>
using namespace std;

int main(){
	
	int lista[3][4];
	int i, j;
	
	cout << "Cargar elementos " << endl;
	
	for(i = 0; i <3 ; i++){
		
		for(j = 0; j < 4; j++){
			cout << "Ingrese el elemento " << i << " - " << j << ": " << endl ;
			cin >> lista[i][j];
		}
	}
	
	for(i = 0; i < 3; i++){
		
		for(j = 0; j < 4; j++){
			
			cout << "El elemento en la posicion " << i << " - " << j << " es: " << lista[i][j] << endl;
		}
	}
	
	return 0;
	
}
