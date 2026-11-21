//Варииант 14
//Базовый уровень

#include <iostream>
#include <clocale>

using namespace std;

// Функция возведения числа в куб через указатель
void cube(int* ptr)
{
    if (ptr != nullptr)
    {
        *ptr = (*ptr) * (*ptr) * (*ptr);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;

    cout << "Введите число: ";
    cin >> number;

    // Передаём адрес переменной в функцию
    cube(&number);

    cout << "Куб числа: " << number << endl;

    return 0;
}
