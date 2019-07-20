#include<iostream>
#include<string>

using namespace std;

int main(){
	int x;
	string IMPOSSIVEL = "divisao impossivel";
	
	cin >> x;
	
	int a[x];
	int b[x];
	double result;
	
	for(int i = 0; i < x; i ++){
		cin >> a[i] >> b[i];
		if(a[i] != 0 && b[i] == 0){
			cout << IMPOSSIVEL << endl;
		} else {
			result = (double) a[i] / (double) b[i];
			printf("%.1lf\n", result);
		}
	}
	

	return 0;
}
