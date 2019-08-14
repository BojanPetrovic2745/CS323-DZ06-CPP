#include <iostream>
#include "Kupa.h"
#include <math.h>
using namespace std;

int main()
{

    Kupa kupa;

    double r;
    double h;







    cout << "Unesi poluprecnik kupe: ";
    cin >> r;
    cout << "Unesi visinu kupe: ";
    cin >> h;

    kupa.setPoluprecnik(r);
    kupa.setVisina(h);

    int izvodnicaKvadrat = pow(kupa.getPoluprecnik(),2) + pow(kupa.getVisina(),2);

    int izvodnica = sqrt(izvodnicaKvadrat);

    cout << "B = r^2 * Pi =" << kupa.getPoluprecnik() << "^2 * Pi ="  << pow(kupa.getPoluprecnik(),2) << " * Pi = " << kupa.baza(r) << "cm2 " << endl;

    cout << "M = r * Pi * s = " << kupa.getPoluprecnik() << " * Pi * " << izvodnica << " = " << kupa.omotac(kupa.getPoluprecnik(), kupa.getVisina()) << "cm3";



    return 0;
}
