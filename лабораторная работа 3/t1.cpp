#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int number = 0;

    // Защита от некорректного ввода
    cin >> number;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число: ";
        cin >> number;
    }

    //Проверка на кратность 15
    if (number % 3 == 0 and number % 5 == 0)
    {
        cout << "Кратно 15" << endl;
    }
    else
    {
        cout << "Не кратно 15" << endl;
    }

    return 0;
}
