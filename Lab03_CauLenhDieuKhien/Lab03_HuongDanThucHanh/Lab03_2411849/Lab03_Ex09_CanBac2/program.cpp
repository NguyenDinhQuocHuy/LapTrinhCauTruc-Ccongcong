#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

using namespace std;

#define EPSILON 10^(-15)

// Khai bao nguyen mau ham

// Khai bao ham main
int main()
{

	_getch();
	return 0;
}

// Dinh nghia ham
double CanBacHai(double n)
{
	double t = n;
	while ((double)abs(t - t / n) <= (t * EPSILON))
	{
		t = (double)(t + n / t) / 2;
	}
	return t
}
