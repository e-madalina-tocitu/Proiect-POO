#include "DetaliiEveniment.h"
float DetaliiEveniment::taxaOnline = 3;
DetaliiEveniment::DetaliiEveniment() :idEveniment()
{
	numeEveniment = "N/A";
	adresaEveniment = "N/A";
	numarLocuriPeRand = 0;
	numarZone = 0;
	numarRanduri = 0;
	zi = 1;
	luna = 1;
	an = 2021;
	oraIncepere = 21;
	durata = 0;
	pretEveniment = 0;
}

DetaliiEveniment::DetaliiEveniment(int idEveniment, string numeEveniment, string adresaEveniment, int numarLocuriPeRand, int numarZone,
	int numarRanduri, int zi, int luna, int an, float oraIncepere, float durata, float pretEveniment) :idEveniment(idEveniment)
{
	this->numeEveniment = numeEveniment;
	this->adresaEveniment = adresaEveniment;
	this->numarLocuriPeRand = numarLocuriPeRand;
	this->numarZone = numarZone;
	this->numarRanduri = numarRanduri;
	this->zi = zi;
	this->luna = luna;
	this->an = an;
	this->oraIncepere = oraIncepere;
	this->durata = durata;
	this->pretEveniment = pretEveniment;
}

DetaliiEveniment::DetaliiEveniment(const DetaliiEveniment& e) :idEveniment(e.idEveniment)
{
	this->numeEveniment = e.numeEveniment;
	this->adresaEveniment = e.adresaEveniment;
	this->numarLocuriPeRand = e.numarLocuriPeRand;
	this->numarZone = e.numarZone;
	this->numarRanduri = e.numarRanduri;
	this->zi = e.zi;
	this->luna = e.luna;
	this->an = e.an;
	this->oraIncepere = e.oraIncepere;
	this->durata = e.durata;
	this->pretEveniment = e.pretEveniment;
}

DetaliiEveniment::~DetaliiEveniment()
{

}

ostream& operator<<(ostream& out, DetaliiEveniment a)
{

	out << "Nume Eveniment:" << a.numeEveniment;
	out << endl;
	out << "Adresa eveniment: " << a.adresaEveniment << endl;
	out << "Numar locuri pe rand: " << a.numarLocuriPeRand << endl;
	out << "Numar randuri: " << a.numarRanduri << endl;
	out << "Zi:" << a.zi << endl;
	out << "Luna: " << a.luna << endl;
	out << "An:" << a.an << endl;
	out << "Ora de incepere:" << a.oraIncepere << endl;
	out << "Durata:" << a.durata<<endl;
	out << "Pretul evenimentului:" << a.pretEveniment << endl;
	return out;
}

istream& operator>>(istream& in, DetaliiEveniment& a)
{
	cout << "Nume Eveniment:";
	in >> a.numeEveniment;
	cout << endl;
	cout << "Adresa eveniment: ";
	in >> a.adresaEveniment;
	cout << endl;
	cout << "Numar locuri pe rand: ";
	in >> a.numarLocuriPeRand;
	cout << endl;
	cout << "Numar randuri: ";
	in >> a.numarRanduri;
	cout << endl;
	cout << "Zi:";
	in >> a.zi;
	cout << endl;
	cout << "Luna: ";
	in >> a.luna;
	cout<< endl;
	cout << "An:";
	in >> a.an;
	cout<< endl;
	cout << "Ora de incepere (de forma hh,mm):";
	in >> a.oraIncepere;
	cout<< endl;
	cout << "Durata:(in minute)";
	in>> a.durata;
	cout << endl;
	cout << "Pretul evenimentului:";
	in >> a.pretEveniment;
	cout<< endl;
	return in;
}

string DetaliiEveniment::getNumeEveniment()
{
	return numeEveniment;
}

void DetaliiEveniment::setNumeEveniment(string e)
{
	this->numeEveniment = e;
}

string DetaliiEveniment::getAdresaEveniment()
{
	return adresaEveniment;
}

void DetaliiEveniment::setAdresaEveniment(string a)
{
	this->adresaEveniment = a;
}

int DetaliiEveniment::getNumarLocuriPeRand()
{
	return numarLocuriPeRand;
}

void DetaliiEveniment::setNumarLocuriPeRand(int l)
{
	if (l > 0)
	{
		numarLocuriPeRand = l;
	}
}

int DetaliiEveniment::getNumarZone()
{
	return numarZone;
}

void DetaliiEveniment::setNumarZone(int z)
{
	if (z > 0)
	{
		numarZone = z;
	}
}

int DetaliiEveniment::getNumarRanduri()
{
	return numarRanduri;
}

void DetaliiEveniment::setNumarRanduri(int r)
{
	if (r > 0)
	{
		numarRanduri = r;
	}
}

int DetaliiEveniment::getZi()
{
	return zi;
}

void DetaliiEveniment::setZi(int z)
{
	if (z > 0)
	{
		zi= z;
	}
}

int DetaliiEveniment::getLuna()
{
	return luna;
}

void DetaliiEveniment::setLuna(int l)
{
	if (l > 0)
	{
		luna = l;
	}
}

int DetaliiEveniment::getAn()
{
	return an;
}

void DetaliiEveniment::setAn(int a)
{
	if (a > 0)
	{
		an = a;
	}
}

float DetaliiEveniment::getoraIncepere()
{
	return oraIncepere;
}

void DetaliiEveniment::setoraIncepere(float o)
{
	if (0 > 0)
	{
		oraIncepere = 0;
	}
}

float DetaliiEveniment::getdurata()
{
	return durata;
}

void DetaliiEveniment::setdurata(float d)

	{
		if (d > 0)
		{
			durata = d;
		}
	}


float DetaliiEveniment::getpretEveniment()
{
	return durata;
}

void DetaliiEveniment::setpretEveniment(float p)
{
	if (p > 0)
	{
		pretEveniment = p;
	}
}

float DetaliiEveniment::gettaxaOnline()
{
	return taxaOnline;
}

 void DetaliiEveniment::settaxaOnline(float t)
{
	if (t > 0)
	{
		taxaOnline = t;
	}
}

float DetaliiEveniment::pretFinal()
{
	float pf;
	pf = pretEveniment + taxaOnline;
	return pf;
}

int DetaliiEveniment::nrLocuriTotale()
{
	return numarLocuriPeRand * numarRanduri * numarZone;
	
}

bool DetaliiEveniment::operator==(DetaliiEveniment a)
{
	if (this->zi == a.zi)
	{
		if (this->luna == a.luna)
		{
			if (this->an == a.an)
			{
				if (this->oraIncepere == a.oraIncepere)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool DetaliiEveniment::operator<=(DetaliiEveniment b)
{
	if (this->pretEveniment <= b.pretEveniment)
		return true;
	return false;
}

