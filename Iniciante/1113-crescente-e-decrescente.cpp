#include<iostream>
#include<string>

using namespace std;

int main(){
	int x, y;
	string CRESCENTE = "Crescente";
	string DECRESCENTE = "Decrescente";
	
	while(1){
		cin >> x >> y;
		if(x > y){
			cout << DECRESCENTE << endl;
		} else if (x == y){
			return -1;
		} else {
			cout << CRESCENTE << endl;
		}
	}
	
	return 0;
}
