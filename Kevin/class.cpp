#include<iostream>
#include<cmath>
using namespace std;
class cylinder {
   public:
    double radius;
    double height;

double volume() {
        return 3.14159 * radius * radius * height;
    }
double surfaceArea() {
        return 2 * 3.14159 * radius * radius + 2 * 3.14159 * radius * height;
    }
};
int main() {
    cylinder cyl;
    cyl.radius = 5.0;
    cyl.height = 10.0;

    cout << "Volume of cylinder: " << cyl.volume() << endl;
    cout << "Surface Area of cylinder: " << cyl.surfaceArea() << endl;

    return 0;
}