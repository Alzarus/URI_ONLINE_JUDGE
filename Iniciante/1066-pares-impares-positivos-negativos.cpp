#include<iostream>

using namespace std;

int main(){
	int arr[5], pares = 0, impares, positivos = 0, negativos = 0;
	
	for(int i = 0; i < 5; i ++){
		cin >> arr[i];
		if(arr[i] % 2 == 0)
			pares += 1;
		if(arr[i] > 0){
			positivos += 1;	
		} else if(arr[i] < 0){
			negativos += 1;
		}
			
	}
	
	impares = 5 - pares;
	
	cout << pares << " valor(es) par(es)" << endl;
	cout << impares << " valor(es) impar(es)" << endl;
	cout << positivos << " valor(es) positivo(s)" << endl;
	cout << negativos << " valor(es) negativo(s)" << endl;
	
	
	
	return 0;
}
