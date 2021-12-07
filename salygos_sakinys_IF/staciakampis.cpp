#include <iostream>
#include <array>

class c_staciakampis {
private:
	int a, b;
public:
	c_staciakampis(int a, int b) {
		this->a = a;
		this->b = b;
	}
	~c_staciakampis() {}

	float get_area() {
		return a * b;
	}
};

int main()
{
	int a, b;
	
	std::cout << "Įveskite pirmoj stačiakampio kraštines (a, b): "; std::cin >> a >> b;
	auto rectangle1 = new c_staciakampis(a, b);
	std::cout << "Įveskite antrojo stačiakampio kraštines (a, b): "; std::cin >> a >> b;
	auto rectangle2 = new c_staciakampis(a, b);
	std::cout << "Įveskite trečiojo stačiakampio kraštines (a, b): "; std::cin >> a >> b;
	auto rectangle3 = new c_staciakampis(a, b);

	if (rectangle1->get_area() < rectangle2->get_area() &&
		rectangle1->get_area() < rectangle3->get_area()) {
		std::cout << "Mažiausią plotą turi pirmas stačiakampis: " << rectangle1->get_area() << std::endl;
	}

	if (rectangle2->get_area() < rectangle1->get_area() &&
		rectangle2->get_area() < rectangle3->get_area()) {
		std::cout << "Mažiausią plotą turi antras stačiakampis: " << rectangle1->get_area() << std::endl;
	}

	if (rectangle3->get_area() < rectangle1->get_area() &&
		rectangle3->get_area() < rectangle2->get_area()) {
		std::cout << "Mažiausią plotą turi trečias stačiakampis: " << rectangle1->get_area() << std::endl;
	}
}