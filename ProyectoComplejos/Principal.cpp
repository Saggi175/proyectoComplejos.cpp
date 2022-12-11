#include <iostream>
#include"Complejo.h"

using namespace std;

void complejo()
{
	Complejo c(18, 15), c1(15, 20), c3(0,0);
	c3 = c + 5;
	c3.printfComplejo();
}

int main(int argc, char** argv)
{
	complejo();
	return 0;
}
