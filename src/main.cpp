#include <iostream>
#include <vector> // vector<>
#include <fstream> // ofstream, ifstream
#include <string> // stoi()
#include <cstdlib> // rand()
#include <map> // map<>
#include <ctime> // time_t, tm*
#include <iomanip> // get_time(), put_time(), get_time()

using namespace std;

#include "class/figures.h"

int main()
{
    cout << "Enter figure: ";
    string figure; cin >> figure;

    if (figure == "circle")
    {
        Circle circle = Circle();
        cout << "S: " << circle.set_s() << endl;
        vector<double> rSqrt = circle.set_rectangle();
        cout << "Rectangle: " << rSqrt[0] << " " << rSqrt[1] << endl;
    }
    else if (figure == "triangle")
    {
        Triangle triangle = Triangle();
        cout << "S: " << triangle.set_s() << endl;
        vector<double> rSqrt = triangle.set_rectangle();
        cout << "Rectangle: " << rSqrt[0] << " " << rSqrt[1] << endl;
    }
    else if (figure == "square")
    {
        Square square = Square();
        cout << "S: " << square.set_s() << endl;
        vector<double> rSqrt = square.set_rectangle();
        cout << "Rectangle: " << rSqrt[0] << " " << rSqrt[1] << endl;
    }
    else if (figure == "rectangle")
    {
        Rectangle rectangle = Rectangle();
        cout << "S: " << rectangle.set_s() << endl;
        vector<double> rSqrt = rectangle.set_rectangle();
        cout << "Rectangle: " << rSqrt[0] << " " << rSqrt[1] << endl;
    }
}