#include "Bilet.h"

Bilet::Bilet()
{
	numarBilete=0;
	zone=1;
	randuri=nullptr;
	locuri=nullptr;
}
Bilet::Bilet(int numarBilete, string zone, int* randuri, int* locuri)
{
	this->numarBilete = numarBilete;
	this->zone = zone;
	if (randuri != nullptr && numarBilete > 0)
	{
		this->randuri = new int[numarBilete];
		for (int i = 0; i < numarBilete; i++)
		{
			this->randuri[i] = randuri[i];
		}
	}
	else
	{
		this->randuri = nullptr;
	}
	if (locuri != nullptr&&numarBilete>0)
	{
		this->locuri = new int[numarBilete];
		for (int i = 0; i < numarBilete; i++)
		{
			this->locuri[i] = locuri[i];
		}
	}
	else
	{
		this->locuri = nullptr;
	}
}

Bilet::Bilet(const Bilet& b)
{
	this->numarBilete = b.numarBilete;
	this->zone = b.zone;
	if (b.randuri != nullptr && b.numarBilete > 0)
	{
		this->randuri = new int[b.numarBilete];
		for (int i = 0; i < b.numarBilete; i++)
		{
			this->randuri[i] = b.randuri[i];
		}
	}
	else
	{
		this->randuri = nullptr;
	}
	if (b.locuri != nullptr && b.numarBilete > 0)
	{
		this->locuri = new int[b.numarBilete];
		for (int i = 0; i < b.numarBilete; i++)
		{
			this->locuri[i] = b.locuri[i];
		}
	}
	else
	{
		this->locuri = nullptr;
	}
}

Bilet& Bilet::operator=(const Bilet& b)
{
	if (this != &b)
	{
		numarBilete = b.numarBilete;
		zone = b.zone;
		if (randuri != nullptr)
			delete[] randuri;
		randuri = new int[numarBilete];
		for (int i = 0; i < numarBilete; i++)
			randuri[i] = b.randuri[i];
		if (locuri != nullptr)
			delete[] locuri;
		locuri = new int[numarBilete];
		for (int i = 0; i < numarBilete; i++)
			locuri[i] = b.locuri[i];
	}
	return *this;
}

Bilet::~Bilet()
{
	if (this->locuri != nullptr)
	{
		delete[] this->locuri;
		this->locuri = nullptr;
	}
	if (this->randuri != nullptr)
	{
		delete[] this->randuri;
		this->locuri = nullptr;
	}
}

ostream& operator<<(ostream& out, Bilet a)
{
	out << "Numar bilete:" << a.numarBilete << endl;
	out << " Zone:" << a.zone << endl;
	if (a.locuri != nullptr)
	{
		out << "Locuri:" << a.locuri << endl;
	}
	if (a.randuri != nullptr)
	{
		out << "Randuri" << a.randuri << endl;
	}
	return out;
}

istream& operator>>(istream& in, Bilet& a)
{
	
	
	cout << "Numar blete:";
	in >> a.numarBilete;
	cout << endl;
	cout << "Locuri= ";
	for (int i = 0; i < a.numarBilete; i++)
		in >> a.locuri[i];
	cout << endl;
	cout << "Randuri= ";
	for (int i = 0; i < a.numarBilete; i++)
		in >> a.randuri[i];
	cout << endl;
	cout << "zone=";
	in >> a.zone;
	cout << endl;
	return in;
}

int Bilet::getnumarBilete()
{
	return numarBilete;
}
void Bilet::setnumarBilete(int b)
{
	if (b > 0)
		numarBilete = b;
}
string Bilet::getzone()
{
	return zone;
}

void Bilet::setzone(string z)
{
	this->zone = z;
}


int* Bilet::getranduri()
{
	return randuri;
}

void Bilet::setRanduri(int* r)
{
	if (r != nullptr)
	{
		for (int i = 0; i < numarBilete; i++)
			randuri[i] = r[i];
	}
}
void Bilet::setLocuri(int* l)
{
	if (l != nullptr)
	{
		for (int i = 0; i < numarBilete; i++)
			locuri[i] = l[i];
	}
}
int* Bilet::getlocuri()
{
	return locuri;
}

 float Bilet::nrMediuBilete(Bilet* participant, int nrBilete)
{
	float suma = 0;
	if (participant != nullptr && nrBilete > 0)
	{
		for (int i = 0; i < nrBilete; i++)
		{
			suma += participant[i].getnumarBilete();
		}
		suma /= nrBilete;
	}
	return suma;
}

bool Bilet::locuriVecine()
{
	for (int i = 0; i < numarBilete; i++)
		if (locuri[i + 1] - locuri[i] != 1)
			return false;
	return true;
}

bool Bilet::randuriConsecutive()
{
	for (int i = 0; i < numarBilete; i++)
		if (randuri[i + 1] - randuri[i] != 1)
			return false;
	return true;
}