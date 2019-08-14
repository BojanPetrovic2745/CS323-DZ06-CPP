#include "Kupa.h"
#include <math.h>
Kupa::Kupa()
{
    //ctor
}

Kupa::~Kupa()
{
    //dtor
}

void Kupa::setPoluprecnik(double r){
    this->r = r;
}

double Kupa::getPoluprecnik(){
    return r;
}

void Kupa::setVisina(double h){
    this->h = h;
}

double Kupa::getVisina(){
    return h;
}

double Kupa::baza(double r){

    double baza = pow(r,2) * PI;

    return baza;

}

double Kupa::omotac(double r, double h){


    int izvodnicaKvadrat =  pow(r,2) + pow(h,2);

    return r * PI * sqrt(izvodnicaKvadrat);

}
