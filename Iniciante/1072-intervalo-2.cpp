#include<iostream>

using namespace std;

int main(){
	int n, in = 0, out = 0;
	
	cin >> n;
	
	if(n < 0 || n > 10000)
		return -1;
	
	int arr[n];
	
	for(int i = 0; i < n; i ++){
		cin >> arr[i];
		if(arr[i] >= 10 && arr[i] <= 20){
			in += 1;
		} else {
			out += 1;
		}
	}
	
	cout << in << " in" << endl;
	cout << out << " out" << endl;
	
	return 0;
}
