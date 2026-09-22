// Средний уровень
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int age;
    char gender;
    
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

    cout << "Введите пол (M/F): ";
    cin >> gender;

    // Проверяем правильность введённого пола
    while (gender != 'M' && gender != 'F')
    {
        cout << "Некорректный ввод. Введите M или F: ";
        cin >> gender;
    }

    // Определяем категорию по полу и возрасту
    if (gender == 'M')
    {
        if (age < 18)
        {
            cout << "Юноша" << endl;
        }
        else
        {
            cout << "Мужчина" << endl;
        }
    }
    else
    {
        if (age < 18)
        {
            cout << "Девушка" << endl;
        }
        else
        {
            cout << "Женщина" << endl;
        }
    }

    return 0;
}
