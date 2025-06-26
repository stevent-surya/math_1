#include "kalkulator.h"
#include <math.h>
#include <iostream>

using namespace std;

double kalkulator::hitungXmax(double v0, double rad, double g)
{
	return (pow(v0, 2) * sin(2 * rad)) / g;
}

double kalkulator::hitungHmax(double v0, double rad, double g)
{
	return (pow(v0, 2) * pow(sin(rad), 2)) / (2 * g);
}

void kalkulator::tampilkanHasil(double xmax, double hmax)
{
	cout << "Jarak Maksimum (xmax): " << xmax << " meter" << endl;
	cout << "Ketinggian Maksimum (hmax): " << hmax << " meter" << endl;
}
