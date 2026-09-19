// Продвинутый уровень
#include <iostream>
#include <iomanip>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // Используем double, так как денежные значения и проценты
    // требуют большей точности
    double initialAmount = 0;
    double interestRate = 0;

    const int iterations = 1000;

    cout << "Введите начальную сумму: ";
    cin >> initialAmount;

    while (cin.fail() || initialAmount < 0)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите неотрицательное число: ";
        cin >> initialAmount;
    }

    cout << "Введите процентную ставку: ";
    cin >> interestRate;

    while (cin.fail() || interestRate < 0)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите неотрицательное число: ";
        cin >> interestRate;
    }

    // Перевод процентов в десятичную дробь
    double rate = interestRate / 100.0;

    // Приводим начальное значение к float для сравнения точности
    float floatAmount = static_cast<float>(initialAmount);

    // Значение double сохраняет большую точность
    double doubleAmount = initialAmount;

    // 1000 раз начисляем сложные проценты
    for (int i = 0; i < iterations; i++)
    {
        floatAmount = floatAmount * static_cast<float>(1.0 + rate);
        doubleAmount = doubleAmount * (1.0 + rate);
    }

    // Вычисляем разницу между результатами float и double
    double difference = doubleAmount - static_cast<double>(floatAmount);

    // Демонстрация накопления ошибки при сложении 0.1
    float sumFloat = 0.0f;
    double sumDouble = 0.0;

    for (int i = 0; i < iterations; i++)
    {
        sumFloat = sumFloat + 0.1f;
        sumDouble = sumDouble + 0.1;
    }

    // Демонстрация усечения и округления
    double value = 123.9876;

    // static_cast<int> отбрасывает дробную часть
    int truncatedValue = static_cast<int>(value);

    // round округляет число до ближайшего целого
    int roundedValue = static_cast<int>(round(value));

    cout << fixed << setprecision(10);

    cout << endl;
    cout << "=== Сложные проценты ===" << endl;
    cout << "Количество итераций: " << iterations << endl;
    cout << "Начальная сумма: " << initialAmount << endl;
    cout << "Процентная ставка: " << interestRate << "%" << endl;

    cout << "Результат float: " << floatAmount << endl;
    cout << "Результат double: " << doubleAmount << endl;
    cout << "Разница: " << difference << endl;

    cout << endl;
    cout << "=== Накопление ошибки ===" << endl;
    cout << "Сумма float: " << sumFloat << endl;
    cout << "Сумма double: " << sumDouble << endl;

    cout << "Отклонение float от 100: "
         << static_cast<double>(sumFloat) - 100.0 << endl;

    cout << "Отклонение double от 100: "
         << sumDouble - 100.0 << endl;

    cout << endl;
    cout << "=== Усечение и округление ===" << endl;
    cout << "Исходное значение: " << value << endl;
    cout << "Усеченное значение: " << truncatedValue << endl;
    cout << "Округленное значение: " << roundedValue << endl;

    cout << endl;
    cout << "=== Сравнение способов приведения типов ===" << endl;

    double testNumber = 7.8;

    // Явное приведение типа через static_cast
    int staticCastResult = static_cast<int>(testNumber);

    // Функциональная форма приведения типа
    int functionalCastResult = int(testNumber);

    cout << "static_cast<int>(7.8): "
         << staticCastResult << endl;

    cout << "int(7.8): "
         << functionalCastResult << endl;

    return 0;
}
