#include <iostream>
#include <cstring>

using namespace std;

// 1.Дана строка. Разрежьте ее на две равные части
//(если длина строки — четная, а если длина строки
//нечетная, то длина первой части должна быть на
//один символ больше). Переставьте эти две части
//местами, результат запишите в новую строку и
//выведите на экран.

void separateString (string &s)
    {
        int stringSize = s.size();
        if (stringSize % 2 == 0)
            {
                cout << "Your string is even with the size of: " << stringSize << endl;
                cout << s << endl;
                int separateNum = stringSize / 2;
                string swapString = s;
                s.clear();
                for (int i = separateNum; i < stringSize; i++)
                    {
                        s.push_back(swapString[i]);
                    }
                for (int i = 0; i < separateNum; i++)
                    {
                        s.push_back(swapString[i]);
                    }
            }
            else
                {
                cout << "Your string is not even with the size of: " << stringSize << endl;
                cout << s << endl;
                int separateNum = stringSize / 2;
                int separateNum2 = separateNum + 1;
                string swapString = s;
                s.clear();
                for (int i = separateNum; i < stringSize; i++)
                    {
                        s.push_back(swapString[i]);
                    }
                for (int i = 0; i < separateNum2 - 1; i++)
                    {
                        s.push_back(swapString[i]);
                    }
                };
        cout << stringSize << endl;
    }
//2.Дана строка, состоящая ровно из двух слов,
//разделенных пробелом. Переставьте эти слова
//местами. Результат запишите в строку и выведите
//получившуюся строку.

void separateTwo (string &s) // не сомневаюсь в том, что это можно было сделать попроще
    {
        int spacePos = s.find(" ");
        cout << spacePos << endl;
        string swapString = s;
        s.clear();
        for (int i = spacePos + 1; i < swapString.size(); i++)
            {
                s.push_back(swapString[i]);
            }
//            s.insert(spacePos+1," ");
//      очень ннтересно, здесь с маленькими значениями работает, а с большими нет
        for (int i = 0; i < spacePos; i++)
            {
                s.push_back(swapString[i]);
            }
        s.insert(spacePos," ");
        cout << s << endl;
    }

    //3.Дана строка. Если в этой строке буква f
    //встречается только один раз, выведите её индекс.
    //Если она встречается два и более раз, выведите
    //индекс её первого и последнего появления. Если
    //буква f в данной строке не встречается, ничего
    //не выводите.

    void findF (const string s)
        {
//            int firstF = s.find_first_of("f");
//            if (firstF)
//                {
//                   int secondF = s.find_first_of("f",firstF);
//                   if (secondF)
//                       {
//                           int thirdF =  s.find_first_of("f",secondF);
//                           if (thirdF)
//                               {
//                                   cout << "First F position: " << firstF << endl << "Second F position: " << secondF << endl;
//                               }
//                       }
//                       else if (!secondF)
//                       {
//                           cout << "The F position is: " << firstF << endl;
//                       }
//                }
//                else if (!firstF)
//                {
//                    cout << "F not found" << endl;
//                }

            int fCount = count(s.begin(), s.end(), 'f');
            if (fCount == 1)
                {
                    cout << s.find_first_of("f") << endl;
                }
                else if (fCount >= 2)
                {
                    cout << s.find_first_of("f") << " " << s.find_first_of("f",1 + s.find_first_of("f") ) << endl;
                }
                else
                    {
                    cout << "F not found" << endl;
                    }
        }

        //4.Дана строка. Найдите в этой строке второе
        //вхождение буквы f, и выведите индекс этого
        //вхождения. Если буква f в данной строке
        //встречается только один раз, выведите число -1,
        //а если не встречается ни разу, выведите число -2

        void searchF (const string s)
            {
                int fCount = count(s.begin(), s.end(), 'f');
                if (fCount == 1)
                    {
                        cout << - 1 << endl;
                    }
                else if (fCount >= 2)
                    {
                        cout << s.find_first_of("f",1 + s.find_first_of("f") ) << endl;
                    }
                else
                    {
                        cout << - 2 << endl;
                    }
            }

            //5.Дана строка, в которой буква h встречается
            //минимум два раза. Удалите из этой строки первое
            //и последнее вхождение буквы h, а также все
            //символы, находящиеся между ними.

            void deleteH (string &s)
                {
                    int hCount = count(s.begin(), s.end(), 'h');
                    if (hCount >= 2)
                        {
                            s.erase (s.find_first_of("h"), s.find_last_of("h")); // не понимаю почему не корректно работает, извините
                            cout << s << endl;
                        }
                    else
                        {
                            cout << "Sorry h not found" << endl;
                        }
                }
int main()
    {
//       string test;
//       cout << "Please insert your string" << endl;
//       cin >> test;
//       cout << test << endl;
//       separateString(test);
//       cout << test;

//        string test;
//        cout << "Please insert your string " << endl;
//        getline(cin,test);
//        cout << test << endl;
//        separateTwo(test);
//        cout << test;

        string test;
        cout << "Please insert your string " << endl;
        getline(cin,test);
        cout << test << endl;
//        findF(test);
//        searchF(test);
        deleteH(test);
    }
