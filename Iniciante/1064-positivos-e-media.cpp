#include<iostream>

using namespace std;

int main(){
	
	double arr[6], pos = 0, media = 0;
	
	for(int i = 0; i < 6; i ++){
		cin >> arr[i];
		if(arr[i] > 0){
			pos+=1;
			media += arr[i];
		}		
	}
	
	media /= pos;
	
	cout << pos << " valores positivos" << endl;
	printf("%.1lf\n", media);
	//cout << media << endl;
	
	return 0;
}
