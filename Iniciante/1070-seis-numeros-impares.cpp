#include<iostream>

using namespace std;

int main(){
	int x;
	
	cin >> x;
	
	if(x%2 == 0)
		x+=1;
		
	for(int i = 0; i < 12; i += 2){
		cout << x + i << endl;
	}
	
	
	
	return 0;
}
