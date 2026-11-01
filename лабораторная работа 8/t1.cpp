// Базовый уровень

#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string text;

    cout << "Введите строку: ";
    getline(cin, text);

    // Проверка на пустую строку
    while (text.empty())
    {
        cout << "Строка не должна быть пустой. Повторите ввод: ";
        getline(cin, text);
    }

    // Проверка длины строки
    if (text.length() < 3)
    {
        cout << "Строка слишком короткая. Невозможно удалить первый и последний символ.";
    }
    else
    {
        // Удаление первого и последнего символа
        string result = text.substr(1, text.length() - 2);

        cout << "Исходная строка: " << text << endl;
        cout << "Результат: " << result << endl;
    }

    return 0;
}
