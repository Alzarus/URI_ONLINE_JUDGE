#include<iostream>

using namespace std;

int main(){
	
	int i = 1, j = 60;
	
	for(int z = j; z >= 0; z-=5){
		cout << "I=" << i << " J=" << j << endl;
		i += 3;
		j -= 5; 
	}
	
	return 0;
}
