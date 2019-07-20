#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float valor, valorfi;
	int cem = 0, cinqu = 0, vint = 0;
	int dez = 0, cinc = 0, dois = 0; 
	
	int um = 0, moedcinqu = 0, moedvintcinc = 0;
	int moeddez = 0, moedcinc = 0, moedum = 0;
	
	cin >> valorfi;
	
	if(valorfi < 0 || valorfi > 1000000)
		return -1;
	
	valor = valorfi;
	
	while(valor > 0){
		if(valor >= 100){
			cem = valor / 100;
			valor = fmod(valor, 100);
		} else if (valor >= 50){
			cinqu = valor / 50;
			valor = fmod(valor, 50);
		} else if (valor >= 20){
			vint = valor / 20;
			valor = fmod(valor, 20);
		} else if (valor >= 10){
			dez = valor / 10;
			valor = fmod(valor, 10);
		} else if (valor >= 5){
			cinc = valor / 5;
			valor = fmod(valor, 5);
		} else if (valor >= 2){
			dois = valor / 2;
			valor = fmod(valor, 2);
		} else if (valor >= 1) {
			um = valor / 1;
			valor = fmod(valor, 1);
		} else if (valor >= 0.5){
			moedcinqu = valor / 0.5;
			valor = fmod(valor, 0.5);
		} else if (valor >= 0.25){
			moedvintcinc = valor / 0.25;
			valor = fmod(valor, 0.25);
		} else if (valor >= 0.10){
			moeddez = valor / 0.10;
			valor = fmod(valor, 0.10);
		} else if (valor >= 0.05){
			moedcinc = valor / 0.05;
			valor = fmod(valor, 0.05);
		} else {
			valor = (roundf(valor * 100) / 100);
			moedum = (roundf(valor * 100) / 100) / 0.01;
			if(valor > 0)
				moedum+=1;
			valor = 0;
		}
	}
	
	cout << "NOTAS:" << endl;
	cout << cem << " nota(s) de R$ 100.00" << endl;
	cout << cinqu << " nota(s) de R$ 50.00" << endl;
	cout << vint << " nota(s) de R$ 20.00" << endl;
	cout << dez << " nota(s) de R$ 10.00" << endl;
	cout << cinc << " nota(s) de R$ 5.00" << endl;
	cout << dois << " nota(s) de R$ 2.00" << endl;
	
	cout << "MOEDAS:" << endl;
	cout << um << " moeda(s) de R$ 1.00" << endl;
	cout << moedcinqu << " moeda(s) de R$ 0.50" << endl;
	cout << moedvintcinc << " moeda(s) de R$ 0.25" << endl;
	cout << moeddez << " moeda(s) de R$ 0.10" << endl;
	cout << moedcinc << " moeda(s) de R$ 0.05" << endl;
	cout << moedum << " moeda(s) de R$ 0.01" << endl;
	
	return 0;
}

