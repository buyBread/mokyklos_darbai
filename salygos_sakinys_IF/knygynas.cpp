#include <iostream>
#include <vector>

class c_knyga {
public:
	int kodas;
	int parduota;

	c_knyga(int kodas, int parduota) {
		this->kodas    = kodas;
		this->parduota = parduota;
	}
	~c_knyga() {}
};

int main() {
	setlocale(LC_ALL, "Lithuanian");
	
	int kodas, parduota;
	
	std::cout << "Įveskite pirmosios knygos kodą ir parduotų egzempliurių skaičių: "; std::cin >> kodas >> parduota;
	auto knyga1 = new c_knyga(kodas, parduota);
	std::cout << "Įveskite antrosios knygos kodą ir parduotų egzempliurių skaičių: "; std::cin >> kodas >> parduota;
	auto knyga2 = new c_knyga(kodas, parduota);
	std::cout << "Įveskite trečiosios knygos kodą ir parduotų egzempliurių skaičių: "; std::cin >> kodas >> parduota;
	auto knyga3 = new c_knyga(kodas, parduota);

	int didziausias_egzemplioriu_skaicius = knyga1->parduota;

	if (knyga2->parduota > didziausias_egzemplioriu_skaicius)
		didziausias_egzemplioriu_skaicius = knyga2->parduota;

	if (knyga3->parduota > didziausias_egzemplioriu_skaicius)
		didziausias_egzemplioriu_skaicius = knyga3->parduota;

	std::vector<int> populiaruaisios_knygos;

	if (knyga1->parduota >= didziausias_egzemplioriu_skaicius)
		populiaruaisios_knygos.push_back(knyga1->kodas);

	if (knyga2->parduota >= didziausias_egzemplioriu_skaicius)
		populiaruaisios_knygos.push_back(knyga2->kodas);

	if (knyga3->parduota >= didziausias_egzemplioriu_skaicius)
		populiaruaisios_knygos.push_back(knyga3->kodas);

	std::cout << "Populiariausios knygos kodas(-ai): ";
	
	for (int i = 0; i < populiaruaisios_knygos.size(); ++i) {
		std::cout << populiaruaisios_knygos[i];
		
		if (i + 1 != populiaruaisios_knygos.size()) {
			std::cout << ", ";
		}
	}

	std::cout << std::endl;
}