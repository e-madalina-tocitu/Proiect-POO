#include "Participant.h"

Participant::Participant()
{
	numeIntreg=nullptr;
	numarmaximcaractere = 0;
	dataNasterii=11112233;
	CNP=1234567890123;
	ID=1;
}

Participant::Participant(char* numeIntreg, int numarmaximcaractere, long dataNasterii, string CNP, string ID)
{
	this->dataNasterii = dataNasterii;
	this->numarmaximcaractere = numarmaximcaractere;
	this->CNP = CNP;
	this->ID = ID;
	if (numeIntreg != nullptr)
	{
		this->numeIntreg = new char[strlen(numeIntreg) + 1];
		strcpy_s(this->numeIntreg, strlen(numeIntreg) + 1, numeIntreg);
	}
}

Participant::Participant(const Participant& p)
{
	this->dataNasterii = p.dataNasterii;
	this->numarmaximcaractere = p.numarmaximcaractere;
	this->CNP = p.CNP;
	this->ID = p.ID;
	if (numeIntreg != nullptr)
	{
		this->numeIntreg = new char[strlen(p.numeIntreg) + 1];
		strcpy_s(this->numeIntreg, strlen(p.numeIntreg) + 1, p.numeIntreg);
	}
}

Participant& Participant::operator=(const Participant& b)
{
	if (this != &b)
	{
		if (numeIntreg!=nullptr)
			delete[] numeIntreg;
		numeIntreg = new char[strlen(b.numeIntreg) + 1];
		strcpy_s(numeIntreg, strlen(b.numeIntreg) + 1, b.numeIntreg);
		dataNasterii = b.dataNasterii;
		CNP = b.CNP;
		ID = b.ID;
		numarmaximcaractere = b.numarmaximcaractere;
	}
	return *this;
}

Participant::~Participant()
{
	if (numeIntreg != nullptr)
	{
		delete[] numeIntreg;
		numeIntreg = nullptr;
	}
}

ostream& operator<<(ostream& out, Participant a)
{
	if(a.numeIntreg!=nullptr)
	{
		out << "Nume participant:" << a.numeIntreg << endl;
	}
	out << "Numar maxim de caractere" << a.numarmaximcaractere << endl;
	out << "Data nasterii:" << a.dataNasterii << endl;
	out << "CNP:" << a.CNP << endl;
	out << "id:" << a.ID << endl;
	return out;
}

istream& operator>>(istream& in, Participant& a)
{
	cout << "Participant= ";
	string p;
	getline(in, p);
	if (a.numeIntreg)
		delete[] a.numeIntreg;
	a.numeIntreg = new char[strlen(p.c_str()) + 1];
	strcpy_s(a.numeIntreg, strlen(p.c_str()) + 1, p.c_str());
	cout << "Introduce numarul maxim de caractere";
	in >> a.numarmaximcaractere;
	cout << endl;
	cout << "Data nasterii: (de tip aaaa/ll/zz)";
	in >> a.dataNasterii;
	cout << endl;
	cout << "CNP:";
	in >> a.CNP;
	cout << endl;
	return in;
}

char* Participant::getnumeIntreg()
{
	if (numeIntreg != nullptr)
	{
		char* copie = new char[strlen(numeIntreg) + 1];
		strcpy_s(copie, strlen(numeIntreg) + 1, numeIntreg);
		return copie;
	}
}
int Participant::getnumarmaximdecaractere()
{
	return numarmaximcaractere;
}


void Participant::setnumarmaximcaractere(int a)
{
	if (a > 0)
		numarmaximcaractere = a;
}
void Participant::setnumeIntreg(char* n)
{
	if (n != nullptr)
	{
		if (numeIntreg != nullptr)
		{
			delete[] numeIntreg;
			numeIntreg = nullptr;
		}
		numeIntreg = new char[strlen(n) + 1];
		strcpy_s(numeIntreg, strlen(n) + 1, n);
	}
}
long Participant::getdataNasterii()
{
	return dataNasterii;
}

void Participant::setdataNasterii(long d)
{
	this->dataNasterii = d;
}
string Participant::getCNP()
{
	return CNP;
}

void Participant::setCNP(string x)
{
	this->CNP = x;
}
string Participant::getID()
{
	return ID;
}
void Participant::setID(string y)
{
	
	ID = getdataNasterii() / 1000 + log10(getdataNasterii() % 100)+strlen(getnumeIntreg());
}

bool Participant::majorLaMomentulCurent()
{
	int an;
	an = dataNasterii / 10000;
	if (2022 - an >= 18)
		return true;
	return false;
}

bool Participant::numeprealung()
{
	if (strlen(numeIntreg) > numarmaximcaractere)
		return true;
	return false;
}

