
#ifndef MASINA_H
#define MASINA_H

#include<string>
using namespace std;

class Masina
{

	private:
		int *Motor;
		int *AnFabr;
		string nume;
        string culoare;

	public:
    Masina(int Motor, int AnFabr, string nume, string culoare)
        {
            this->Motor=new int(Motor);
            this->AnFabr=new int(AnFabr);
            this->nume=nume;
            this->culoare=culoare;
        }
        //destructor
    ~Masina();

    void display();


    //copy constructor
    Masina(const Masina &cop);
    //move constructor
    Masina(Masina &&cop) noexcept;


};

#endif

