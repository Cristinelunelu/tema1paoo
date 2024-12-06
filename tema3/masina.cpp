#include "masina.h"
#include <iostream>
using namespace std;


Masina::Masina(int motor, int anFabr, const string &nume, const string &culoare)
    : Motor(new int(motor)), AnFabr(new int(anFabr)), nume(nume), culoare(culoare) {}

// Copy constructor
Masina::Masina(const Masina &cop)
    : Motor(new int(*cop.Motor)), AnFabr(new int(*cop.AnFabr)), nume(cop.nume), culoare(cop.culoare) {
    cout << "S-a apelat copy constructor." << endl;
}

// Destructor
Masina::~Masina() {
    delete Motor;
    delete AnFabr;
    cout << "Destructorul a eliberat memoria." << endl;
}

// Copy assignment operator
Masina &Masina::operator=(const Masina &rhs) {
    if (this == &rhs) { // Handle self-assignment
        return *this;
    }

   
    // Copierea valorilor
    Motor = new int(*rhs.Motor);
    AnFabr = new int(*rhs.AnFabr);
    nume = rhs.nume;
    culoare = rhs.culoare;

    cout << "S-a apelat operator= (copy assignment)." << endl;
    return *this;
}



// Metoda pentru afișare
void Masina::display() const {
    cout << "Model: " << nume << ", are un motor de " << *Motor
         << " cm3. An fabricatie: " << *AnFabr << ", iar culoarea este " << culoare << endl;
}
