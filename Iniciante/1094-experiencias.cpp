#include<iostream>
#include<locale>

using namespace std;

int main(){
	int casosTeste, quantia;
	int totalCobaias = 0, totalCoelhos = 0, totalRatos = 0, totalSapos = 0;
	char animal;
	double percentC, percentR, percentS;
	
	cin >> casosTeste;
	
	for(int i = 0; i < casosTeste; i ++){
		cin >> quantia >> animal;
		
		if(quantia < 1 || quantia > 15){
			return -1;
		}
		
		animal = toupper(animal);
		totalCobaias+=quantia;
		
		switch(animal){
			case 'C':
				totalCoelhos+=quantia;
				break;
			case 'R':
				totalRatos+=quantia;
				break;
			case 'S':
				totalSapos+=quantia;
				break;
			default:
				return -1;
				break;
		}
	}
	
	percentC = ((double) totalCoelhos / (double)totalCobaias) * 100;
	percentR = ((double)totalRatos / (double)totalCobaias) * 100;
	percentS = ((double)totalSapos / (double)totalCobaias) * 100;
	
	cout << "Total: " << totalCobaias << " cobaias" << endl;
	cout << "Total de coelhos: " << totalCoelhos << endl;
	cout << "Total de ratos: " << totalRatos << endl;
	cout << "Total de sapos: " << totalSapos << endl;
	printf("Percentual de coelhos: %.2lf %%\n", percentC);
	printf("Percentual de ratos: %.2lf %%\n", percentR);
	printf("Percentual de sapos: %.2lf %%\n", percentS);
		
	return 0;
}
