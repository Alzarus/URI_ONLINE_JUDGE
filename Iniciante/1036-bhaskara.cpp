#include<iostream>
#include<math.h>

using namespace std;

int main(){
	double a, b, c, delta, result1, result2, second;
	
	cin >> a >> b >> c;
	
	second = (4 * a * c);
	
	delta = (b * b) - second;
	
	if(delta <= 0 || second == 0){
		cout << "Impossivel calcular" << endl;
	} else {
		result1 = ((-1 * b) + sqrt(delta)) / (2 * a);
		result2 = ((-1 * b) - sqrt(delta)) / (2 * a);
		printf("R1 = %.5lf\n", result1);
    	printf("R2 = %.5lf\n", result2);
	}
	
	return 0;
}
