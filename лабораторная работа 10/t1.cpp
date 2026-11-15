// Вариант 14
// Базовый уровень

#include <iostream>
#include <clocale>

using namespace std;

// Функция обмена двух вещественных чисел через ссылки
void swap(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b;

    cout << "Введите первое вещественное число: ";
    cin >> a;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите вещественное число: ";
        cin >> a;
    }

    cout << "Введите второе вещественное число: ";
    cin >> b;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите вещественное число: ";
        cin >> b;
    }
    
    swap(a, b);

    cout << "\nРезультат обмена:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
