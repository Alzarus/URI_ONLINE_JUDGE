#include<iostream>

using namespace std;

int main(){
	int a, b, c, arr[3], menor, troca;
	
	cin >> a >> b >> c;
	
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	
	
	for(int i = 0; i < 3; i ++){
		menor = i;
		for(int j = i+1; j < 3; j++){
			if(arr[menor] > arr[j]){
				menor = j;
			}
		}
		if(i != menor){
			troca = arr[i];
			arr[i] = arr[menor];
			arr[menor] = troca;	
		}

	}
	
	for(int i = 0; i < 3; i ++){
		cout << arr[i] << endl;
	}
	cout << endl;
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
	return 0;
}
