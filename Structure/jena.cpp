/*1. Создать структуру House со следующими полями:
 Владелец
 Адрес
 Высота
 Количество этажей
 Количество квартир
 Дата постройки
 Материал
 Стоимость кв.м.
 */

#include <iostream>
using namespace std;

struct House
{
    string owner;
    string address;
    double height{};
    int floor_num{};
    int app_count{};
    string build_date;
    string material;
    double price_m2{};
};

void input_data (House& new_house)
{
    cout << "Please insert the house owner" << endl; cin >> new_house.owner;
    cout << "Please insert the house address" << endl; cin >> new_house.address;
    cout << "Please insert the house height" << endl; cin >> new_house.height;
    cout << "Please insert the house floor amount" << endl; cin >> new_house.floor_num;
    cout << "Please insert the house apartment amount" << endl; cin >> new_house.app_count;
    cout << "Please insert the house built date" << endl; cin >> new_house.build_date;
    cout << "Please insert the house material" << endl; cin >> new_house.material;
    cout << "Please insert the house price per m2" << endl; cin >> new_house.price_m2;
};

void output_data (House& new_house)
{
    cout << "The house owner is: " << new_house.owner << endl;
    cout << "The house address is: " << new_house.address << endl;
    cout << "The house height is: " << new_house.height << endl;
    cout << "The house floor amount is: " << new_house.floor_num << endl;
    cout << "The house apartment amount is: " << new_house.app_count << endl;
    cout << "The house built date is: " << new_house.build_date<< endl;
    cout << "The house material is: " << new_house.material << endl;
    cout << "The house price per m2 is: " << new_house.price_m2 << endl;
}

void change_data (House& new_house)
{
    int direction;
    cout << "Please select \n 1) Change everything \n 2) Change specific parameter " << endl;
    cin >> direction;
    if (direction == 1)
    {
        cout << "Please insert new values!" << endl;
        input_data(new_house);
    }
    else if (direction == 2) {
        cout << "Please select what do you want to change \n";
        cout
                << " 1) House owner \n 2) House address \n 3) House Height \n 4) House floor amount \n 5) Apartment count \n 6) House built date \n 7) House material \n 8) House price per m2"
                << endl;
        int direction2;
        cin >> direction2;
        if (direction2 == 1) {
            cout << "Please insert the new value!";
            cin >> new_house.owner;
        }
        else if (direction2 == 2){
            cout << "Please insert the new value!";
            cin >> new_house.address;
        }
        else if (direction2 == 3){
            cout << "Please insert the new value!";
            cin >> new_house.height;
        }
        else if (direction2 == 4){
            cout << "Please insert the new value!";
            cin >> new_house.floor_num;
        }
        else if (direction2 == 5){
            cout << "Please insert the new value!";
            cin >> new_house.app_count;
        }
        else if (direction2 == 6){
            cout << "Please insert the new value!";
            cin >> new_house.build_date;
        }
        else if (direction2 == 7){
            cout << "Please insert the new value!";
            cin >> new_house.material;
        }
        else if (direction2 == 8){
            cout << "Please insert the new value!";
            cin >> new_house.price_m2;
        }
        else
            cout << "You typed wrong, please try again!" << endl;
    }
    else
    {
        cout << "Please make the right choice!" << endl;
    }
}
// извините, нужно было делать со свитчем и возможно даже готу
/*2. Создать функции:
 Заполнения объекта с клавиатуры;
 Вывода на экран информации об объекте;
 Полного и частичного редактирования данных объекта. */

int main() {
    House new_house;
    input_data(new_house);
    output_data(new_house);
    change_data(new_house);
    output_data(new_house);
    return 0;
}
