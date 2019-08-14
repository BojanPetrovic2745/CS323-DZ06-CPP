#ifndef KUPA_H
#define KUPA_H

#define PI  3.14

class Kupa
{
    public:
        Kupa();
        virtual ~Kupa();

        void setPoluprecnik(double r);
        double getPoluprecnik();

        void setVisina(double h);
        double getVisina();

        double baza(double r);
        double omotac(double r, double h);


    protected:

    private:
        double r;
        double h;
};

#endif // KUPA_H

