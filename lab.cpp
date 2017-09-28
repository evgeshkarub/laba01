#include <iostream>
#include <math.h>

int main() {
// 1;
std::cout << 3.14 << std::endl;
/////////////////////////////////
// 2;
std::cout << 1 <<" "<< 13 <<" "<< 49 << std::endl;
//////////////////////////////////
// 3;
char symbol;
std::cout << "enter the symbol" << std::endl;
std::cin >> symbol;
std::cout << 1 << r << 13 << r << 49 << std::endl;
////////////////////////////////////
// 4;
int a, b, c;
std::cout << "enter a b c" << std::endl;
std::cin >> a >> b >> c;
std::cout << a <<" "<< b <<" "<< c << std::endl;
//////////////////////////////////////
// 5;
double f = 0;
double x = 0;
double y = 0;
std::cout << "enter a" << std::endl;
std::cin >> f;
x = 12*f*f + 7*f - 12;
std::cout << f << std::endl;
y = 3*x*x*x + 4*x*x - 11*x + 1;
std::cout << y << std::endl;
//////////////////////////////////////
// 6;
double volume = 0;
double weight = 0;
double density = 0;
std::cout << "enter volume and weight" << std::endl;
std::cin >> volume >> weight;
density = weight/volume;
std::cout << density << std::endl;
////////////////////////////////////////
// 7;
double q = 0;
double w = 0;
double t = 0;
std::cout << "enter a and b" << std::endl;
t = -w/q;
std::cout << t << std::endl;
//////////////////////////////////////
// 8;
double x1 = 0;
double x2 = 0;
double y1 = 0;
double y2 = 0;
double distance = 0;
std::cout << "enter x1, x2, y1, y2" << std::endl;
distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
std::cout << distance << std::endl;
//////////////////////////////////////
// 9;
double upbase = 0;
double bbase = 0;
double height = 0;
double perimeter = 0;
std::cout << "enter upper base, bottom base, and height" << std::endl;
perimeter = upbase + bbase + 2*sqrt((bbase - upbase)*(bbase - upbase) + height*height);
std::cout << perimeter << std::endl;
//////////////////////////////////////
// 10;
double biggerradius = 0;
double smallerradius = 0;
double area = 0;
std::cout << "enter bigger radius and smaller radius" << std::endl;
area = biggerradius*biggerradius*3.1415926535 - smallerradius*smallerradius*3.1415926535;
std::cout << area << std::endl;
//////////////////////////////////////
// 11;
double edge = 0;
double cubevolume = 0;
double cubearea = 0;
std::cout << "enter edge" << std::endl;
cubevolume = edge*edge*edge;
std::cout << cubevolume << std::endl;
cubearea = edge*edge;
std::cout << cubearea << std::endl;
//////////////////////////////////////
// 12;
double side = 0;
double squareperimeter = 0;
std::cout << "enter side" << std::endl;
squareperimeter = side + side + side + side;
std::cout << squareperimeter << std::endl;
//////////////////////////////////////
// 13;
double radius = 0;
double diameter = 0;
std::cout << "enter radius" << std::endl;
diameter = radius + radius;
std::cout << diameter << std::endl;
//////////////////////////////////////













return 0;
}
