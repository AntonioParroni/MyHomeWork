#include "Passport.h"

Passport::Passport()
    {
//    FirstName = nullptr;
//    LastName = nullptr;
//    BornDate = nullptr;
//    SerialNumber = nullptr;
    }

Passport::Passport(string xSerialNumber, string xFirstName, string xLastName, string xBornDate)
    {
FirstName = xFirstName;
LastName = xLastName;
SerialNumber = xSerialNumber;
BornDate = xBornDate;
    }

Passport::~Passport()
    {
        FirstName = nullptr;
        LastName = nullptr;
        BornDate = nullptr;
        SerialNumber = nullptr;
    }

string Passport::getSerialNumber() const
    {
        return SerialNumber;
    }

string Passport::getBornDate() const
    {
        return BornDate;
    }

void Passport::setSerialNumber(const string temp)
    {
    SerialNumber = temp;
    }

void Passport::setBornDate(const string temp)
    {
    BornDate = temp;
    }

string Passport::getFirstName() const
    {
        return FirstName;
    }

string Passport::getLastName() const
    {
        return LastName;
    }

void Passport::showFullName() const
    {
    cout << FirstName << " " << LastName << endl;
    }

void Passport::setFirstName(const string temp)
    {
    FirstName = temp;
    }

void Passport::setLastName(const string temp)
    {
    LastName = temp;
    }
