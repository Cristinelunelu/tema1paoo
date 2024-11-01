
#ifndef MASINA_H
#define MASINA_H

#include<string>
using namespace std;

class Masina
{

	private:
		int Motor;
		int AnFabr;
		string nume;
        string culoare;

	public:
    Masina(int motor, int anFabr, string nume, string culoare)
        : Motor(motor), AnFabr(anFabr), nume(nume), culoare(culoare) {
        }
    ~Masina();
		void setMotor(int Motor);
		void setAnFabr(int AnFabr);
		void setNume(string nume);
        void setCuloare(string culoare);

		int getMotor() const;
		int getAnFabr() const;
		string getNume() const;
        string getCuloare() const;



void display()
    {
            cout<<"Model:"<<getNume()<<", are un motor de "<<getMotor()<<" cm3. An fabricatie: "<<getAnFabr()<<", iar culoarea este "<<getCuloare()<<endl;

    }

    //copy constructor
    Masina(const Masina &cop);
    //move constructor
    Masina(Masina &&cop) noexcept;


};

#endif

