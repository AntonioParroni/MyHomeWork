/*Спроектировать приложение, которое позволяет создавать пиццу с произвольным
количеством ингредиентов. Предусмотреть два вида основ для пиццы(например
маленькая и средняя) а так же, как минимум, три вида ингредиентов. Реализовать
возможность подсчета общей стоимости пиццы со всеми включенными
ингредиентами. */

// очень долго не мог понять почему у меня некорректно работало сплюсование цены
// я изнеможен, пожалуйста простите если я не поделил на файлики

#include <iostream>
#include <string>


using namespace std;


class Pizza {
    protected:
        int price {};
    public:
        virtual ~Pizza() {}
        virtual string Composition() const = 0;
        virtual int ReturnPrice () = 0;
    };

class ConcreteComponent : public Pizza {
    public:
        string Composition() const override {
                return " Base Pizza (0$)";
            }
            int ReturnPrice () override {
            return price;
        }
    };

class Decorator : public Pizza {

    protected:
        Pizza* component_;

    public:
        Decorator(Pizza* component) : component_(component) {
            }

        std::string Composition() const override {
                return this->component_->Composition();
            }
            int ReturnPrice () override {
            return this->component_->ReturnPrice();
        }
    };

class SmallPizza : public Decorator {

    public:
        SmallPizza(Pizza* component) : Decorator(component) {
            }
        std::string Composition() const override {
                return " Small Pizza (5$) +" + Decorator::Composition();
            }
            int ReturnPrice() override {
            return 5 + component_->ReturnPrice();
        }
    };

class MediumPizza : public Decorator {
    public:
        MediumPizza(Pizza* component) : Decorator(component) {
            }

        std::string Composition() const override {
                return " Medium Pizza (10$) + " + Decorator::Composition();
            }

        int ReturnPrice() override {
                return 10 + component_->ReturnPrice();
            }
    };

    class BigPizza : public Decorator {
    public:
    BigPizza(Pizza* component) : Decorator(component) {
    }

    std::string Composition() const override {
    return " Big Pizza (15$) + " + Decorator::Composition();
    }

    int ReturnPrice() override {
        return component_->ReturnPrice() + 15;
    }
    };

    class Mozzarella : public Decorator {
    public:
    Mozzarella(Pizza* component) : Decorator(component) {
    }

    std::string Composition() const override {
    return " Mozzarella (2$) + " + Decorator::Composition();
    }

    int ReturnPrice() override {
   return component_->ReturnPrice() + 2;
    }
    };

    class Mushroom : public Decorator {
    public:
    Mushroom(Pizza* component) : Decorator(component) {
    }

    std::string Composition() const override {
    return " Mushroom (4$) + " + Decorator::Composition();
    }

    int ReturnPrice() override {
    return component_->ReturnPrice() + 4;
    }
    };

    class Tomato : public Decorator {
    public:
    Tomato(Pizza* component) : Decorator(component) {
    }

    std::string Composition() const override {
    return " Tomato (3$) + " + Decorator::Composition();
    }

    int ReturnPrice() override {
    return component_->ReturnPrice() + 3;
    }
    };

void ClientCode(Pizza* component)
    {
        cout << "Your Pizza is ready!" << endl;
        cout << "RESULT: " << component->Composition() << endl;
        cout << "PRICE: " << component->ReturnPrice() << " $" << endl;
    }



int main() {

        cout << "Please select the size of your pizza." << endl;
        cout << "1. Small Pizza 5$" << endl;
        cout << "2. Medium Pizza 10$" << endl;
        cout << "3. Big Pizza 15$" << endl;
        Pizza* newPizza = new ConcreteComponent;

        int selecter {};
        cin >> selecter;
        Pizza * withSize;
        switch (selecter)
        {
            case 1:
                    {
                        Pizza* smallDecorator = new SmallPizza(newPizza);
                        withSize = smallDecorator;
                        break;
                    }

            case 2:
                    {
                        Pizza* mediumDecorator = new MediumPizza(newPizza);
                        withSize = mediumDecorator;
                        break;
                    }

            case 3:
                    {
                        Pizza *bigDecorator = new BigPizza (newPizza);
                        withSize = bigDecorator;
                        break;
                    }
        };
        ClientCode(withSize);



        cout << "Please select some ingredients to add to your pizza." << endl;
        cout << "1. Mozzarella 2$" << endl;
        cout << "2. Mushrooms 4$" << endl;
        cout << "3. Tomato 3$" << endl;

        int selecter2{};
        cin >> selecter2;
        Pizza * withSizeAndIngridient;
        switch (selecter2)
            {
            case 1:
            {
                Pizza* mozzarellaDecorator = new Mozzarella(withSize);
                withSizeAndIngridient = mozzarellaDecorator;
                break;
            }

            case 2:
            {
                Pizza* mushroomDecorator = new Mushroom(withSize);
                withSizeAndIngridient = mushroomDecorator;
                break;
            }

            case 3:
            {
                Pizza *tomatoDecorator = new Tomato (withSize);
                withSizeAndIngridient = tomatoDecorator;
                break;
            }
            };

        ClientCode(withSizeAndIngridient);


        delete newPizza;
        delete withSize;
        delete withSizeAndIngridient;

        return 0;
    }