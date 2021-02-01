#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


/* Создать класс «Телефонный справочник», хранящий информацию о
контактах со следующими полями:
− id;
− имя;
− фамилия;
− адрес;
− номер телефона.
Реализовать следующие возможности:
− добавление записи;
− удаление записи;
− сохранение в файл(перезапись);
− загрузка из файла. */


class Phone
    {
        string id;
        string firstName;
        string lastName;
        string address;
        string cellPhone;

    public:

        Phone(){};

        Phone (string iD_, string FirstName, string LastName, string Address, string CellPhone)
            {
                id = iD_;
                firstName = FirstName;
                lastName = LastName;
                address = Address;
                cellPhone = CellPhone;
            }
        ~Phone ()
            {
                // delete this;
            }

        string GetID ()
            {
                return id;
            }

        string GetFirstName()
            {
                return firstName;
            }

        string GetLastName()
            {
                return lastName;
            }
        string GetAddress()
            {
                return address;
            }
        string GetPhone()
            {
                return cellPhone;
            }

        void setID (string ID)
            {
                id = ID;
            }

        void setFirstName(string FirstName)
            {
                firstName = FirstName;
            }

        void setLastName(string LastName)
            {
                lastName = LastName;
            }
        void setAddress(string Address)
            {
                address = Address;
            }
        void setPhone(string Phone)
            {
                cellPhone = Phone;
            }

        void showPhone()
            {
                cout << GetID() << "\n" << GetFirstName() << "\n" << GetLastName() << "\n" << GetAddress()  << "\n" << GetPhone() << endl;
            }
    };

void addPhone (vector <Phone*> &book)
    {
        string newID, newFirstName, newLastName, newAddress, newPhoneNumber;
        // getline здесь для практики. Так, было бы более логично использовать обычный cin.
        // Но адресс скорее всего будет вмещать в себе много разных элементов. Поэтому я решил сделать вот так.

        cout << "ID: ";
        getline(cin,newID);
        cout << "FirstName: ";
        getline(cin,newFirstName);
        cout << "LastName: ";
        getline(cin,newLastName);
        cout << "Address: ";
        getline(cin,newAddress);
        cout << "PhoneNumber: ";
        getline(cin,newPhoneNumber);
   //     cin >> newFirstName >> newLastName >> newAddress >> newPhoneNumber;
        Phone* newPhone = new Phone(newID,newFirstName, newLastName, newAddress, newPhoneNumber);
        // Phone newPhone(newFirstName, newLastName, newAddress, newPhoneNumber);

        book.push_back(newPhone);
        // book.push_back({newFirstName, newLastName, newAddress, newPhoneNumber});
    }


void deletePhone (vector <Phone*> &book, int pos)
    {
        delete book[pos];
        book.erase(book.begin()+pos);
    }

void saveFile (vector <Phone*> &book,string path)
    {
        ofstream ofs;
        ofs.open(path);

        if (!ofs.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else if (ofs.is_open())
            {
                for (int i = 0; i < book.size(); i++)
                    {
                        string temp;
                        temp = book[i]->GetID();
                        ofs << temp << "\n";
                        temp = book[i]->GetFirstName();
                        ofs << temp << "\n";
                        temp = book[i]->GetLastName();
                        ofs << temp << "\n";
                        temp = book[i]->GetAddress();
                        ofs << temp << "\n";
                        temp = book[i]->GetPhone();
                        ofs << temp << "\n";
                    }
            }
        ofs.close();
    }

void resetArr (bool array[], int pos)
    {
        for (int i = 0; i < 5; i++)
            {
                if (i == pos)
                    {
                        array[pos] = true;
                    }
                else
                    {
                        array[i] = false;
                    }
            }

    }
void loadFile (vector <Phone*> &book, string path)
    {
        ifstream ifs;
        ifs.open(path);

        string newString, newID,newFirstName, newLastName, newAddress, newPhoneNumber;
        bool arr[5];
        arr[0] = true;

        if (!ifs.is_open())
            {
                cerr << "Can't open the file " << endl;
            }
        else if (ifs.is_open())
            {
                book.clear();
                while (getline(ifs, newString))
                    {
                        if (arr[0])
                            {
                                newID = newString;
                                resetArr(arr, 1);
                                newString.clear();
                                continue;
                            }
                        if (arr[1])
                            {
                                newFirstName = newString;
                                resetArr(arr, 2);
                                newString.clear();
                                continue;
                            }
                        if (arr[2])
                            {
                                newLastName = newString;
                                resetArr(arr, 3);
                                newString.clear();
                                continue;
                            }
                        if (arr[3])
                            {
                                newAddress = newString;
                                resetArr(arr, 4);
                                newString.clear();
                                continue;
                            }
                        if (arr[4])
                            {
                                newPhoneNumber = newString;
                                resetArr(arr, 0);
                                Phone* newPhone = new Phone(newID,newFirstName, newLastName, newAddress, newPhoneNumber);
                                book.push_back(newPhone);
                                newString.clear();
                                continue;
                            }
                    }
                /*while (getline(ifs, test))
                    {
                      counter++;
                    }
                for (int i = 0, j = 0; i < counter; i++)
                    {
                        getline(ifs, newString);
                        if (j == 0)
                            {
                               newID = newString;
                               j++;
                            }
                        if (j == 1)
                            {
                                newFirstName = newString;
                                j++;
                            }
                        if (j == 2)
                            {
                                newLastName = newString;
                                j++;
                            }
                        if (j == 3)
                            {
                                newAddress = newString;
                                j++;
                            }
                        if (j == 4)
                            {
                                newPhoneNumber = newString;
                                j++;
                                Phone* newPhone = new Phone(newID,newFirstName, newLastName, newAddress, newPhoneNumber);
                                book.push_back(newPhone);
                            }
                    }*/
                /*bool arr [5];
                while(ifs.get(ch))
                    {
                        if (ch != '\n' && !arr[0])
                            {
                                newID += ch;
                                arr[0] = true;
                            }
                        while (ch != '\n' && !arr[1])
                            {
                                newFirstName += ch;
                                arr[1] = true;
                            }
                        while (ch != '\n' && !arr[2])
                            {
                                newLastName += ch;
                                arr[2] = true;
                            }
                        while (ch != '\n' && !arr[3])
                            {
                                newAddress += ch;
                                arr[3] = true;
                            }
                        while (ch != '\n' && !arr[4])
                            {
                                newPhoneNumber += ch;
                                arr[4] = true;
                            }
                    }*/
            }
        ifs.close();
    }


int main()
    {
    string path = "test.txt";

    vector<Phone*> newBook;
    addPhone(newBook);
    // cout << newBook.size() << endl;
    newBook[0]->showPhone();
    // cout << newBook[0] << endl;

    /*deletePhone(newBook,0);
    cout << newBook.size() << endl;*/
    saveFile(newBook,path);

    addPhone(newBook);
    newBook[1]->showPhone();
    saveFile(newBook,path);

    vector<Phone*> testBook;

    loadFile(testBook,path);

    cout << endl;

    testBook[0]->showPhone();

    cout << endl;
    testBook[1]->showPhone();
    deletePhone(testBook,0);
    cout << "Size: " << testBook.size() << endl;

    }
