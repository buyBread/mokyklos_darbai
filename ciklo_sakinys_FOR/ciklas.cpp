#include <iostream>
#include <vector>

#define PIRMAS    digits[0]
#define ANTRAS    digits[1]
#define TRECIAS   digits[2]
#define KETVIRTAS digits[3]
#define PENKTAS   digits[4]
#define SESTAS    digits[5]
#define SEPTINTAS digits[6]

int main() {
	setlocale(LC_ALL, "Lithuanian");

	int dalijasi = 0;

	for (int i = 1000000; i < 10000000; ++i) {
		int digits[7];
		auto num = i; // backup

		for (int i = 0; i < 6; ++i) {
			digits[i] = num % 10;
			num /= 10;
		}

		auto sum  = PIRMAS + ANTRAS + TRECIAS + KETVIRTAS + PENKTAS + SESTAS + SEPTINTAS;
		auto prod = PIRMAS * ANTRAS * TRECIAS * KETVIRTAS * PENKTAS * SESTAS * SEPTINTAS;

		if (sum % 7 == 0 && prod % 7 == 0)
			dalijasi++;
	}

	std::cout << "Tokių skaičių yra " << dalijasi << std::endl;
}