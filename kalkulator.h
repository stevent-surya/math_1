#pragma once
class kalkulator
{
public:
	char yesno;
	const double G = 9.8; // Gravitasi 9.8 m/s^2
	const double PI = 3.1415926535; // Nilai pi

	double hitungXmax(double v0, double rad, double g);
	double hitungHmax(double v0, double rad, double g);
	void tampilkanHasil(double xmax, double hmax);

	
};

