/* Реализовать базу данных ГАИ по штрафным квитанциям с помощью бинарного дерева.
Ключом будет служить номер автомашины, значением узла — список правонарушений.
Если квитанция добавляется в первый раз, то в дереве появляется новый узел, а в списке
данные по правонарушению; если нет, то данные заносятся в существующий список.
Необходимо также реализовать следующие операции:
a) Полная распечатка базы данных (по номерам машин и списку правонарушений,
числящихся за ними).
b) Распечатка данных по заданному номеру.
c) Распечатка данных по диапазону номеров */




#include <iostream>
#include <cstring>

using namespace std;

struct ListViolations
    {
        char* violations;
        ListViolations* next;
    };

void Push(ListViolations *&node, char* newStr)
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

void ClearList(ListViolations *&Head)
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

void PrintList(ListViolations *Head)
    {
        ListViolations * curr = Head;
        while (curr)
            {
                std::cout << curr->violations << std::endl;
                curr = curr->next;
            }
    }

struct TreeNode
    {

        TreeNode* parent;
        TreeNode* left;
        TreeNode* right;

        int number;
        ListViolations* list;
    };

class database
    {
    private:
        int size;
        TreeNode* root;

    public:
        database();
        ~database();

        void Add(int value, char*);
        void Add(TreeNode*&, TreeNode*, int, char*);
        void PrintAll(TreeNode* temp);
//        void PrintNumber (TreeNode* temp, int number);
       void PrintNumber (TreeNode* temp,int number);
        void PrintRangeNumber(TreeNode* temp, int from, int till);
        //  void PrintNumber(int);
        //void PrintRangeNumber(TreeNode*);
        TreeNode* ReturnRoot();
        void DeleteAll(TreeNode* temp);
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

TreeNode* database::ReturnRoot()
    {
        return root;
    }

void database::DeleteAll(TreeNode* temp)
    {
        if (temp)
            {
                DeleteAll(temp->left);
                DeleteAll(temp->right);
                ClearList(temp->list);
                delete temp;
            }
    }

void database::Add(TreeNode* &head, TreeNode* parent, int value, char* str)
    {
        TreeNode* temp = new TreeNode;
        temp->number = value;
        temp->list = NULL;
        temp->left = temp->right = temp->parent = NULL;

        if (!head)
            {
                head = temp;
                Push(head->list, str);
            }
        else
            {
                if (value < head->number)
                    Add(head->left, head,value, str);

                else if (value > head->number)
                    Add(head->left, head, value, str);
                else
                    Push(head->list, str);
            }
    }


void database::Add(int value, char* str)
    {
        Add(root, NULL, value, str);
    }

void database::PrintAll(TreeNode* temp)
    {
        if (temp)
            {
                PrintAll(temp->left);
                cout << "Car Number: " << temp->number << endl;
                cout << "Violation: " << endl;
                PrintList(temp->list);
                PrintAll(temp->right);
            }
    }


void database::PrintNumber(TreeNode* temp, int number)
    {
        if (temp)
            {
                PrintNumber(temp->left, number);
                if (temp->number == number)
                    {
                        cout << number << endl;
                        PrintList(temp->list);
                    }
                PrintNumber(temp->right, number);
            }
    }

void database::PrintRangeNumber(TreeNode* temp, int from, int till)
    {
        if (temp)
            {
                PrintRangeNumber(temp->left, from, till);
                if (from <= temp->number && temp->number <= till)
                    {
                        cout << temp->number << endl;
                        PrintList(temp->list);
                    }
                PrintRangeNumber(temp->right, from, till);
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


//        bd.PrintAll(bd.ReturnRoot());
//        cout << endl;
//
//        bd.PrintNumber(bd.ReturnRoot(),9999);
        bd.PrintRangeNumber(bd.ReturnRoot(),2000,3000);
    }

