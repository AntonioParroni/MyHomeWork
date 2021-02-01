#include <iostream>
#include <vector>
#include <list>
#include <ctime>

using namespace std;

/*void fillArray(vector <int> &arr, int &min, int &max){
        for(auto i = arr.begin(); i != arr.end(); i++){
                i = rand() % (max - (min) + 1) + (min);
            }
    }*/

/*1. Написать программу, которая инициализирует элементы вектора
        нечетными целыми числами от 0 до 20. Вывести содержимое
вектора с нумерацией элементов. Пример:
0 -> 1
1 -> 3
2 -> 5
3 -> 7
4 -> 9
5 -> 11
6 -> 13
7 -> 15
8 -> 17
9 -> 19
2. Написать программу, которая выводит содержимое вектора
        наоборот. Входными данными является вектор из 10 элементов,
заполненный случайными числами в диапазоне (12, 35).
3. Написать программу, в которой список и з 10 элементов
        заполняется случайными числами в диапазоне (-10, 10).
Найти:
a. произведение всех элементов массива.
b. максимальный элемент.
c. количество элементов равных нулю.
4. Написать программу, в которой список из 10 элементов
        заполняется случайными числами в диапазоне (-10, 10). Вывести
        на экран сначала все положительные его элементы, а затем все
отрицательные.*/

int notEven()
    {
        int number = rand() % (20 - (0) + 1) + (0);
        while (number % 2 == 0)
            {
                number = rand() % (20 - (0) + 1) + (0);
            }
       return number;
    }

int main()
    {
        srand(time(0));

        // 1
        /*  vector <int> newVector;
     newVector.resize(10);

     for (auto i = newVector.begin(); i != newVector.end(); ++i)
         {
            *i = notEven();
         }
    for (int i = 0; i < 10; ++i)
        {
            cout << i << "-> " << newVector[i] << endl;
        }*/

        // 2
        /*vector <int> newVector;
        newVector.resize(10);
        srand(time(0));

        for (auto i = newVector.begin(); i != newVector.end(); ++i)
            {
                *i = rand() % (35 - (12) + 1) + (12);
            }
        cout << "Normal Order " << endl;
        for (int i = 0; i < newVector.size(); ++i)
            {
                cout << i << "-> " << newVector[i] << endl;
            }
        cout << "Inverted Order " << endl;
        int n = 9;
        for(auto it = newVector.cend() - 1; it != newVector.cbegin() - 1; --it, n--)
            {
                cout<< n << "-> " << *it << endl;
            }
        // Пробовал обявить обычную интовую переменную в обявлении цикла.
        // И для меня стало откровением, что разных типов переменные иницировать нельзя.
        // Пробовал решить эту проблему с std::tuple. Но.. надеюсь и так сойдет.*/

        // 3
        /* list <int> newList;
        newList.resize(10);

        for (auto i = newList.begin(); i != newList.end(); ++i)
            {
                *i = rand() % (10 - (-10) + 1) + (-10);
            }
        int n = 0;
        for (auto i = newList.begin(); i != newList.end(); ++i, n++)
            {
                cout  << n << "-> " << "\t" << *i << endl;
            }

        int sum = 0;
        for (auto i = newList.begin(); i != newList.end(); ++i)
            {
               sum += *i;
            }
        cout << "Sum -> " << sum << endl;

        int max = 0;
        for (auto i = newList.begin(); i != newList.end(); ++i)
            {
                if (*i > max)
                    {
                        max = *i;
                    }
            }
        cout << "Max -> " << max << endl;

        int zeroCount = 0;
        for (auto i = newList.begin(); i != newList.end(); ++i)
            {
                if (*i == 0)
                    {
                        zeroCount++;
                    }
            }
        cout << "Zero Count -> " << zeroCount << endl;

        cout << "Positive -> " << endl;
        for (auto i = newList.begin(); i != newList.end(); ++i)
            {
                if (*i > 0)
                    {
                        cout << *i << endl;
                    }
            }

        cout << "Negative -> " << endl;
        for (auto i = newList.begin(); i != newList.end(); ++i)
            {
                if (*i < 0)
                    {
                        cout << *i << endl;
                    }
            }

*/





    }
