// Средний уровень
#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // Используем double, так как координаты могут быть дробными
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;

    cout << "Введите x1: ";
    cin >> x1;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число: ";
        cin >> x1;
    }

    cout << "Введите y1: ";
    cin >> y1;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число: ";
        cin >> y1;
    }

    cout << "Введите x2: ";
    cin >> x2;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число: ";
        cin >> x2;
    }

    cout << "Введите y2: ";
    cin >> y2;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число: ";
        cin >> y2;
    }

    // Формула расстояния между двумя точками
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Вывод результата
    cout << "Расстояние между точками: " << distance << endl;

    // Пример целочисленного деления
    int firstNumber = 7;
    int secondNumber = 2;
    double integerDivision = firstNumber / secondNumber;

    // Используем static_cast для вещественного деления
    double realDivision = static_cast<double>(firstNumber) / secondNumber;

    cout << "Целочисленное деление 7 / 2: " << integerDivision << endl;
    cout << "Вещественное деление 7 / 2: " << realDivision << endl;

    return 0;
}
