#pragma once
#include <iostream>
#include <string>
using namespace std;
class Bilet
{
private:
	int numarBilete;
	string zone;
	int* randuri;
	int* locuri;
public:
	Bilet();
	Bilet(int numarBilete, string zone, int* randuri, int* locuri);
	Bilet(const Bilet& b);
	Bilet& operator=(const Bilet& b);
	~Bilet();
	friend ostream& operator<<(ostream& out, Bilet a);
	friend istream& operator>>(istream& in, Bilet& a);
	int getnumarBilete();
	void setnumarBilete(int b);
	void setzone(string z);
	string getzone();
	void setRanduri(int* r);
	int* getranduri();
	void setLocuri(int* l);
	int* getlocuri();
	static float nrMediuBilete(Bilet* participant, int nrBilete);
	bool locuriVecine();
	bool randuriConsecutive();
};

