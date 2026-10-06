// Повышенный уровень
#include <iostream>
#include <iomanip>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    double a, b, h;

    cout << "Введите начало интервала a: ";
    cin >> a;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Некорректный ввод. Введите число: ";
        cin >> a;
    }

    cout << "Введите конец интервала b: ";
    cin >> b;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Некорректный ввод. Введите число: ";
        cin >> b;
    }

    cout << "Введите шаг h: ";
    cin >> h;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Некорректный ввод. Введите число: ";
        cin >> h;
    }

    while (a > b || h <= 0)
    {
        cout << "Ошибка: должно выполняться a <= b и h > 0." << endl;

        cout << "Введите начало интервала a: ";
        cin >> a;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Некорректный ввод. Введите число: ";
            cin >> a;
        }

        cout << "Введите конец интервала b: ";
        cin >> b;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Некорректный ввод. Введите число: ";
            cin >> b;
        }

        cout << "Введите шаг h: ";
        cin >> h;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Некорректный ввод. Введите число: ";
            cin >> h;
        }
    }

    int integerCount = 0;

    cout << fixed << setprecision(6);

    cout << "\n========================================" << endl;
    cout << "|        x        |       2^x           |" << endl;
    cout << "========================================" << endl;

    // Цикл for выполняет табуляцию функции 2^x
    // на заданном интервале с шагом h.
    for (double x = a; x <= b + 1e-9; x += h)
    {
        double y = pow(2.0, x);

        cout << "| " << setw(15) << x
             << " | " << setw(18) << y << " |";

        // Находим ближайшее целое значение функции.
        double nearestInteger = round(y);

        // Проверяем, отличается ли значение функции
        // от ближайшего целого не более чем на 1e-9.
        if (fabs(y - nearestInteger) < 1e-9)
        {
            integerCount++;
            cout << " целое";
        }

        cout << endl;
        cout << "========================================" << endl;
    }
    
    cout << "\nКоличество целых значений функции: " << integerCount << endl;

    return 0;
}
