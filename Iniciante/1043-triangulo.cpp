#include<iostream>

/*
| b - c | < a < b + c
| a - c | < b < a + c
| a - b | < c < a + b
*/

using namespace std;

int main(){
	double a, b, c, area, perimetro;
	
	cin >> a >> b >> c;
	
	if(a < b + c && b < a + c && c < a + b){
		perimetro = a + b + c;
		printf("Perimetro = %.1lf\n", perimetro);
		//cout << "Perimetro = " << perimetro << endl;
	} else {
		area = ( (a + b) * c ) / 2;
		printf("Area = %.1lf\n", area);
		//cout << "Area = " << area << endl;
	}
	
	return 0;
}
