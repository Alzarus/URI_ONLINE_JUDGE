#include<iostream>
#include<string>

using namespace std;

int main(){
	
	float x, y;
	
	cin >> x >> y;
	
	string q1 = "Q1";
	string q2 = "Q2";
	string q3 = "Q3";
	string q4 = "Q4";
	string ori = "Origem";
	string eix = "Eixo X";
	string eiy = "Eixo Y";
	string ans;
	
	if(x > 0 && y > 0){
		ans = q1;
	} else if(x < 0 && y > 0){
		ans = q2;
	} else if(x < 0 && y < 0){
		ans = q3;
	} else if(x > 0 && y < 0){
		ans = q4;
	} else if( x != 0 && y == 0){
		ans = eix;
	} else if(x == 0 && y != 0){
		ans = eiy;
	} else {
		ans = ori;
	}
	
	cout << ans << endl;

	return 0;
}
