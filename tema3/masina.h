#ifndef MASINA_H
#define MASINA_H

#include <string>
using namespace std;

class Masina {
private:
    int *Motor = nullptr;
    int *AnFabr = nullptr;
    string nume = "ceva";
    string culoare = "culoare";

public:
    // Constructor
    Masina(int motor, int anFabr, const string &nume, const string &culoare);

    // Copy constructor
    Masina(const Masina &cop);

    // Move constructor
    Masina(Masina &&cop) noexcept;

    // Destructor
    ~Masina();

    // Copy assignment operator
    Masina &operator=(const Masina &rhs);


   
    void display() const;
};

#endif
