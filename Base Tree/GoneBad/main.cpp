/* Создать шаблонный класс Tree, описывающий бинарное дерево.
Для класса Tree реализовать следующие методы:
▪ добавление элемента(insert);
▪ удаление элемента(delete);
▪ поиск элемента(find);
▪ конструктор копирования;
▪ конструктор перемещения;
▪ деструктор;
▪ перегрузка присвоения;
▪ вывод на экран содержимого дерева(print);
▪ getRoot;
▪ getSize. */


#include <iostream>
#include <cstring>

using namespace std;

struct ListViolations
    {
        char* violations;
        ListViolations* next;
        void Push(ListViolations *&node, char* newStr);
        void ClearList(ListViolations *&Head);
        void PrintList(ListViolations *Head);
    };

void ListViolations::Push(ListViolations *&node, char *newStr)
    {
        ListViolations *tmp = new ListViolations;
        tmp->violations = new char[strlen(newStr) + 1];
        strcpy(tmp->violations, newStr);
        tmp->next = NULL;

        if (node == NULL)
            node = tmp;
        else
            {
                tmp->next = node;
                node = tmp;
            }
    }

void ListViolations::ClearList(ListViolations *&Head)
    {
        ListViolations * curr = Head;
        while (curr)
            {
                ListViolations *temp = curr->next;
                delete[] curr->violations;
                delete curr;
                curr = temp;
            }
    }

void ListViolations::PrintList(ListViolations *Head)
    {
        ListViolations * curr = Head;
        while (curr)
            {
                std::cout << curr->violations << std::endl;
                curr = curr->next;
            }
    }

struct Tree
    {

        Tree* parent;
        Tree* left;
        Tree* right;

        int number;
        ListViolations* list;
    };

class database
    {
    private:
        int size;
        Tree* root;

    public:
        database();
        ~database(); // деконструктор

        void Add(int value, char*);
        void Add(Tree*&, Tree*, int, char*);
        void PrintAll(Tree* temp);
        database (const database&obj);
        database (database&&obj)noexcept ;
//        void PrintNumber (Tree* temp, int number);
       void PrintNumber (Tree* temp, int number);
        void PrintRangeNumber(Tree* temp, int from, int till);
        //  void PrintNumber(int);
        //void PrintRangeNumber(Tree*);
        Tree* GetRoot();
        void DeleteAll(Tree* temp);
        void DeleteSpecial(Tree* temp, int number);
        int getSize(database& temp);
    };

database::database()
    {
        root = NULL;
        size = 0;
    }

database::~database()
    {
        DeleteAll(root);
    }

Tree* database::GetRoot()
    {
        return root;
    }

void database::DeleteAll(Tree* temp)
    {
        if (temp)
            {
                DeleteAll(temp->left);
                DeleteAll(temp->right);
                temp->list->ClearList(temp->list);
                delete temp;
            }
    }

void database::Add(Tree* &head, Tree* parent, int value, char* str)
    {
        Tree* temp = new Tree;
        temp->number = value;
        temp->list = NULL;
        temp->left = temp->right = temp->parent = NULL;

        if (!head)
            {
                head = temp;
                head->list->Push(head->list, str);
            }
        else
            {
                if (value < head->number)
                    Add(head->left, head,value, str);

                else if (value > head->number)
                    Add(head->left, head, value, str);
                else
                    parent->list->Push(head->list, str);
            }
            size++;
    }


void database::Add(int value, char* str)
    {
        Add(root, NULL, value, str);
        size++;
    }

void database::PrintAll(Tree* temp)
    {
        if (temp)
            {
                PrintAll(temp->left);
                cout << "Car Number: " << temp->number << endl;
                cout << "Violation: " << endl;
                temp->list->PrintList(temp->list);
                PrintAll(temp->right);
            }
    }


void database::PrintNumber(Tree* temp, int number) // надеюсь сойдет за функцию find
    {
        if (temp)
            {
                PrintNumber(temp->left, number);
                if (temp->number == number)
                    {
                        cout << number << endl;
                        temp->list->PrintList(temp->list);
                    }
                PrintNumber(temp->right, number);
            }
    }

void database::PrintRangeNumber(Tree* temp, int from, int till)
    {
        if (temp)
            {
                PrintRangeNumber(temp->left, from, till);
                if (from <= temp->number && temp->number <= till)
                    {
                        cout << temp->number << endl;
                        temp->list->PrintList(temp->list);
                    }
                PrintRangeNumber(temp->right, from, till);
            }
    }

int database::getSize(database& temp)
    {
     return temp.size;
    }

void database::DeleteSpecial(Tree *temp, int number)
    {
        if (temp)
            {
                DeleteSpecial(temp->left, number);
                 if (temp->number == number)
                     {
                         temp->list->ClearList(temp->list);
                         delete temp; // не знаю как нормально удалить, подскажите пожалуйста
                         return;
                     }
                DeleteAll(temp->right);
            }
    }

database::database(database &&obj) noexcept
    {
        this->root = obj.root;
        this->size = obj.size;

        obj.size = 0;
        delete obj.root;
    }

database::database(const database &obj)
    {
        Tree *cur = obj.root;
        size = obj.size;
        while (cur)
            {
                obj.root->list->Push(obj.root->list,obj.root->list->violations);
            }
    }


int main()
    {
        database bd;

        bd.Add(9999, "sdsdasdasd");
        bd.Add(9999, "Violation В");
        bd.Add(9999, "Violation С");
        bd.Add(2099, "Violation А");
        bd.Add(1000, "Violation С");
        bd.Add(9333, "Violation С");
        bd.Add(9055, "Violation А");
        bd.Add(9055, "Violation В");


//        bd.PrintAll(bd.GetRoot());
//        cout << endl;
//
//        bd.PrintNumber(bd.GetRoot(),9999);
        bd.PrintRangeNumber(bd.GetRoot(), 2000, 3000);

//        bd.getSize(bd.GetRoot());
        cout << bd.getSize(bd);
        bd.DeleteSpecial(bd.GetRoot(),2099);
//        bd.PrintAll(bd.GetRoot());
//        bd.PrintNumber(bd.GetRoot(),2099);
    }

