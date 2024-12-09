#ifndef MASINA_H
#define MASINA_H

#include <string>

class Masina {
private:
    int *Motor = nullptr;
    int *AnFabr = nullptr;
    std::string nume = "Necunoscut";
    std::string culoare = "Necunoscut";

public:
    // Constructori
    Masina(int motor, int anFabr, const std::string &nume, const std::string &culoare);
    Masina(const Masina &copie);
    Masina(Masina &&mutare) noexcept;

    // Operatori
    Masina &operator=(const Masina &rhs);
    Masina &operator=(Masina &&rhs) noexcept;

    // Destructor
    ~Masina();

    // Metodă de afișare
    void display() const;
};

#endif
