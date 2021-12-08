#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int num;
	std::cout << "Įveskite bet kokį skaicių: "; std::cin >> num;

	std::vector<int> digits;

	while (num > 0) {
		int digit = num % 10;

		if (digit > 3 && digit < 9 && digit != 5)
			digits.push_back(digit);

		num /= 10;
	}

	std::reverse(digits.begin(), digits.end());

	int prod = 1;

	for (auto digit : digits) {
		prod *= digit;
	}

	std::cout << "Skaičiaus skaitmenų kurie didesni už 3 ir mažesni už 9, bet nelygus 5 yra " << digits.size() << std::endl;
	std::cout << "Jū sandauga: " << prod << std::endl;
}