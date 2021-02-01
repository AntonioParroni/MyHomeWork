/* 1) Разработать приложение, описывающее взаимодействие почтового сервера с
клиентами. При получении нового письма, сервер должен оповестить об этом
все клиентские приложения(телефон, десктоп, веб).
 */


#include "Observer.h"

int Observer::s_observerSize = 0;

void ClientCode() {
        Subject *EmailServer = new Subject;
        Observer *smartphone = new Observer(*EmailServer);
        Observer *desktop = new Observer(*EmailServer);
        Observer *web = new Observer(*EmailServer);

        EmailServer->CreateMessage("Hello World! :D");

        web->RemoveMeFromTheList();

        EmailServer->CreateMessage("The weather is hot today! :p");

        desktop->RemoveMeFromTheList();

        EmailServer->CreateMessage("My new car is great! ;)");

        smartphone->RemoveMeFromTheList();

        delete EmailServer;
    }

int main()

{
        ClientCode();
        return 0;
}
