#include <iostream>
using namespace std;

int main(){
	int matriz[5][2], may, men, f, c;
	
	for(f = 0; f < 5; f++){
		for(c = 0; c < 2; c++){
			cout << "Ingrese el dato de la fila " << f << " columna " << c << endl;
			cin >> matriz[f][c];
			
			if(f == 0 && c == 0){
			may = matriz[f][c];
			men = matriz[f][c];
			}
			
			if(matriz[f][c] > may){
				may = matriz[f][c];
			}else{
				if(matriz[f][c] < men){
					men = matriz[f][c];
				}
			}
		}
	}
	
	cout << "Mayor: " << may << " Menor: " << men;
	
	return 0;
}
