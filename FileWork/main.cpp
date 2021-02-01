#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/*1. Создать текстовый файл и записать в него фразу «Здесь был,
<Ваше_имя>!».
2. Записать массив строк в файл, расположив каждый элемент массива на
отдельной строке с сохранением порядка.
3. Дан текстовый файл. Необходимо переписать его строки в другой
файл. Порядок строк во втором файле должен совпадать с порядком
строк в заданном файле.
4. Дан текстовый файл. Необходимо переписать его строки в другой
файл. Порядок строк во втором файле должен быть обратным по
отношению к порядку строк в заданном файле.
5. Дан текстовый файл. Необходимо создать новый файл, в который
переписать из исходного файла все слова, состоящие не менее чем из
семи букв. */

int main()
    {
        // 1
        /*      // Создать текстовый файл и записать в него фразу «Здесь был <Ваше_имя>!».
              ofstream ofs;
              ofs.open("test.txt");

              if (!ofs.is_open())
                  {
                      cerr << "Can't open the file " << endl;
                  }
              else if (ofs.is_open())
                  {
                      string test = "Anton was here!";
                      ofs << test;
                  }
               ofs.close();



              ifstream ifs;
              ifs.open("test.txt");

               if (!ifs.is_open())
                   {
                       cerr << "Can't open the file " << endl;
                   }
               else if (ifs.is_open())
                   {
                       char ch;
                       while(ifs.get(ch))
                           {
                               cout << ch;
                           }
                   }
              ifs.close();
       */
        // 2
        /* // Записать массив строк в файл, расположив каждый элемент массива на отдельной строке с сохранением порядка.
             ofstream ofs;
             ofs.open("test.txt");

             string strArray [5] = {"Anton", "Anna", "Oksana", "Sasha", "Paolo"};

             if (!ofs.is_open())
                 {
                     cerr << "Can't open the file " << endl;
                 }
             else if (ofs.is_open())
                 {
                     for (int i = 0; i < 5; i ++)
                         {
                             ofs << strArray[i] << "\n";
                         }
                 }
             ofs.close();


             ifstream ifs;
             ifs.open("test.txt");

             if (!ifs.is_open())
                 {
                     cerr << "Can't open the file " << endl;
                 }
             else if (ifs.is_open())
                 {
                     char ch;
                     while(ifs.get(ch))
                         {
                             cout << ch;
                         }
                 }
             ifs.close();

     */
        // 3
        /*
//        Дан текстовый файл. Необходимо переписать его строки в другой
//        файл. Порядок строк во втором файле должен совпадать с порядком
//        строк в заданном файле.

        ofstream ofs;
        ifstream ifs;

        ifs.open("test.txt");
        ofs.open("test2.txt");

        if (!ifs.is_open() && !ofs.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else if (ifs.is_open() && ofs.is_open())
            {
                char ch;
//                while (ifs.get(ch))
//                    {
//                        cout << ch;
//                    }
                while (ifs.get(ch))
                    {
                        ofs << ch;
                    }
            }
        ifs.close();
        ofs.close();

        ifstream ifss;
        ifss.open("test2.txt");

        if (!ifss.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else if (ifss.is_open())
            {
                char ch;
                while (ifss.get(ch))
                    {
                        cout << ch;
                    }
            }
            ifss.close();


*/
        // 4
        /*
//        Дан текстовый файл. Необходимо переписать его строки в другой
//        файл. Порядок строк во втором файле должен быть обратным по
//        отношению к порядку строк в заданном файле.

        ofstream ofs;
        ifstream ifs;

        ifs.open("test2.txt");
        ofs.open("test3.txt");

        if (!ifs.is_open() && !ofs.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else if (ifs.is_open() && ofs.is_open())
            {
                string str;
                vector <string> invstr;
                while (getline(ifs,str))
                    {
                        invstr.push_back(str);
//                        ofs << str << "\n";
//                        for (int i = 0; i < str.length(); i++)
//                            {
//                                ofs << str[i] << "\n";
//                            }
                    }
                for (int i = invstr.size(); i >= 0; i --)
                    {
                    ofs << invstr[i] << endl;
                    }
            }
        ifs.close();
        ofs.close();

        ifstream ifss;
        ifss.open("test3.txt");

        if (!ifss.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else if (ifss.is_open())
            {
                char ch;
                while (ifss.get(ch))
                    {
                        cout << ch;
                    }
            }
        ifss.close();
*/
        // 5
        /*//        Дан текстовый файл. Необходимо создать новый файл, в который
//        переписать из исходного файла все слова, состоящие не менее чем из
//        семи букв.
        ofstream fout;
        fout.open("test4.txt");
        if (!fout.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else if (fout.is_open())
            {
                string test = "Anton was here! And This is a ABCDEFG and HDASJKDSAKJSBA";
                fout << test;
            }
        fout.close();



        ifstream fin;
        fin.open("test4.txt");
        ofstream foout;
        foout.open("test5.txt");

        if (!fin.is_open() && !foout.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else if (fin.is_open() && foout.is_open())
            {
                string str;
//                while (getline(fin, str))
//                    {
//                        cout << str;
//                        if (str.size() >= 7)
//                            {
//                                fout << str;
//                            }
//                    }
                while(fin >> str) {
//                        cout << str;
                        if(str.size() >= 7) foout << str << endl;
                    }
            }
        fin.close();
        foout.close();

        fstream fiin;
        fiin.open("test5.txt");
        if(!fiin.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else
            {
                char ch;
                while (fiin.get(ch))
                    {
                        cout << ch;
                    }
            }
        fiin.close();*/
    }