#include<iostream>
#include<string>

using namespace std;

int main(){
	int x, y;
	string PRIMEIRO = "primeiro";
	string SEGUNDO = "segundo";
	string TERCEIRO = "terceiro";
	string QUARTO = "quarto";
	
	
	while(1){
		cin >> x >> y;
		if(x == 0 || y == 0){
			return -1;
		} else {
			if(x > 0 && y > 0){
				cout << PRIMEIRO << endl;
			} else if(x > 0 && y < 0){
				cout << QUARTO << endl;
			} else if(x < 0 && y < 0){
				cout << TERCEIRO << endl;
			} else {
				cout << SEGUNDO << endl;
			}
		}
	}
	
	return 0;
}
