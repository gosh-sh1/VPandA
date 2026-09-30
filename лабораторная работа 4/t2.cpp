// Средний уровень
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int choice;
    
    cout << "1. Площадь круга" << endl;
    cout << "2. Площадь прямоугольника" << endl;
    cout << "3. Площадь треугольника (по основанию и высоте)" << endl;
    cout << "4. Площадь квадрата" << endl;
    cout << "Выберите операцию (1-4): ";
    
    // Защита от некорректного ввода
    cin >> choice:
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите число от 1 до 4: ";
        cin >> choice;;
    }
    
    // Оператор switch для выбора времени суток
    switch (choice)
    {
        case 1:
        {
            double radius;
            cout << "Введите радиус круга: ";
            cin >> radius;
            
            while (cin.fail() || radius < 0)
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Ошибка. Введите корректное положительное число для радиуса: ";
                cin >> radius;
            }
            
            const float PI = 3.14;
            cout << "Площадь круга = " << PI * radius * radius << endl;
            break;
        }
        case 2:
        {
            double width, height;
            cout << "Введите ширину и высоту прямоугольника через пробел: ";
            cin >> width >> height;
            
            while (cin.fail() || width < 0 || height < 0)
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Ошибка. Введите корректные положительные стороны: ";
                cin >> width >> height;
            }
            
            cout << "Площадь прямоугольника = " << width * height << endl;
            break;
        }
        case 3:
        {
            double base, height;
            cout << "Введите основание и высоту треугольника через пробел: ";
            cin >> base >> height;
            
            while (cin.fail() || base < 0 || height < 0)
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Ошибка. Введите корректные положительные значения: ";
                cin >> base >> height;
            }
            
            cout << "Площадь треугольника = " << 0.5 * base * height << endl;
            break;
        }
        case 4:
        {
            double side;
            cout << "Введите сторону квадрата: ";
            cin >> side;
            
            while (cin.fail() || side < 0)
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Ошибка. Введите корректную положительную сторону: ";
                cin >> side;
            }
            
            cout << "Площадь квадрата = " << side * side << endl;
            break;
        }
        default:
            cout << "Ошибка: неверный пункт меню (выберите от 1 до 4)!" << endl;
            break;
    }
    
    return 0;
}
