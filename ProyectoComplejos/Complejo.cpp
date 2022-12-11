#include<iostream>
#include"Complejo.h"

using namespace std;		//Tiene un error de compilacion que no supe arreglar

double Complejo::getImaginario()
{
	return imaginario;
}

double Complejo::getReal()
{
	return real;
}

void Complejo::setReal(double real)
{
	this->real = real;
}

void Complejo::setImaginario(double imaginario)
{
	this->imaginario = imaginario;
}

Complejo::Complejo(double real, double imaginario)
{
	setReal(real);
	setImaginario(imaginario);
}

Complejo operator+(Complejo a, double r)
{
	return Complejo(a.real + r, a.imaginario + r);
}

Complejo operator*(Complejo a, double r)
{
	return Complejo(a.real * r, a.imaginario * r);
}

Complejo operator*(double r, Complejo a)
{
	return Complejo(a.real * r, a.imaginario * r);
}

Complejo operator+(double r, Complejo a)
{
	return Complejo(a.real + r, a.imaginario + r);
}

Complejo operator+(Complejo t)
{
	this->real += t.real;
	this->imaginario += t.imaginario;
	return Complejo(this->real, this->imaginario);
}

Complejo operator*(Complejo t)
{
	this->real *= t.real;
	this->imaginario *= t.imaginario;
	return Complejo(this->real, this->imaginario);
}

void Complejo::printfComplejo(){
	cout << real << "," << imaginario << "i";
}
