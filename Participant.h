#pragma once
#include <iostream>
#include <string>
using namespace std;
class Participant
{
private:
	char* numeIntreg;
	int numarmaximcaractere;
	long dataNasterii;
	string CNP;
	string ID;
public:
	Participant();
	Participant(char* numeIntreg, int numarmaximcaractere, long dataNasterii, string CNP, string ID);
	Participant(const Participant& p);
	~Participant();
	Participant& operator=(const Participant& b);
	friend ostream& operator<<(ostream& out, Participant a);
	friend istream& operator>>(istream& in, Participant& a);
	char* getnumeIntreg();
	int getnumarmaximdecaractere();
	void setnumarmaximcaractere(int a);
	void setnumeIntreg(char* n);
	long getdataNasterii();
	void setdataNasterii(long d);
	string getCNP();
	void setCNP(string x);
	string getID();
	void setID(string y);
	bool majorLaMomentulCurent();
	bool numeprealung();

};

