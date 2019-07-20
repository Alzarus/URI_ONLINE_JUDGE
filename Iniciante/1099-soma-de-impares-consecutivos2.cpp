#include<iostream>

using namespace std;

int main(){
	
	int n, maior, menor, total = 0;
	
	cin >> n;
	
	int x[n];
	int y[n];
	
	for(int i = 0; i < n; i ++){
		cin >> x[i] >> y[i];
		
		if(x[i] >= y[i]){
			maior = x[i];
			menor = y[i];
		} else {
			maior = y[i];
			menor = x[i];
		}
		
		for(int j = menor+1; j < maior; j++){
			if(j % 2 != 0){
				total += j;
			}
		}
		
		cout << total << endl;
		total = 0;
	}
	
	
	return 0;
}
