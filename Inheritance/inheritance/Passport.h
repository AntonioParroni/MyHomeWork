
#ifndef INHERITANCE_PASSPORT_H
#define INHERITANCE_PASSPORT_H

#include <iostream>
#include <string>
#include <chrono> // хотел использовать std::chrono::year_month_day для даты рождения, но никак не смог подключить
using namespace std;


class Passport
    {
    protected:
    string SerialNumber;
    string FirstName;
    string LastName;
    string BornDate;

    public:
        Passport();
        Passport(string xSerialNumber, string xFirstName, string xLastName, string xBornDate);
        ~Passport();
        string getSerialNumber()const;
        string getFirstName() const;
        string getLastName() const;
        void showFullName () const;
        string getBornDate () const;
        void setFirstName(const string temp);
        void setLastName(const string temp);
        void setSerialNumber(const string temp);
        void setBornDate (const string temp);
    };


#endif //INHERITANCE_PASSPORT_H
