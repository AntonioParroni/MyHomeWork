#include "Factory.h"




void Transport::setCarBrand (string name)
            {
                CarBrand = std::move(name);
            }
string Transport::getCarBrand ()
                {
                    return CarBrand;
                }

        void LightCar::info()
        {
                cout << "Light Car with brand: " << getCarBrand() << endl;
                cout << endl;
        };
        LightCar::LightCar()
        {
        }


        void CustomCar::info() {
                cout << "Custom Car with brand: " << getCarBrand() << endl;
                cout << endl;
            };
        CustomCar::CustomCar(){
                string customBrandName = {};
                cout << "Please insert the brands name " << endl;
                cin >> customBrandName;
                setCarBrand(customBrandName);
            }




        void Mercedes::info()  {
                cout << "Light Car: " << getCarBrand() << endl;
            };
        Mercedes::Mercedes(){
            setCarBrand("Mercedes");
        }




        void Ford::info()  {
                cout << "Light Car: " << getCarBrand() << endl;
            };
        Ford::Ford(){
            setCarBrand("Ford");
        }



        void HeavyCar::info() {
                cout << "Heavy Car with brand: " << getCarBrand() << endl;
                cout << endl;
            };
        HeavyCar::HeavyCar()
            {
                string HeavyCarBrandName = {};
                cout << "Please insert the Heavy Car Brand" << endl;
                cin >> HeavyCarBrandName;
                setCarBrand(HeavyCarBrandName);
            }

        void Bus::info() {
                cout << "Bus with brand: " << getCarBrand() << endl;
                cout << endl;
            };
        Bus::Bus()
            {
                string BusBrandName = {};
                cout << "Please insert the Bus Brand" << endl;
                cin >> BusBrandName;
                setCarBrand(BusBrandName);
            }





        Transport* LightCarFactory::createTransport() {
            int select = 0;
            cout << "Please select a car brand." << endl;
            cout << "Press 1 for Mercedes or press 2 for Ford" << endl;
            cout << "Press 3 for a custom type" << endl;
            cin >> select;
                if (select == 1)
                    return new Mercedes;
                else if (select == 2)
                    return new Ford;
                else if (select == 3)
                    return new CustomCar;
            }



        Transport* HeavyCarFactory:: createTransport() {
                return new HeavyCar;
            }


        Transport* BusFactory:: createTransport() {
                return new Bus;
            }


