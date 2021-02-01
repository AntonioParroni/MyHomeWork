
#include "Base.h"
//конструктор
database::database()
    {
        root = nullptr;

        size = 0;
    }
//деструктор
database::~database()
    {
        DeleteAll(root);
    }
//метод получения корня
node* database::ReturnRoot()
    {
        return root;
    }
//метод удаления всего
void database::DeleteAll(node* temp)
    {
        if (temp)
            {
                DeleteAll(temp->left);
                DeleteAll(temp->right);
                delete temp;
            }
    }
//метод добавления
void database::Add(int value)
    {
        node* temp = new node;
        temp->number = value;

        temp->left = temp->right = temp->parent = nullptr;

        if (!root)
            root = temp;
        else
            {
                node* tmp1 = root;
                node* tmp2 = nullptr;

                while (tmp1)
                    {
                        tmp2 = tmp1;
                        if (value < tmp1->number)
                            tmp1=tmp1->left;
                        else if (value>tmp1->number)
                            tmp1 = tmp1->right;
                        else
                            break;
                    }

                if (value < tmp2->number){
                        tmp2->left = temp;
                        temp->parent = tmp2;
                    }
                else if (value>tmp2->number){
                        tmp2->right = temp;
                        temp->parent = tmp2;
                    }
                else
                    cout << "ключи равны\n";
            }
    }
//метод печати полной базы данных
void database::PrintAll(node* temp, int value)
    {
        if (temp)
            {
                PrintAll(temp->left, value + 1);
                cout << "Номер машины: " << temp->number << endl;
                cout << "Нарушение: " << endl;
                PrintAll(temp->right, value + 1);
            }
    }
//метод печати по номеру
void database::PrintNumber( int num)
    {
        if (root)
            {
                node* temp = root;
                int k = 0;
                while (temp)
                    {
                        if (num == temp->number)
                            {
                                k = 0;
                                break;
                            }
                        if (num < temp->number){
                                ++k;
                                temp = temp->left;
                            }
                        else if (num>temp->number){
                                ++k;
                                temp = temp->right;
                            }
                    }
                if (k == 0)
                    {
                        cout << "Номер машины: " << temp->number << endl;
                        cout << "Нарушение: " << endl;
                    }
                else
                    cout << "Машины с таким номером в базе нету\n";

            }
    }