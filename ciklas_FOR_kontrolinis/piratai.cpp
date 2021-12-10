#include <iostream>

int paimti_monetas(int piratas) {
    switch(piratas) {
    case 1: // dzekas sperou
        return 2;
    case 2: // melynbarzdis
        return 5;
    case 3: // barbarosa
        return 3;
    default:
        return 0;
    }
}

int main() {
    int monetos;
    int apsilankymas = 0;
    int apsilankymu_skaicius;

    std::cout << "Iveskite monetu skaiciu: "; std::cin >> monetos;
    std::cout << "Iveskite apsilankymu skaicius: "; std::cin >> apsilankymu_skaicius;

    int piratu_grobis[3] = { 0, 0, 0};
    std::string piratu_vardai[3] = {
        "Dzekas Sperou",
        "Melynbarzdis",
        "Kapitonas Barbarosa"
    };

    while (apsilankymas < apsilankymu_skaicius) {
        apsilankymas++;

        if (monetos == 0) {
            break;
        }

        int kodas;

        std::cout << "Koks pirato apsilankymo kodas? (1-3): "; std::cin >> kodas;

        if (paimti_monetas(kodas) == 0) {
            std::cout << "Tokio pirato nera." << std::endl;
            apsilankymas--;
        }
        else {
            if (monetos >= paimti_monetas(kodas)) {
                piratu_grobis[kodas-1] += paimti_monetas(kodas);
                monetos -= paimti_monetas(kodas);
            }
            else {
                piratu_grobis[kodas-1] += monetos;
                monetos -= monetos;
            }
        }
    }

    if (monetos == 0)
        std::cout << "Monetu nebeliko." << std::endl;
    else
        std::cout << "Liko " << monetos << " monetos." << std::endl;
    for (int i = 0; i < 3; ++i) {
        // std::cout << i << std::endl;
        std::cout << piratu_vardai[i] << " paeme " << piratu_grobis[i] << " monetas." << std::endl;
    }
    if (apsilankymas != apsilankymu_skaicius)
        std::cout << "Daugiau piratai i sleptuve nejo, nes baigesi monetos." << std::endl;
}
