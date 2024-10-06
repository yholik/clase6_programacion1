#include <iostream>
#include <vector>
using namespace std; 

int main(){
	//Vector 10 elementos sin inicializar
	vector<int> a(10);
	
	//Inicializamos todos los elementos en este ciclo
	for(int i = 0; i < 10; i++){
		a[i] = i + 1;
	}
	
	//Se muestra la longitud antes del borrado
	cout << "La longitud total es: " << a.size() << endl;
	
	//Borramos elementos entre las posiciones 3 a 6
	a.erase(a.begin()+3,a.begin()+6);
	
	//Mostramos la nueva longitud
	cout << "La nueva longitus es: " << a.size() << endl;
	
	//Mostramos el nuevo orden de los elementos
	for (int i = 0; i < a.size(); i++){
		cout << a[i] << " " << endl;
	}
	
	
	return 0;
}
