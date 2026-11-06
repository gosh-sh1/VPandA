// Базовый уровень

#include <iostream>
#include <clocale>

using namespace std;

// Функция поиска максимума двух чисел
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b;

    cout << "Введите первое целое число: ";
    cin >> a;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите целое число: ";
        cin >> a;
    }

    cout << "Введите второе целое число: ";
    cin >> b;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите целое число: ";
        cin >> b;
    }

    cout << "Максимальное число: " << max(a, b) << endl;

    return 0;
}
