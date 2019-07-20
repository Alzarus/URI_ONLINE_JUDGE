#include<iostream>
#include<string>

using namespace std;

int main(){
	int continua = 1, op;
	int golsInter, golsGremio;
	int vitoriasInter = 0, vitoriasGremio = 0, empates = 0, partidas = 0;
	
	string INTER = "Inter";
	string GREMIO = "Gremio";
	string NOVOGRENAL = "Novo grenal (1-sim 2-nao)";
	string NAOHOUVEVENCEDOR = "Nao houve vencedor";
	
	while(continua){
		cin >> golsInter >> golsGremio;
		partidas += 1;
		if(golsInter > golsGremio){
			vitoriasInter += 1;
		} else if(golsGremio > golsInter){
			vitoriasGremio += 1;
		} else {
			empates += 1;
		}
		cout << NOVOGRENAL << endl;
		cin >> op;
		if(op == 2){
			continua = 0;
		}		
	}
	
	cout << partidas << " grenais" << endl;
	cout << INTER << ":" << vitoriasInter << endl;
	cout << GREMIO << ":" << vitoriasGremio << endl;
	cout << "Empates:" << empates << endl;
	
	if(vitoriasGremio > vitoriasInter){
		cout << GREMIO << " venceu mais" << endl;
	} else if(vitoriasInter > vitoriasGremio){
		cout << INTER << " venceu mais" << endl;
	} else {
		cout << NAOHOUVEVENCEDOR << endl;
	}
	
	return 0;
}
