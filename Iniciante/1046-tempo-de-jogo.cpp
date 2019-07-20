#include<iostream>

using namespace std;

int main(){
	int ini, fim, aux;
	
	cin >> ini >> fim;
	
	if(ini > fim){
		aux = (ini - 24) * (- 1);
		aux = aux + fim;
		cout << "O JOGO DUROU " << aux << " HORA(S)" << endl;	
	} else if(ini < fim){
		aux = fim - ini;
		cout << "O JOGO DUROU " << aux << " HORA(S)" << endl;		
	} else {
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
	}

	return 0;
}
