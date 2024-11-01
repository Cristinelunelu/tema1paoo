#include <iostream>
#include "masina.h"
using namespace std;


void Masina::setMotor(int Motor) {
	this->Motor = Motor;
}

void Masina::setAnFabr(int AnFabr) {
	this->AnFabr = AnFabr;
}

void Masina::setNume(string nume){
    this->nume = nume;
}

void Masina::setCuloare(string culoare){
    this->culoare = culoare;
}
int Masina::getMotor() const{
	return Motor;
}

int Masina::getAnFabr() const{
	return AnFabr;
}

string Masina::getNume() const{
	return nume;
}

string Masina::getCuloare() const{
	return culoare;
}

Masina::~Masina()
{
    cout << "Destructorul a eliberat memoria"<<endl;
}

Masina::Masina(const Masina &cop)
{
    Motor=cop.Motor;
    AnFabr=cop.AnFabr;
    nume=cop.nume;
    culoare=cop.culoare;
    cout<<"s-a apelat copy constructor"<<endl;
}

Masina::Masina(Masina &&cop) noexcept
{
    Motor=move(cop.Motor);
    AnFabr=move(cop.AnFabr);
    nume=move(cop.nume);
    culoare=move(cop.culoare);
    cout<<"s-a apelat move constructor"<<endl;
}

