#include<iostream>

using namespace std;

int main(){
	int arr[5], pares = 0;
	
	for(int i = 0; i < 5; i ++){
		cin >> arr[i];
		if(arr[i] % 2 == 0)
			pares += 1;
	}
	
	cout << pares << " valores pares" << endl;
	
	
	
	return 0;
}
