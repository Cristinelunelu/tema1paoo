

#include <iostream>
#include<string>
#include"masina.h"
using namespace std;

int main()
{
    Masina Audi;
    Masina Dacia;

    Audi.setMotor(1975);
    Audi.setNume("A4");
    Audi.setCuloare("Negru");
    Audi.setAnFabr(2011);

    Dacia.setMotor(1363);
    Dacia.setNume("Logan");
    Dacia.setCuloare("Gri");
    Dacia.setAnFabr(2007);

    cout<<"Marca:Dacia, Model:"<<Dacia.getNume()<<", are un motor de "<<Dacia.getMotor()<<" cm3. An fabricatie: "<<Dacia.getAnFabr()<<", iar culoarea este "<<Dacia.getCuloare()<<endl;
    cout<<"Marca:Audi, Model:"<<Audi.getNume()<<", are un motor de "<<Audi.getMotor()<<" cm3. An fabricatie: "<<Audi.getAnFabr()<<", iar culoarea este "<<Audi.getCuloare()<<endl;
}
