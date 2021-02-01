// Да, изивните я использовал стринги..
#pragma clang diagnostic push
#pragma ide diagnostic ignored "hicpp-multiway-paths-covered"
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

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
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



unsigned int incrementDarr (Film *&arr, unsigned int &size)
{
    Film *new_arr = new Film [size + 1];
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i];
    }
    delete [] arr;
    arr = new_arr;
    return size++;
}

unsigned int decrementDarr (Film *&arr, unsigned int &size)
{
    Film *new_arr = new Film [size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        new_arr[i] = arr[i];
    }
    delete [] arr;
    arr = new_arr;
    return size--;
}

unsigned int decrementspecDarr (Film *&arr, unsigned int &size, int pos)
{
    Film *new_arr = new Film [size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        if(pos == i)
        {
            i++;
        }
        new_arr[i] = arr[i];
    }
    delete [] arr;
    arr = new_arr;
    return size--;
}

void showDarr (Film *&arr, unsigned int &size)
{
    unsigned int pos{};
    cout << "Please insert the desired film position \n";
    cin >> pos;
    cout << "Film name is:    \t  " << arr[pos].name << endl;
    cout << "Film ID is:      \t  " << arr[pos].id << endl;
    cout << "Film genre is:   \t  " << arr[pos].genre << endl;
    cout << "Film producer is:\t  " << arr[pos].producer << endl;
    cout << "Film rating is:  \t  " << arr[pos].rating << endl;
    cout << "Film price is:   \t  " << arr[pos].price << endl;
}

void showspecDarr (Film *&arr, unsigned int &size, int pos)
{
    cout << "Film name is:    \t  " << arr[pos].name << endl;
    cout << "Film ID is:      \t  " << arr[pos].id << endl;
    cout << "Film genre is:   \t  " << arr[pos].genre << endl;
    cout << "Film producer is:\t  " << arr[pos].producer << endl;
    cout << "Film rating is:  \t  " << arr[pos].rating << endl;
    cout << "Film price is:   \t  " << arr[pos].price << endl;
}



int main ()
{
    unsigned int videostoreSize = 0;
    Film *videostore = new Film [videostoreSize];

    for (;;)
    {
        cout << "1. Add a new film \n";
        cout << "2. Delete the last film \n";
        cout << "3. Show the information about a specific film \n";
        cout << "4. Delete the film with ID \n";
        cout << "5. Search a film by it's name \n";
        cout << "6. Search a film by it's genre \n";
        cout << "7. Show all current films \n";
        unsigned int operation{};
        cout << "Please select your operation!" << endl;
        cin >> operation;
        while (operation < 1 || operation > 7)
        {
            cin.clear();
            cin.ignore(100000, '\n');
            cout << "Please insert the correct operation number! " << endl;
            cin >> operation;
        }
        switch (operation)
        {
            case 1:
                {
                incrementDarr(videostore, videostoreSize);
                cout << "Please insert the film name \n";
                cin.get();
                getline(cin, videostore[videostoreSize - 1].name);
                cout << "Please insert the film ID \n";
                cin >> videostore[videostoreSize - 1].id;
                cout << "Please insert the film genre \n";
                cin >> videostore[videostoreSize - 1].genre;
                cout << "Please insert the film producer \n";
                cin.get();
                getline(cin, videostore[videostoreSize - 1].producer);
                cout << "Please insert the film rating \n";
                cin >> videostore[videostoreSize - 1].rating;
                cout << "Please insert the film price \n";
                cin >> videostore[videostoreSize - 1].price;
                cout << "Operation complete" << endl;
                }
                break;
            case 2:
                {
                decrementDarr(videostore, videostoreSize);
                cout << "Operation complete!" << endl;
                }
                break;
            case 3:
                {
                showDarr(videostore, videostoreSize);
                }
                break;
            case 4:
                {
                unsigned int removeID {};
                cout << "Please enter the ID which you want to remove" << endl;
                cin >> removeID;
                for (int i = 0; i < videostoreSize; i++)
                    {
                    if (removeID == videostore[i].id)
                        {
                        decrementspecDarr(videostore,videostoreSize,i);
                        cout << "Operation success!" << endl;
                        }
                    else
                            {
                        cout << "There is no such ID!" << endl;
                            }
                    }
                }
                break;
            case 5:
                {
                string searchfilmname;
                cout << "Please insert the name of the film" << endl;
                cin.get();
                getline(cin, searchfilmname);
                for (int i = 0; i < videostoreSize; i++)
                    {
                    if (searchfilmname == videostore[i].name)
                        {
                        showspecDarr(videostore, videostoreSize, i);
                        }
                    else
                        {
                        cout << "We are sorry, there is no film with such a name!" << endl;
                        }
                    }
                }
                break;
            case 6:
            {
                string searchfilmgenre;
                cout << "Please insert the genre of the film" << endl;
                cin.get();
                getline(cin, searchfilmgenre);
                for (int i = 0; i < videostoreSize; i++)
                {
                    if (searchfilmgenre == videostore[i].genre)
                    {
                        showspecDarr(videostore, videostoreSize, i);
                    }
                    else
                    {
                        cout << "We are sorry, there is no films with this genre!" << endl;
                    }
                }
            }
                break;
            case 7:
                {
                    if (videostoreSize > 0)
                        {
                            cout << videostoreSize << " film(s) " << endl;
                            for (int i = 0; i < videostoreSize; i++)
                                 {
                                cout << "Film " << i << " is :" << endl;
                                showspecDarr(videostore, videostoreSize, i);
                                cout << endl;
                                 }
                        }
                    else
                    {
                        cout << "Sorry, there are currently no films!" << endl;
                        cout << endl;
                    }
                }
                break;
        }
    }
    delete [] videostore;
} 
