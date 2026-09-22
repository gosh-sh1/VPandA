// Повышенный уровень
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int age;
    int dayOfWeek;
    double price;

    cout << "===== БИЛЕТНАЯ СИСТЕМА =====" << endl;

    cout << "Введите возраст: ";

    // Защита от некорректного ввода
    cin >> age;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число: ";
        cin >> age;
    }

    // Проверяем, что возраст не отрицательный
    while (age < 0)
    {
        cout << "Возраст не может быть отрицательным. Введите возраст: ";
        cin >> age;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');

            cout << "Некорректный ввод. Введите число: ";
            cin >> age;
        }
    }

    cout << "Введите день недели (1-7): ";

    // Защита от некорректного ввода
    cin >> dayOfWeek;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число от 1 до 7: ";
        cin >> dayOfWeek;
    }

    // Проверяем диапазон дня недели
    while (dayOfWeek < 1 || dayOfWeek > 7)
    {
        cout << "День должен быть от 1 до 7. Введите снова: ";
        cin >> dayOfWeek;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');

            cout << "Некорректный ввод. Введите число от 1 до 7: ";
            cin >> dayOfWeek;
        }
    }

    // Определяем базовую стоимость билета
    if (age < 7)
    {
        price = 0;
    }
    else if (age < 18)
    {
        price = 200;
    }
    else if (age <= 65)
    {
        price = 500;
    }
    else
    {
        price = 250;
    }

    // Проверяем, является ли день выходным
    if (dayOfWeek >= 6)
    {
        price = price * 1.20;
    }
    else
    {
        price = price;
    }

    cout << "Итоговая цена билета: " << price << " руб." << endl;

    return 0;
}
