#include<iostream>

using namespace std;

int main(){
	
	double i = 0;
	double j[3] = {1, 2, 3};
	
	for(i; i <= 2; i+=0.2){
		for(int z = 0; z < 3; z++){
			cout << "I=" << i << " J=" << j[z] << endl;
			j[z] += 0.2;
		}
		
	}
	
	return 0;
}
