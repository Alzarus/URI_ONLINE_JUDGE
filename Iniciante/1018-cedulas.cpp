#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int valor, valorfi;
	int cem = 0, cinq = 0, vint = 0, dez = 0, cinc = 0;
	int dois = 0, um = 0;
	
	cin >> valorfi;
	
	valor = valorfi;
	
	while(valor > 0){
		if(valor >= 100){
			cem = valor / 100;
			valor = valor % 100;
		} else if (valor >= 50){
			cinq = valor / 50;
			valor = valor % 50;
		} else if (valor >= 20){
			vint = valor / 20;
			valor = valor % 20;
		} else if (valor >= 10){
			dez = valor / 10;
			valor = valor % 10;
		} else if (valor >= 5){
			cinc = valor / 5;
			valor = valor % 5;
		} else if (valor >= 2){
			dois = valor / 2;
			valor = valor % 2;
		} else {
			um = valor / 1;
			valor = valor % 1;
		}
	}
	
	cout << valorfi << endl;
	cout << cem << " nota(s) de R$ 100,00" << endl;
	cout << cinc << " nota(s) de R$ 50,00" << endl;
	cout << vint << " nota(s) de R$ 20,00" << endl;
	cout << dez << " nota(s) de R$ 10,00" << endl;
	cout << cinc << " nota(s) de R$ 5,00" << endl;
	cout << dois << " nota(s) de R$ 2,00" << endl;
	cout << um << " nota(s) de R$ 1,00" << endl;

	
	return 0;
}

