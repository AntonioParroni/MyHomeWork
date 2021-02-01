/* Создайте класс Passport (паспорт), который будет содержать паспортную
информацию о гражданине Украины . С помощью механизма
наследования , реализуйте класс ForeignPassport (загран . паспорт )
производный от Passport. Напомним, что загран.паспорт содержит
помимо паспортных данных, также данные о визах. */

#include "Passport.h"
#include "ForeignPassport.h"


int main()
    {
//        std::cout << "Hello, World!" << std::endl;
//        return 0;

    Passport test ("DDSDA123","Antonio", "Parroni", "1995.04.05");

    test.showFullName();

    ForeignPassport Ukraine;

    Ukraine.setVisas("China");
    cout << Ukraine.getVisas();
    cout << endl;
    Ukraine.setFirstName("Oksana");
    cout << Ukraine.getFirstName();

    }
