#include<iostream>

using namespace std;

int main(){
	int a, b, maior, menor;
	
	cin >> a >> b;
	
	if(a > b){
		maior = a;
		menor = b;
	} else if (b > a){
		maior = b;
		menor = a;
	} else {
		cout << "Sao Multiplos" << endl;
		return 0;
	}
	
	if(maior % menor == 0){
		cout << "Sao Multiplos" << endl;
	} else {
		cout << "Nao sao Multiplos" << endl;
	}
	

	return 0;
}
