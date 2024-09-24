// Lab_03_3.cpp
// < Пушкаш Максим >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 11



#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double x, y, R;

    
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення R: ";
    cin >> R;

    
    if (x <= -1 - R) {
        y = x + (1 + R);
    } 
    else if (x > -1 - R && x < -1) {
        y = sqrt(R * R - pow((x + 1), 2));
    } 
    else if (x >= -1 && x <= 1) {
        y = R;
    } 
    else if (x > 1 && x <= 2) {
        y = -x + 2;
    } 
    else {
        y = -1;
    }

    
    cout << "Значення y: " << y << endl;

    return 0;
}


