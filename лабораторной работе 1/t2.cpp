//Средний уровень
#include <iostream>

using namespace std;

int main()
{
    double width = 0, height = 0;

    // Ввод и проверка ширины
    cout << "Enter width: ";
    cin >> width;
    while (cin.fail() || width <= 0)
    {
        cin.clear(); // Сброс флага ошибки cin
        cin.ignore(10000, '\n'); // Очистка некорректных символов из буфера
        cout << "Invalid input! Width must be a positive number. Enter width again: ";
        cin >> width;
    }

    // Ввод и проверка высоты
    cout << "Enter height: ";
    cin >> height;
    while (cin.fail() || height <= 0)
    {
        cin.clear(); // Сброс флага ошибки cin
        cin.ignore(10000, '\n'); // Очистка некорректных символов из буфера
        cout << "Invalid input! Height must be a positive number. Enter height again: ";
        cin >> height;
    }

    // Расчет периметра и площади с явным вещественным множителем 2.0
    double perimeter = 2.0 * (width + height);
    double area = width * height;

    // Наглядный вывод результатов с текстовыми пояснениями
    cout << "P = " << perimeter << endl << "S = " << area << endl;

    return 0;
}
