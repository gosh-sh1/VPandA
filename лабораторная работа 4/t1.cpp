// Лабораторная работа 4
// Вариант 14

// Базовый уровень
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int timeCode;
    
    cout << "Введите код времени суток (1 - Утро, 2 - День, 3 - Вечер, 4 - Ночь): ";
    cin >> timeCode:
    
    // Защита от некорректного ввода    
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число от 1 до 4: ";
        cin >> timeCode;;
    }
    
    // Оператор switch для выбора времени суток
    switch (timeCode)
    {
        case 1:
            cout << "Результат: Утро" << endl;
            break;
        case 2:
            cout << "Результат: День" << endl;
            break;
        case 3:
            cout << "Результат: Вечер" << endl;
            break;
        case 4:
            cout << "Результат: Ночь" << endl;
            break;
        default:
            cout << "Ошибка: код должен быть в диапазоне от 1 до 4!" << endl;
            break;
    }
    
    return 0;
}
