#include<iostream>
#include<string>

using namespace std;

int main(){
	string even = "EVEN";
	string odd = "ODD";
	string positive = "POSITIVE";
	string negative = "NEGATIVE";
	string null = "NULL";
	
	int n;
	
	cin >> n;
	
	if(n < 0 || n > 10000)
		return -1;
	
	int arr[n];
	
	for(int i = 0; i < n; i ++){
		cin >> arr[i];
		
		if(arr[i] == 0){
			cout << null << endl;
		} else if(arr[i] % 2 == 0){
			cout << even;
		} else {
			cout << odd;
		}
		
		if(arr[i] > 0){
			cout << " " << positive << endl;
		} else if(arr[i] < 0){
			cout << " " << negative << endl;
		}
	}
	
	
	return 0;
}
