

#include <iostream>
#include<string>
#include"masina.h"
using namespace std;

void display(Masina masina)
{
   masina.display();
}

int main()
{
    Masina Audi(1977, 2011, "A4", "Negru");
    Masina Dacia(1363, 2007, "Logan", "Gri");
    Masina Mercedes=Audi;


    Audi.display();
    Dacia.display();
    Mercedes.display();


    Masina Renault=move(Dacia);

    Renault.display();
    return 0;
}
