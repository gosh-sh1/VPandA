//Повышенный уровень
#include <iostream>

using namespace std;

int main()
{
    // Использование вещественного типа double для точности измерений
    double weight = 0, height = 0;

    // Ввод и проверка массы тела в килограммах
    cout << "Enter weight (kg): ";
    cin >> weight;
    while (cin.fail() || weight <= 0)
    {
        cin.clear(); // Очистка некорректных символов из буфера
        cin.ignore(10000, '\n'); // Очистка некорректных символов из буфера
        cout << "Invalid input! Weight must be positive. Enter weight again: ";
        cin >> weight;
    }

    // Ввод и проверка роста в метрах (например, 1.75)
    cout << "Enter height in meters (e.g. 1.75): ";
    cin >> height;
    while (cin.fail() || height <= 0 || height > 3.0)
    {
        cin.clear(); // Сброс флага ошибки cin
        cin.ignore(10000, '\n'); // Очистка некорректных символов из буфера
        cout << "Invalid input! Height must be in meters (0 to 3.0). Enter height again: ";
        cin >> height;
    }

    // Расчет индекса массы тела по формуле: BMI = weight / (height * height)
    double bmi = weight / (height * height);

    // Вывод результата
    cout << " BMI = " << bmi << endl;

    return 0;
}
