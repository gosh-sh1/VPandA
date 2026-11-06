// Средний уровень

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;

const int SIZE = 100;

// Функция заполнения массива случайными числами
void fillRandom(int arr[], int size, int min, int max)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}

// Функция вывода массива
void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int numbers[SIZE];
    int size, min, max;

    cout << "Введите размер массива (от 1 до 100): ";
    cin >> size;

    while (cin.fail() || size <= 0 || size > SIZE)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите размер от 1 до 100: ";
        cin >> size;
    }

    cout << "Введите минимальное значение: ";
    cin >> min;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите целое число: ";
        cin >> min;
    }

    cout << "Введите максимальное значение: ";
    cin >> max;

    while (cin.fail() || max < min)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Максимум должен быть не меньше минимума: ";
        cin >> max;
    }

    fillRandom(numbers, size, min, max);

    cout << "\nСгенерированный массив: ";
    printArray(numbers, size);

    return 0;
}
