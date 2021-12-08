#include <iostream>

// tik, kad pačiam nesimaišytu
void reverse(int array[], int i) {
	if (i == 6)
		return; // baigti rekursija pasiekus 6

	int element = array[i]; // backup
	reverse(array, i+1); // recursive call
	array[6-i-1] = element; // set
}

int main() {
	int num;
	std::cout << "Įvesti šešiaženkli skaičių: "; std::cin >> num;

	while (num > 999999) {
		std::cout << "Numeris per didelis, įveskite iš naujo: "; std::cin >> num;
	}

	int digits[6];

	for (int i = 0; i < 6; ++i) {
		digits[i] = num % 10;
		num /= 10;
	}

	reverse(digits, 0);

	// Permečiau kitas užduotis ten praktiškai to pačio prašo ir su šitu sprendimu tai čia tik šitas dvi linijas keisti,
	// tai leisiu sau nedaryti tų likusių variantų.
	std::cout << "Kraštinių skaičių suma: " << digits[0] + digits[5] << std::endl;
	std::cout << "Likusiųjų skaičių sandauga: " << digits[1] * digits[2] * digits[3] * digits[4] << std::endl;
}