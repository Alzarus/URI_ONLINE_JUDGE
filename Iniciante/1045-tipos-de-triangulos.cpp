#include<iostream>

using namespace std;

int main(){
	
	double a, b, c, arr[3], troca;
	int maior;
	
	cin >> a >> b >> c;
	
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	
	for(int i = 0; i < 3; i ++){
		maior = i;
		for(int j = i + 1; j < 3; j ++){
			if(arr[maior] < arr[j]){
				maior = j;
			}
		}	
		if(maior != i){
			troca = arr[maior];
			arr[maior] = arr[i];
			arr[i] = troca;
		}
	}
	
	a = arr[0];
	b = arr[1];
	c = arr[2];
	
	if(a >= b + c){
		cout << "NAO FORMA TRIANGULO" << endl;
		return 0;
	}
	
	if((a * a) == (b * b) + (c * c)){
		cout << "TRIANGULO RETANGULO" << endl;
	} 
	
	if((a * a) > (b * b) + (c * c)){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	
	if((a * a) < (b * b) + (c * c)){
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	
	if(a == b && b == c){
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	
	if( (a == b && b != c) || (b == c && c != a) || (a == c && a != b) ){
		cout << "TRIANGULO ISOSCELES" << endl;
	}

	return 0;
}
