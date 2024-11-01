

#include <iostream>
#include<string>
#include"masina.h"
using namespace std;


int main()
{
    Masina Audi(1977, 2011, "A4", "Negru");
    Masina Dacia(1363, 2007, "Logan", "Gri");
    Masina Mercedes=Audi;

    Audi.display();
    Dacia.display();
    Mercedes.display();
    Masina Renault = move(Audi);
    Renault.display();
    return 0;
}
