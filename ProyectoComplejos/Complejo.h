#ifndef COMPLEJO_H_
#define COMPLEJO_H_
#include<iostream>

using namespace std;

class Complejo
{
	private:
		double real;
		double imaginario;
	public:
		double getReal();
		double getImaginario();
		
		void setReal(double);
		void setImaginario(double);
		
		Complejo(double, double);
		
		friend Complejo operator*(Complejo, double);
    	friend Complejo operator*(double , Complejo);
    	friend Complejo operator*(Complejo);
    	friend Complejo operator+(Complejo, double);
    	friend Complejo operator+(double, Complejo);
    	friend Complejo operator+(Complejo);
    	
    	void printfComplejo();
};

#endif
