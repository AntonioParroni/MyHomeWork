
#ifndef ABSTRACTCLASSES_ABASTRACTCLASSES_H
#define ABSTRACTCLASSES_ABASTRACTCLASSES_H

#include <iostream>
#include <cstring>

using namespace std;


class Automobile
    {
        int number;
    public:
        virtual ~Automobile() {};
    };

class Common : public Automobile
    {
        string color;
    };

class Sedan : public Common
    {

    };

class Minivan : public Common
    {

    };

class Pickup : public Common
    {

    };

class Special : public Automobile
    {
        string organization;
    };

class Builder : public Special
    {
    public:
        virtual void work () {};
    };

class Tipper : public Builder
    {
    public:
        void work ();
    };

class TruckCrane : public Builder
    {
    public:
        void work ();
    };

class ConcreteMixer : public Builder
    {
    public:
        void work ();
    };

class Emergency : public Special
    {
    public:
       virtual void signal () {};
    };

class Police : public Emergency
    {
    public:
        void signal () override;
    };

class Ambulance : public Emergency
    {
    public:
        void signal ();
    };

class FireEngine : public Emergency
    {
    public:
        void signal ();
    };


#endif //ABSTRACTCLASSES_ABASTRACTCLASSES_H
