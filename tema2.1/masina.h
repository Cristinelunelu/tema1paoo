
#ifndef MASINA_H
#define MASINA_H

#include<string>
using namespace std;

class Masina
{

	private:
		int *Motor=0;
		int *AnFabr=0;
		string nume="ceva";
        	string culoare="culoare";
        //copy constructor
	Masina(const Masina &cop);
	
	//move constructor
    	Masina(Masina &&cop) noexcept;
	Masina& operator=(const Masina& rhs) ;
	public:
     Masina(int motor, int anFabr, const string& nume, const string& culoare) : Motor(new int(motor)), AnFabr(new int(anFabr)), nume(nume), culoare(culoare) {}
        
        //destructor
    ~Masina();

    void display();




};

#endif

