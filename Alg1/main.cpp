#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <functional>
#include <numeric>

using namespace std;
/*Написать функцию которая принимает вектор целых
чисел и возвращает новый вектор, состоящий из
цифр входного вектора.
Пример:
input: 123 234 34 56 76 23
output: 1 2 3 2 3 4 3 4 5 6 7 6 2 3*/

vector <int> digits (const vector<int> &v)
    {
        vector <string> numericString(v.size());
        transform(v.begin(), v.end(), numericString.begin(),
                  [](int val)->string
                  {
                    return to_string(val);
                  });
        string str = accumulate(numericString.begin(), numericString.end(), string(""));
        vector <int> res;
        transform(str.begin(),str.end(),back_inserter(res),
                  [](char c)->int
                  {
                    return c - '0';
                  });
        return res;
    }

int main()
    {
        vector <int> newVector = {123,234,345,456,567,678,789,890,901};
        for (int i = 0; i <newVector.size();i++)
            {
                cout << newVector[i] << " ";
            }
        cout << endl;
        vector <int> modifyVector = digits(newVector);
        for (int i = 0; i <modifyVector.size();i++)
            {
                cout << modifyVector[i] << " ";
            }
        cout << endl;

    }
