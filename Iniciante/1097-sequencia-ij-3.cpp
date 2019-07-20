#include<iostream>

using namespace std;

int main(){
	
	int i = 1;
	int j[3] = {7, 6, 5};
	
	for(i; i < 10; i+=2){
		for(int z = 0; z < 3; z++){
			cout << "I=" << i << " J=" << j[z] << endl;
			j[z] += 2;
		}
		
	}
	
	return 0;
}
