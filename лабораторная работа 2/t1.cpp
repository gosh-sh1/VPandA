// Лабораторная работа 2
// Вариант 14

// Базовый уровень
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // Используем double, так как температура может быть дробным числом
    double celsius = 0;
    double fahrenheit = 0;

    cout << "Введите температуру в градусах Цельсия: ";

    // Защита от некорректного ввода
    cin >> celsius;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число: ";
        cin >> celsius;
    }

    // Перевод градусов Цельсия в Фаренгейты по формуле F = C * 9/5 + 32
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    // Вывод результата
    cout << celsius << " °C = " << fahrenheit << " °F" << endl;
    return 0;
    
}
