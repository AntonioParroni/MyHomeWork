
#include "ForeignPassport.h"

void ForeignPassport::setNationality(const string temp)
    {
    Nationality = temp;
    }

void ForeignPassport::setVisas(const string temp)
    {
    Visas = temp;
    }

string ForeignPassport::getNationality()
    {
        return Nationality;
    }

string ForeignPassport::getVisas()
    {
        return Visas;
    }

ForeignPassport::ForeignPassport()
    {
//        FirstName = nullptr;
//        LastName = nullptr;
//        BornDate = nullptr;
//        SerialNumber = nullptr;
//        Nationality = nullptr;
//        Visas = nullptr;
    }

ForeignPassport::~ForeignPassport()
    {
        FirstName = nullptr;
        LastName = nullptr;
        BornDate = nullptr;
        SerialNumber = nullptr;
        Nationality = nullptr;
        Visas = nullptr;
    }
