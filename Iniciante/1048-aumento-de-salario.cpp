#include<iostream>

using namespace std;

int main(){
	
	double sal, novoSal, reajuste, percent;
	
	cin >> sal;
	
	if(sal < 0)
		return -1;
	
	if(sal <= 400){
		percent = 0.15;
	} else if(sal > 400 && sal <= 800){
		percent = 0.12;
	} else if(sal > 800 && sal <= 1200){
		percent = 0.1;
	} else if(sal > 1200 && sal <= 2000){
		percent = 0.07;
	} else {
		percent = 0.04;
	}
	
	novoSal = sal + (sal * percent);
	reajuste = novoSal - sal;
	
	printf("Novo salario: %.2lf\n", novoSal);
	//cout << "Novo salario: " << novoSal << endl;
	printf("Reajuste ganho: %.2lf\n", reajuste);
	//cout << "Reajuste ganho: " << reajuste << endl;
	cout << "Em percentual: " << percent * 100 << " %" << endl;
	
	
	return 0;
}
