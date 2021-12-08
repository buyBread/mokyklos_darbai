#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846

int main() {
	setlocale(LC_ALL, "Lithuanian");
	
	int litrai;
	std::cout << "Įveskite skysčio kiekį: "; std::cin >> litrai;

	int r, h;
	std::cout << "Įveskite indo spindulį ir aukštį: "; std::cin >> r >> h;

	float V = PI * pow(r, 2) * h;
		  V = V / 1000;

	bool tilpo = (litrai <= V) ? true : false;

	std::cout << "Indo tūris: " << V << " litro." << std::endl;
	std::cout << "Skystis inde " << (tilpo ? "telpa" : "netelpa") << "." << std::endl;
	std::cout << 
		(tilpo ? "Laisvos vietos liko: " : "Nesutilpo: ") <<
		(tilpo ? float(V - litrai) : float(litrai - V)) <<
		" litro." << std::endl;
}