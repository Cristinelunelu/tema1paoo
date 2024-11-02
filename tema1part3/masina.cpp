#include <iostream>
#include "masina.h"
using namespace std;



Masina::~Masina()
{
    cout << "Destructorul a eliberat memoria"<<endl;
}

Masina::Masina(const Masina &cop)
{
    Motor=new int(*cop.Motor);
    AnFabr=new int(*cop.AnFabr);
    nume=cop.nume;
    culoare=cop.culoare;
    cout<<"s-a apelat copy constructor"<<endl;
}

Masina::Masina(Masina &&cop) noexcept
{
    Motor=cop.Motor;
    AnFabr=cop.AnFabr;
    cop.AnFabr=nullptr;
    cop.Motor=nullptr;
    nume=move(cop.nume);
    culoare=move(cop.culoare);
    cout<<"s-a apelat move constructor"<<endl;
}

void Masina::display()
{
      cout<<"Model:"<<nume<<", are un motor de "<<*Motor<<" cm3. An fabricatie: "<<*AnFabr<<", iar culoarea este "<<culoare<<endl;
}
