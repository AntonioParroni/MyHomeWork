/* 1. Создать структуру Film со следующими полями:
 Id
 Название фильма
 Режиссер
 Жанр
 Рейтинг популярности
 Цена диска
2. Создать динамический массив videostore типа Film
3. Реализовать следующие возможности:
 Добавление нового фильма в videostore
 Удаление последнего фильма.
 Вывод на экран информации о фильме.
 Удаление фильма по ID.
 Поиск фильма по названию.
 Поиск фильма по жанру. */ 

# include <iostream>
# include <cstring> 

using namespace std; 

struct Film 
{
    unsigned int id;
    string name;
    string producer;
    string genre;
    float rating;
    float price;
};


// void makeFilm(Film &obj)
// {
//     std::cout << "Enter the films ID \n";
//     unsigned int filmID {};
//     std::cin >> filmID;
//     obj.id = new Film.id[ ];
//     strcpy(obj.id, filmID);
//     cout << "Enter the birthday:" << endl;
//     cout << "day->";
//     cin >> obj.birthday.day;
//     cin.ignore();
//     cout << "month->";
//     cin.getline(buf, 500);
//     obj.birthday.month = new char[strlen(buf) + 1];
//     strcpy(obj.birthday.month, buf);
//     cout << "year->";
//     cin >> obj.birthday.year;
//     cin.ignore();
//     cout << "Enter the gender (male/female) ->";
//     cin.getline(buf, 500);
//     if (strcmp(buf, "male") == 0)
//     {
//         obj.gender = Gender::MALE;
//     }
//     else if (strcmp(buf, "female") == 0)
//     {
//         obj.gender = Gender::FEMALE;
//     }
//     else
//     {
//         obj.gender = Gender::UNKNOWN;
//     }
// }

// void delete_special (int *&arr, int &size)
// {
//     int pos;
//     cout << "Please insert your desired position " << endl;
//     cin >> pos;
//     int *new_arr = new int [size-1];
//     if (pos > size)
//     {
//         cout << "Your position excels arrays length. \n Please try again! " << endl;
//     }
//     for (int i = 0, j = 0; i < size; i++)
//     {
//         if (i == pos)
//         {
//             i++;
//         }
//         new_arr[j++] = arr [i];
//     }
//     delete [] arr;
//     arr = new_arr;
//     size = size - 1;
// }
void incrementDarr (Film *arr, int size)
{
    Film *new_arr = new Film [size + 1];
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i];
    }
    delete [] arr;
    arr = new_arr;
}


int main ()
{
    unsigned int videostoreSize = 1;
    Film *videostore = new Film [videostoreSize];

    for (;;)
    {
        cout << "Select your operation" << endl;
        cout << "1. Add a new film to the videostore \n";
        cout << "2. Delete the last film \n";
        cout << "3. Show the information about the film \n";
        cout << "4. Delete the film with ID \n";
        cout << "5. Search a film by it's name \n";
        cout << "6. Search a film by it's genre \n";
        unsigned int operation {};
        cin >> operation; 
        if (operation != 1 && operation != 2 && operation != 3 && operation != 4)
        {
            for (;;)
            {
            cout << "Please insert the correct operation option" << endl;
            cin >> operation;
            }
        }
        switch (operation)
        {
            case 1:
                cout << "Please insert the film's name \n"; cin >> videostore[videostoreSize - 1].name; 
                cout << "Please insert the film's ID \n"; cin >> videostore[videostoreSize - 1].id; 
                cout << "Please insert the film's genre \n"; cin >> videostore[videostoreSize - 1].genre; 
                cout << "Please insert the film's producer \n"; cin >> videostore[videostoreSize - 1].producer; 
                cout << "Please insert the film's rating \n"; cin >> videostore[videostoreSize - 1].rating; 
                cout << "Please insert the film's price \n"; cin >> videostore[videostoreSize - 1].price;   
                incrementDarr(videostore,videostoreSize);
                break;
            case 2:
                unsigned int pos {};
                cout << "Please insert the desired film position \n"; cin >> pos;
                cout << "Film name is:\t  "<< videostore[pos].name << endl;
                cout << "Film ID is:\t  "<< videostore[pos].id << endl;
                cout << "Film genre is:\t  "<< videostore[pos].genre << endl;
                cout << "Film producer is:\t"<< videostore[pos].producer << endl;
                cout << "Film rating is:\t  "<< videostore[pos].rating << endl;
                cout << "Film price is:\t  "<< videostore[pos].price << endl; 
                break;
        }
    }
    delete [] videostore;
}