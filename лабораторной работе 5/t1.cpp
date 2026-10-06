// Вариант 14
// Базовый уровень
#include <iostream>
#include <iomanip>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    double a, b, h;

    cout << "Введите начало интервала а: ";
    cin >> a;

     while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Некорректный ввод. Введите число: ";
        cin >> a;
    }

    cout << "Введите начало интервала b: ";
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
        cout << "Ошибка: должно выполняться a <= b и h > 0." << '\n';

        cout << "Введите начало интервала а: ";
        cin >> a;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Некорректный ввод. Введите число: ";
            cin >> a;
        }

        cout << "Введите начало интервала b: ";
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

     cout << fixed << setprecision(4);

    cout << "\n================================" << endl;
    cout << "|        x        |      y     |" << endl;
    cout << "================================" << endl;

    // Цикл for используется для последовательного прохождения
    // всех точек интервала с заданным шагом h.
    // 1e-9 учитывает погрешность хранения чисел типа double.
    for (double x = a; x <= b + 1e-9; x += h)
    {
        // При x = 1 функция не определена,
        // поэтому эту точку пропускаем.
        if (fabs(x - 1.0) < 1e-9)
        {
            cout << "| " << setw(15) << x << " |   разрыв   |" << endl;
            continue;
        }

        double y = (x + 1.0) / (x - 1.0);

        cout << "| " << setw(15) << x << " | " << setw(10) << y << " |" << endl;
        cout << "================================" << endl;
    }

    return 0;
}
