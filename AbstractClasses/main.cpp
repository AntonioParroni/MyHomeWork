/* Создать абстрактный базовый класс Automobile с полем «number» и
чисто виртуальным деструктором. От класса Automobile наследуется два
абстрактных класса: Common(поле «color») и Special(поле
«organization»). От Common наследуются три класса: Sedan, Minivan,
Pickup. От класса Special наследуются абстрактный класс Builder с чисто
виртуальной функцией work и абстрактный класс Emergency c чисто
виртуальной функцией signal. От класса Builder наследуются три класса:
TruckCrane, ConcreteMixer, Tipper, переопределяющие метод work. От
класса Emergency наследуются три класса: Police, Ambulance, FireEngine,
переопределяющие метод signal. */

#include "AbastractClasses.h"

int main()
    {
        Police newPolice;
        newPolice.signal();

        Ambulance newAmbulance;
        newAmbulance.signal();

        FireEngine newFireEngine;
        newFireEngine.signal();

        /////////////////
        cout << endl;

        Tipper newTipper;
        newTipper.work();

        ConcreteMixer newConcreteMixer;
        newConcreteMixer.work();

        TruckCrane newTruckCrane;
        newTruckCrane.work();



    }
