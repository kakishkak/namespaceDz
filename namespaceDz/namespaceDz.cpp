#include <iostream>
#include  <ctime>

using namespace std;

namespace carNomer1 {
    class Auto {
        int amountOfWheels;
        int speed;
    public:
        Auto() {
            amountOfWheels = 4;
            speed = 69;
        }
        int getAmountOfWheels() {
            return amountOfWheels;
        }
        int getSpeed() {
            return speed;
        }
    };
}

namespace carNomer2 {
    class Auto {
        int amountOfWheels;
        int speed;
    public:
        Auto() {
            amountOfWheels = 10;
            speed = 696;
        }
        Auto(carNomer1::Auto& obj) {
            amountOfWheels = obj.getAmountOfWheels();
            speed = obj.getSpeed();
        }
        void Printer() {
            cout << "Speed: " << speed << "\nAmount of wheels: " << amountOfWheels << endl;
        }
    };
}

using namespace carNomer1;
using namespace carNomer2;

int main()
{
    carNomer1::Auto obj = carNomer1::Auto();
    carNomer2::Auto obj2 = carNomer2::Auto(obj);
    obj2.Printer();
}