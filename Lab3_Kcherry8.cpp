/**
 * @file Lab3_Kcherry8.cpp
 * @author Kenneth Cherry
 * @date 2026-09-20
 * @brief Calculate areas of circular and rectangle
 */

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;

    int choice;
    double length, width, radius, area;

    cout << "Menu" << endl;
    cout << "1. Calculate the Area of a Rectangle" << endl;
    cout << "2. Calculate the Area of a Circle" << endl;
    cout << "3. Quit" << endl;
    cout << "Please make a menu selection: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Please enter the length of the rectangle: ";
        cin >> length;

        cout << "Please enter the width of the rectangle: ";
        cin >> width;

        area = length * width;

        cout << "The area of the rectangle is: " << area << endl;
    }
    else if (choice == 2) {
        cout << "Please enter the radius of the circle: ";
        cin >> radius;

        area = PI * radius * radius;

        cout << "The area of the circle is: " << area << endl;
    }
    else if (choice == 3) {
        return 0; // clean exit
    }
    else {
        cout << "Invalid menu selection." << endl;
    }

    return 0;
}