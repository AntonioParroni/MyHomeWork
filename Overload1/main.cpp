/* Создайте класс myTime, который будет содержать информацию
о времени (часы(0-24), минуты(0-60), секунды(0-60)). Класс
должен иметь сеттеры, геттеры, конструкторы. С помощью
механизма перегрузки операторов, определите операции:  */

# include <iostream>
# include <ctime>
# include <chrono>
# include <thread>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
using namespace std;


unsigned short getVal (unsigned short par)
    {
        bool flag;
        while (!flag)
            {
                unsigned short val;
                cout << "Insert Value" << endl;
                cin >> val;
                if (val < par)
                    {
                        flag = true;
                        return val;
                    }
                else
                    cout << "Wrong Input" << endl;
            }
    };

unsigned short makeTime (unsigned short var)
    {
        if (var == 0)
        return 0;
        else if (var < 10 && var > 0)
        return 1;
        else
        return 2;
    }

void incTime (unsigned short &h, unsigned short &m, unsigned short &s)
    {
        bool flagm;
        bool flagh;
        s++;
        if (s >= 60)
            {
                s = 0;
                m++;
                flagm = true;
            };
            if (flagm)
                {
                    if (m >= 60)
                        {
                            m = 0;
                            h++;
                            flagh = true;
                        };
                };
                if (flagh)
                    {
                        if (h >= 24)
                            {
                                h = 0;
                            };
                    };
    }

void decTime (unsigned short &h, unsigned short &m, unsigned short &s)
    {
        s--;
        if (s >= 60)
            {
                s = 60;
                s--;
                m -= 1;
            };
                if (m >= 60)
                    {
                        m = 59;
                        h--;
                    };
                if (h >= 24)
                    {
                        h = 23;
                    };

    }

class MyTime
    {
        unsigned short hours {};
        unsigned short minutes {};
        unsigned short seconds {};
    public:
        MyTime ()
            {hours = 0, minutes = 0; seconds = 0;};

        MyTime (unsigned short x, unsigned short y, unsigned short z)
            {
                hours = x;
                minutes = y;
                seconds = z;
            }
            void setHours (unsigned short h)
                {
                    hours = h;
                };
            void setMinutes (unsigned short m)
                {
                minutes = m;
                };
            void setSeconds (unsigned short s)
                {
                    seconds = s;
                };

        unsigned short getHours ()
                {
                    return hours;
                };
        unsigned short getMinutes ()
                    {
                        return minutes;
                    };
        unsigned short getSeconds ()
                        {
                            return seconds;
                        };

        void showMyTime ()
            {
                std::this_thread::sleep_for(1s);
                unsigned short h = makeTime (this->hours);
                unsigned short m = makeTime (this->minutes);
                unsigned short s = makeTime (this->seconds);

               switch (h)
                   {
                       case 0:
                           cout << "00";
                       break;
                       case 1:
                           cout << "0" << hours;
                       break;
                       case 2:
                           cout << hours;
                           break;
                   }

                   cout << ":";

                switch (m)
                    {
                        case 0:
                            cout << "00";
                        break;
                        case 1:
                            cout << "0" << minutes;
                        break;
                        case 2:
                            cout << minutes;
                            break;
                    }

                cout << ":";

                switch (s)
                    {
                        case 0:
                            cout << "00";
                        break;
                        case 1:
                            cout << "0" << seconds;
                        break;
                        case 2:
                            cout << seconds;
                        break;
                    }
                    cout << endl;
            }

        void showAndRunTime ()
                {
                    while (true)
                        {
                            std::this_thread::sleep_for(1s);
                            showMyTime();
                            cout << endl;
                            incTime (hours,minutes,seconds);
                        }
                }

        MyTime operator+(MyTime t2)
            {
                this->hours += t2.hours;
                if (this->hours >= 24)
                    {this->hours = this->hours % 24;}
                this->minutes += t2.minutes;
                if (this->minutes >= 60)
                    {this->minutes = this->minutes % 60;}
                this->seconds += t2.seconds;
                if (this->seconds >= 60)
                    {this->seconds = this->seconds % 60;}

                return *this;
            }

        MyTime operator+(unsigned short var)
            {
                this->seconds += var;
                this->seconds = this->seconds % 60;
                return *this;
            }

        MyTime operator-(unsigned short var)
            {
                if (this->seconds < var)
                    {
                        if (var <= 60)
                            {
                                short temps{};
                                temps = 60 - ((var % 60) - this->seconds);
                                this->seconds = temps;
                            }
                        else
                            {
                                if ((var % 60) < this->seconds)
                                    {
                                        this->seconds -= (var % 60);
                                    }
                                else
                                    this->seconds = 60 - ((var % 60) - this->seconds);
                            }
                    }
                else
                    this->seconds -= var;
                return *this;
            }

        MyTime operator-(MyTime t2)
            {
                if (this->hours < t2.hours)
                    {
                        if (t2.hours <= 24)
                            {
                                short temph{};
                                temph = 24 - ((t2.hours % 24) - this->hours);
                                this->hours = temph;
                            }
                        else
                            {
                                if ((t2.hours % 24) < this->hours)
                                    {
                                        this->hours -= (t2.hours % 24);
                                    }
                                else
                                    this->hours = 24 - ((t2.hours % 24) - this->hours);
                            }
                    }
                else
                    this->hours -= t2.hours;

                ////
                if (this->minutes < t2.minutes)
                    {
                        if (t2.minutes <= 60)
                            {
                                short tempm{};
                                tempm = 60 - ((t2.minutes % 60) - this->minutes);
                                this->minutes = tempm;
                            }
                        else
                            {
                                if ((t2.minutes % 60) < this->minutes)
                                    {
                                        this->minutes -= (t2.minutes % 60);
                                    }
                                else
                                    this->minutes = 60 - ((t2.minutes % 60) - this->minutes);
                            }
                    }
                else
                    this->minutes -= t2.minutes;
                ///

                if (this->seconds < t2.seconds)
                    {
                        if (t2.seconds <= 60)
                            {
                                short temps{};
                                temps = 60 - ((t2.seconds % 60) - this->seconds);
                                this->seconds = temps;
                            }
                        else
                            {
                                if ((t2.seconds % 60) < this->seconds)
                                    {
                                        this->seconds -= (t2.seconds % 60);
                                    }
                                else
                                    this->seconds = 60 - ((t2.seconds % 60) - this->seconds);
                            }
                    }
                else
                    this->seconds -= t2.seconds;

                return *this;
            }

        MyTime operator ++()
            {
                incTime(this->hours,this->minutes,this->seconds);
                return *this;
            }

        MyTime operator ++(int)
            {
                MyTime temp = *this;
                incTime(this->hours,this->minutes,this->seconds);
                return temp;
            }

        MyTime operator --()
            {
                decTime(this->hours,this->minutes,this->seconds);
                return *this;
            }

        MyTime operator --(int)
            {
                MyTime temp = *this;
                decTime(this->hours,this->minutes,this->seconds);
                return temp;
            }

        bool operator==(MyTime comp) const
            {
                if (this->hours == comp.hours)
                    {
                        if (this->minutes == comp.minutes)
                            {
                                if (this->seconds == comp.seconds)
                                    {
                                        return true;
                                    }
                                else
                                    return false;
                            }
                        else
                            return false;
                    }
                    else
                        return false;
            }

        bool operator!=(MyTime comp) const
            {
                if (this->hours == comp.hours)
                    {
                        if (this->minutes == comp.minutes)
                            {
                                if (this->seconds == comp.seconds)
                                    {
                                        return false;
                                    }
                                else
                                    return true;
                            }
                        else
                            return true;
                    }
                else
                    return true;
            }

        bool operator<(MyTime comp) const
            {
                if (this->hours <= comp.hours)
                    {
                        if (this->minutes <= comp.minutes)
                            {
                                if (this->seconds < comp.seconds)
                                    {
                                        return true;
                                    }
                                else
                                    return false;
                            }
                        else
                            return false;
                    }
                else
                    return false;
            }

        bool operator>(MyTime comp) const
            {
                if (this->hours >= comp.hours)
                    {
                        if (this->minutes >= comp.minutes)
                            {
                                if (this->seconds > comp.seconds)
                                    {
                                        return true;
                                    }
                                else
                                    return false;
                            }
                        else
                            return false;
                    }
                else
                    return false;
            }

        bool operator>=(MyTime comp) const
            {
                if (this->hours >= comp.hours)
                    {
                        if (this->minutes >= comp.minutes)
                            {
                                if (this->seconds >= comp.seconds)
                                    {
                                        return true;
                                    }
                                else
                                    return false;
                            }
                        else
                            return false;
                    }
                else
                    return false;
            }

        bool operator<=(MyTime comp) const
            {
                if (this->hours <= comp.hours)
                    {
                        if (this->minutes <= comp.minutes)
                            {
                                if (this->seconds <= comp.seconds)
                                    {
                                        return true;
                                    }
                                else
                                    return false;
                            }
                        else
                            return false;
                    }
                else
                    return false;
            }
    };


