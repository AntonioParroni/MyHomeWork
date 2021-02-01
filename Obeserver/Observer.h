#ifndef OBESERVER_OBSERVER_H
#define OBESERVER_OBSERVER_H


#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;


class IObserver {
    public:
        virtual ~IObserver(){};
        virtual void Update(const string &message_from_subject) = 0;
    };

class ISubject {
    public:
        virtual ~ISubject(){};
        virtual void Attach(IObserver *observer) = 0;
        virtual void Detach(IObserver *observer) = 0;
        virtual void Notify() = 0;
    };


class Subject : public ISubject {
        list<IObserver *> list_observer_;
        string message_;
    public:
        virtual ~Subject() {
                std::cout << "Goodbye, I was the Subject.\n";
            }

        void Attach(IObserver *observer) override {
                list_observer_.push_back(observer);
            }
        void Detach(IObserver *observer) override {
                list_observer_.remove(observer);
            }
        void Notify() override {
                std::list<IObserver *>::iterator iterator = list_observer_.begin();
                HowManyObserver();
                while (iterator != list_observer_.end()) {
                        (*iterator)->Update(message_);
                        ++iterator;
                    }
            }

        void CreateMessage(std::string message = "Empty") {
                this->message_ = message;
                Notify();
            }
        void HowManyObserver() {
                std::cout << "There are " << list_observer_.size() << " observers in the list.\n";
            }
    };

class Observer : public IObserver {
        string message_from_subject_;
        Subject &subject_;
        static int s_observerSize;
        int number_;
    public:
        Observer(Subject &subject) : subject_(subject) {
                this->subject_.Attach(this);
                std::cout << "Hi, I'm the Observer \"" << ++Observer::s_observerSize << "\".\n";
                this->number_ = Observer::s_observerSize;
            }
        virtual ~Observer() {
                std::cout << "Goodbye, I was the Observer \"" << this->number_ << "\".\n";
            }

        void Update(const std::string &message_from_subject) override {
                message_from_subject_ = message_from_subject;
                PrintInfo();
            }
        void RemoveMeFromTheList() {
                subject_.Detach(this);
                std::cout << "Observer \"" << number_ << "\" removed from the list.\n";
                delete this;
            }
        void PrintInfo() {
                std::cout << "Observer \"" << this->number_ << "\": a new message is available --> " << this->message_from_subject_ << "\n";
            }
    };

#endif
