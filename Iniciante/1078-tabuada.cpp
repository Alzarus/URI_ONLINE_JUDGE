#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	if(n < 2 || n > 1000)
		return -1;
		
	for(int i = 1; i < 11; i ++){
		cout << i << " x " << n << " = " << i*n << endl;
	}
	return 0;
}
