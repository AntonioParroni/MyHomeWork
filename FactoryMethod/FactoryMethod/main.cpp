/* Спроектировать приложение, которое позволяет создавать легковые и грузовые
автомобили, а так же автобусы. Автомобили должны быть минимум двух марок:
“Mercedes” и “Ford”. */
#include "Factory.h"

int main()
    {

        HeavyCarFactory newHeavyCarFactory;
        Transport* newHeavyCar = newHeavyCarFactory.createTransport();
        newHeavyCar->info();


        BusFactory newBusFactory;
        Transport* newBus = newBusFactory.createTransport();
        newBus->info();


        LightCarFactory newLightCarFactory;
        Transport* newLightCar = newLightCarFactory.createTransport();
        newLightCar->info();




//        cout << sizeof(newLightCar);
    }