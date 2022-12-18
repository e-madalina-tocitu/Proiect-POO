#pragma once
#include <iostream>
#include <string>
using namespace std;
class DetaliiEveniment
{
private:
	const int idEveniment;
	string numeEveniment;
	string adresaEveniment;
	int numarLocuriPeRand;
	int numarZone;
	int numarRanduri;
	int zi;
	int luna;
	int an;
	float oraIncepere;
	float durata;
	float pretEveniment;
	static float taxaOnline;
public: 
	DetaliiEveniment();
	DetaliiEveniment(int idEveniment, string numeEveniment, string adresaEveniment, int numarLocuriPeRand, int numarZone,
		int numarRanduri, int zi, int luna, int an, float oraIncepere, float durata, float pretEveniment);
	DetaliiEveniment(const DetaliiEveniment& e);
	~DetaliiEveniment();
	friend ostream& operator<<(ostream& out, DetaliiEveniment a);
	friend istream& operator>>(istream& in, DetaliiEveniment& a);
	string getNumeEveniment();
	void setNumeEveniment(string e);
	string getAdresaEveniment();
	void setAdresaEveniment(string a);
	int getNumarLocuriPeRand();
	void setNumarLocuriPeRand(int l);
	int getNumarZone();
	void setNumarZone(int z);
	int getNumarRanduri();
	void setNumarRanduri(int r);
	int getZi();
	void setZi(int z);
	int getLuna();
	void setLuna(int l);
	int getAn();
	void setAn(int a);
	float getoraIncepere();
	void setoraIncepere(float o);
	float getdurata();
	void setdurata(float d);
	float getpretEveniment();
	void setpretEveniment(float p);
	float pretFinal();
	int nrLocuriTotale();
	bool operator==(DetaliiEveniment a);
	bool operator<=(DetaliiEveniment b);
};
float DetaliiEveniment::taxaOnline = 3;

