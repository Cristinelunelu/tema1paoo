
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

		void setMotor(int Motor);
		void setAnFabr(int AnFabr);
		void setNume(string nume);
        void setCuloare(string culoare);

		int getMotor() const;
		int getAnFabr() const;
		string getNume() const;
        string getCuloare() const;


};

#endif
