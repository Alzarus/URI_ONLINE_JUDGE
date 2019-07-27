#include<iostream>

using namespace std;

int main(){
	int array[100], indiceMaior = 0, maior = 0;
	
	for(int i = 0; i < 100; i++){
		cin >> array[i];
		if(array[i] >= maior){
			maior = array[i];
			indiceMaior = i;
		}
	}	
	
	cout << maior << endl;
	cout << indiceMaior+1 << endl;
	
	return 0;
}
