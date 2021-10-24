#pragma once

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Triangle
{
    double length;

  public:
    Triangle()
    {
        cout << "Enter triangle side length: ";
        cin >> length;
    }

    double set_s()
    {
        return ( (pow(length, 2) * sqrt(3)) / 4 );
    }

    vector<double> set_rectangle()
    {
        return (vector<double> {length, length});
    }
};

class Circle
{
    double radius;

  public:
    Circle()
    {
        cout << "Enter circle radius: ";
        cin >> radius;
    }

    double set_s()
    {
        return ( 3.14 * pow(radius, 2) );
    }

    vector<double> set_rectangle()
    {
        return (vector<double> {radius * 2, radius * 2});
    }
};

class Square
{
    double length;

public:
    Square()
    {
        cout << "Enter square length: ";
        cin >> length;
    }

    double set_s()
    {
        return ( length * length );
    }

    vector<double> set_rectangle()
    {
        return (vector<double> {length, length});
    }
};

class Rectangle
{
    double height, weight;

public:
    Rectangle()
    {
        cout << "Enter rectangle weight and height: ";
        cin >> weight >> height;
    }

    double set_s()
    {
        return ( weight * height );
    }

    vector<double> set_rectangle()
    {
        return (vector<double> {weight, height});
    }
};