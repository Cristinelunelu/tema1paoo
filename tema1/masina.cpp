
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

