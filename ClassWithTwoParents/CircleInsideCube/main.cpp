/* Используя понятие множественного наследования, разработайте класс
"Окружность, вписанная в квадрат"
 */
#include <iostream>

using namespace std;


class Square
    {
        float SquareSide;
        float SquarePerimeter = SquareSide * 4;
        float SquareArea = SquareSide * SquareSide;
    public:
        Square (float value) : SquareSide(value) { };
        float getSide ()
            {
                return SquareSide;
            }

            float getPerimeter()
                {
                    return SquarePerimeter;
                }
                float getArea()
                    {
                        return SquareArea;
                    }
    };

class Circle
    {
        float CircleRadius;
        float CircleDiameter = CircleRadius * 2;
    public:
        Circle(float radius) : CircleRadius(radius) { }
        float getRadius()
            {
                return CircleRadius;
            }
            float getDiameter ()
                {
                    return CircleDiameter;
                }
    };

class CircleInSquare : public Circle, public Square
    {
    public:
        CircleInSquare(float radius) : Square(radius*2), Circle(radius) { }

    };

int main ()
    {
        float newSide = {};
        float newRadius = {};
        cout << "Insert Cube Side" << endl; cin >> newSide;
        cout << "Insert Circle Radius" << endl; cin >> newRadius;
        while (newRadius > (newSide / 2))
            {
                cout << "Invalid Circle Radius. Please try again! " << endl;
                cout << "Your value should be less than " << newSide / 2 << " to fit inside the cube" << endl;
                cin >> newRadius;
            }
        Square newSquare = Square(newSide);
        CircleInSquare newCircle = CircleInSquare(newRadius);

        cout << "Your Circle Inside The Cube is Okay!!" << endl;

    }