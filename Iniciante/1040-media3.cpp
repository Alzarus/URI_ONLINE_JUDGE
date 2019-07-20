#include<iostream>
#include<iomanip>
#include<cmath>
//2.35 6.55 4 9
//2.48 6.55 4 9
using namespace std;

int main(){
	float n1, n2, n3, n4, ne;
	float m1, m2, m3, m4, mf;
	
	//cin >> setprecision(2) >> n1 >> n2 >> n3 >> n4;
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	
	m1 = n1 * 2;
	m2 = n2 * 3;
	m3 = n3 * 4;
	m4 = n4 * 1;
	
	
	mf = (m1 + m2 + m3 + m4) / 10;
		
	//cout << "Media: " << setprecision(2) << mf << endl;	
	printf("Media: %.1f\n", mf);
	
	if(mf >= 7.0){
		cout << "Aluno aprovado." << endl;
		return 0;
	} else if (mf < 5){
		cout << "Aluno reprovado." << endl;
		return 0;			
	} else {
		cout << "Aluno em exame." << endl;
		//cin >> setprecision(2) >> ne;
		scanf("%f", &ne);
		//cout << "Nota do exame: " << setprecision(2) << ne << endl;
		printf("Nota do exame: %.1f\n", ne);
		
		mf = (mf + ne) / 2;
		
		if(mf >= 5){
			cout << "Aluno aprovado." << endl;
		} else {
			cout << "Aluno reprovado." << endl;
		}
		
		//cout << "Media final: " << setprecision(2) << mf << endl;
		printf("Media final: %.1f\n", mf);
	}

	
	return 0;
}
