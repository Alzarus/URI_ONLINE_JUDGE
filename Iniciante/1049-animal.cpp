#include<iostream>
#include<string>
#include<bits/stdc++.h>
//https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/

using namespace std;

int main(){
	string pal1, pal2, pal3, resposta;
	
	string VERTEBRADO = "vertebrado";
	string INVERTEBRADO = "invertebrado";
	
	string AVE = "ave";
	string MAMIFERO = "mamifero";
	string INSETO = "inseto";
	string ANELIDEO = "anelideo";
	
	string CARNIVORO = "carnivoro";
	string ONIVORO = "onivoro";
	string HERBIVORO = "herbivoro";
	string HEMATOFAGO = "hematofago";
	
	string AGUIA = "aguia";
	string POMBA = "pomba";
	string HOMEM = "homem";
	string VACA = "vaca";
	string PULGA = "pulga";
	string LAGARTA = "lagarta";
	string SANGUESSUGA = "sanguessuga";
	string MINHOCA = "minhoca";
	
	cin >> pal1 >> pal2 >> pal3;
	transform(pal1.begin(), pal1.end(), pal1.begin(), ::tolower);
	transform(pal2.begin(), pal2.end(), pal2.begin(), ::tolower);
	transform(pal3.begin(), pal3.end(), pal3.begin(), ::tolower);
	
	if(pal1 == VERTEBRADO){
		if(pal2 == AVE){
			if(pal3 == CARNIVORO){
				resposta = AGUIA;
			} else if(pal3 == ONIVORO){
				resposta = POMBA;
			} else {
				return -1;
			}
		} else if(pal2 == MAMIFERO){
			if(pal3 == ONIVORO){
				resposta = HOMEM;
			} else if(pal3 == HERBIVORO){
				resposta = VACA;
			} else {
				return -1;
			}
		} else {
			return -1;
		}
	} else if (pal1 == INVERTEBRADO){
		if(pal2 == INSETO){
			if(pal3 == HEMATOFAGO){
				resposta = PULGA;
			} else if(pal3 == HERBIVORO){
				resposta = LAGARTA;
			} else {
				return -1;
			}
		} else if(pal2 == ANELIDEO){
			if(pal3 == HEMATOFAGO){
				resposta = SANGUESSUGA;
			} else if(pal3 == ONIVORO){
				resposta = MINHOCA;
			} else {
				return -1;
			}
		} else {
			return -1;
		}
	} else {
		return -1;
	}
	
	cout << resposta << endl;
	
	return 0;
}
