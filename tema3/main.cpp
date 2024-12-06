#include <iostream>
#include <string>
#include "masina.h"
using namespace std;

int main() {
    Masina Audi(1977, 2011, "A4", "Negru");
    Masina Dacia(1363, 2007, "Logan", "Gri");

   
    Audi.display();
    Dacia.display();


    Masina Skoda(1400, 2018, "Octavia", "Alb");
    Skoda = Audi; // Copy assignment
    Skoda.display();


    return 0;
}