int main ()
    {
//        MyTime current (23,59,55);
//        current.showAndRunTime();

//        MyTime zero;
//        zero.showMyTime();

//        MyTime current;
//
//        current.setHours(getVal(24));
//        current.setMinutes(getVal(60));
//        current.setSeconds(getVal(60));
//        current.showAndRunTime();

//        MyTime current (12,12,12);
//        MyTime current1 (130,2,61);
//        current = current + current1;
//        current.showMyTime();

//        MyTime current (12,12,12);
//        MyTime current1 (13332234,223423423,692340);
//        current = current - current1;
//        current.showMyTime();

//        MyTime current (12,12,12);
//        current = current - 1112;
//        current.showMyTime();

//        MyTime current (12,12,12);
//        while (true)
//            {
//                std::this_thread::sleep_for(1s);
//                ++current;
//                current.showMyTime();
//                cout << endl;
//            }
//
//        MyTime current (0,0,5);
//        while (true)
//            {
//                std::this_thread::sleep_for(1s);
//                --current;
//                current.showMyTime();
//                cout << endl;
//            }
//
//        MyTime current (12,12,12);
//        current--;
//        current.showMyTime();
//        cout << endl;
//        --current;
//        current.showMyTime();

//            MyTime current (12,12,12);
//            ++current;
//            current.showMyTime();
//            cout << endl;
//            current++;
//            current.showMyTime();

//        MyTime current (12,12,12);
//        MyTime current1 (12,12,12);
//        if (current != current1)
//            {
//                cout << "true" << endl;
//            }
//            else
//                cout << "false" << endl;

//        MyTime current (12,12,12);
//        MyTime current1 (12,12,13);
//        if (current >= current1)
//            {
//                cout << "true" << endl;
//            }
//            else
//                cout << "false" << endl;
//
//            MyTime temp = current - current1; // не понимаю каким сделать поведение в таком случае
//            temp.showMyTime();

    MyTime test (0, 0, 5);
    while (true)
        {
            test.showMyTime();
            test--;
        }

    }

#pragma clang diagnostic pop