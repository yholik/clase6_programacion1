#include <iostream>
using namespace std;

int main(){

char listaConEspacios[20];
int i;

cout << "Ingrese texto con espacios " << endl,

cin.getline(listaConEspacios, 20);

cout << endl << listaConEspacios << endl;

cout << endl << "Imprime elementos por separado" << endl << endl;

for (i = 0 ; i< 20 ; i++){
	cout << "El elemento" << i << " es: " << listaConEspacios[i] << endl;
}

return 0;
}
