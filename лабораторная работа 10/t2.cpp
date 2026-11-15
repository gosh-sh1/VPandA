// Вариант 14
// Средний уровень

#include <iostream>
#include <clocale>

using namespace std;

// Функция обмена двух вещественных чисел через ссылки
void digitStats(int n, int& sum, int& product)
{
    sum = 0;
    product = 1;

    long long number = n;

    if (number < 0)
    {
        number = -number;
    }

    if (number == 0)
    {
        sum = 0;
        product = 0;
        return;
    }

    while (number > 0)
    {
        int digit = number % 10;

        sum += digit;
        product *= digit;

        number /= 10;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    int sum, product;

    cout << "Введите целое число: ";
    cin >> n;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите целое число: ";
        cin >> n;
    }

    digitStats(n, sum, product);

    cout << "\nСумма цифр числа: " << sum << endl;
    cout << "Произведение цифр числа: " << product << endl;

    return 0;
}
