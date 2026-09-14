//Лабараторная работа 1
// Вариант 14

//Базовый уровень
#include <iostream>

using namespace std;

int main()
{
    double hours = 0;

    cout << "Enter hours: ";
    cin >> hours;

    while (cin.fail() || hours < 0)
    {
        cin.clear();

        cout << "Invalid input. Enter hours again: ";
        cin >> hours;
    }

    double minutes = hours * 60;

    cout << hours << " H = " << minutes << " M" << endl;

    return 0;
}
