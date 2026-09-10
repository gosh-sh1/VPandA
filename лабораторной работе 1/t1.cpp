//Лабараторная работа 1
// Вариант 14

//Базовый уровень
#include <iostream>

using namespace std;

int main()
{
    float hours = 0;
    float minutes = 0;

    cout << "Enter hours: ";

    cin >> hours;

    minutes = hours * 60;

    cout << hours << " H = " << minutes << " M" << endl;
    return 0;
}