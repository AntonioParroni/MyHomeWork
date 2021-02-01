
#ifndef FACTORYMETHOD_FACTORY_H
#define FACTORYMETHOD_FACTORY_H
#include <iostream>
#include <string>


using namespace std;


class Transport
    {
        string CarBrand;
    public:
        virtual void info() = 0;
        virtual ~Transport() {};
        void setCarBrand (string name);
        string getCarBrand ();

    };

class LightCar: public Transport
    {
    public:
        void info();
        LightCar();
    };

class CustomCar: public LightCar
    {
    public:
        void info();
        CustomCar();
    };

class Mercedes: public LightCar
    {
    public:
        void info();
        Mercedes();
    };

class Ford: public LightCar
    {
    public:
        void info();
        Ford();
    };


class HeavyCar: public Transport
    {
    public:
        void info();
        HeavyCar();
    };

class Bus: public Transport
    {
    public:
        void info();
        Bus();
    };


class Factory
    {
    public:
        virtual Transport* createTransport() = 0;
        virtual ~Factory() {};
    };

class LightCarFactory: public Factory
    {
    public:
        Transport* createTransport();
    };

class HeavyCarFactory: public Factory
    {
    public:
        Transport* createTransport();
    };

class BusFactory: public Factory
    {
    public:
        Transport* createTransport();
    };
#endif //FACTORYMETHOD_FACTORY_H
