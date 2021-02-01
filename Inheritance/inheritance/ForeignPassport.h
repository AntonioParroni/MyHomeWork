
#ifndef INHERITANCE_FOREIGNPASSPORT_H
#define INHERITANCE_FOREIGNPASSPORT_H


#include "Passport.h"

class ForeignPassport : public Passport
    {
    string Nationality;
    string Visas;

    public:
        ForeignPassport();
        ~ForeignPassport();

        void setNationality (const string temp);
        void setVisas (const string temp);
        string getNationality ();
        string getVisas();

    };


#endif //INHERITANCE_FOREIGNPASSPORT_H
