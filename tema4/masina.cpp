#include "masina.h"
#include <iostream>
#include <utility>

Masina::Masina(int motor, int anFabr, const std::string &nume, const std::string &culoare)
    : Motor(new int(motor)), AnFabr(new int(anFabr)), nume(nume), culoare(culoare) {}

Masina::Masina(const Masina &copie)
    : Motor(new int(*copie.Motor)), AnFabr(new int(*copie.AnFabr)), nume(copie.nume), culoare(copie.culoare) {
    std::cout << "S-a apelat copy constructor.\n";
}

Masina::Masina(Masina &&mutare) noexcept
    : Motor(mutare.Motor), AnFabr(mutare.AnFabr), nume(std::move(mutare.nume)), culoare(std::move(mutare.culoare)) {
    mutare.Motor = nullptr;
    mutare.AnFabr = nullptr;
    std::cout << "S-a apelat move constructor.\n";
}

Masina &Masina::operator=(const Masina &rhs) {
    if (this == &rhs) return *this;

    delete Motor;
    delete AnFabr;

    Motor = new int(*rhs.Motor);
    AnFabr = new int(*rhs.AnFabr);
    nume = rhs.nume;
    culoare = rhs.culoare;

    std::cout << "S-a apelat operatorul de copiere.\n";
    return *this;
}

Masina &Masina::operator=(Masina &&rhs) noexcept {
    if (this == &rhs) return *this;

    delete Motor;
    delete AnFabr;

    Motor = rhs.Motor;
    AnFabr = rhs.AnFabr;
    nume = std::move(rhs.nume);
    culoare = std::move(rhs.culoare);

    rhs.Motor = nullptr;
    rhs.AnFabr = nullptr;

    std::cout << "S-a apelat operatorul de mutare.\n";
    return *this;
}

Masina::~Masina() {
    delete Motor;
    delete AnFabr;
    std::cout << "Destructorul a eliberat memoria.\n";
}

void Masina::display() const {
    std::cout << "Model: " << nume
              << ", Motor: " << (Motor ? std::to_string(*Motor) : "None")
              << ", An fabricatie: " << (AnFabr ? std::to_string(*AnFabr) : "None")
              << ", Culoare: " << culoare << '\n';
}
