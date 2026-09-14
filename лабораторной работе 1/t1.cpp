//Лабараторная работа 1
// Вариант 14

//Базовый уровень
#include <iostream>

using namespace std;

int main()
{
   // Используем double, так как количество часов может быть дробным числом
    double hours = 0;

    cout << "Enter hours: ";

    // Защита от некорректного ввода (буквы) и отрицательных значений
    cin >> hours;
    while (cin.fail() || hours < 0)
    {
        cin.clear(); // Сброс флага ошибки cin
        cin.ignore(10000, '\n'); // Очистка некорректных символов из буфера

        cout << "Invalid input. Enter positive number of hours: ";
        cin >> hours;
    }

    // Расчет: в одном часе 60 минут
    double minutes = hours * 60;

    // Вывод результата с пояснениями
    cout << hours << " H = " << minutes << " M" << endl;

    return 0; // Успешный выход из программы
}
