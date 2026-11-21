//Варииант 14
//Средний уровень

#include <iostream>
#include <clocale>

using namespace std;

// Функция проверки сортировки массива по возрастанию
bool isSorted(int* arr, int size)
{
    if (arr == nullptr || size <= 0)
    {
        return false;
    }

    // Перемещаем указатель по элементам массива
    for (int* ptr = arr; ptr < arr + size - 1; ptr++)
    {
        // Сравниваем текущий элемент со следующим
        if (*ptr > *(ptr + 1))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    const int SIZE = 5;
    int arr[SIZE];

    cout << "Введите 5 элементов массива:" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    // Вывод исходного массива
    cout << "Массив: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Проверка сортировки
    if (isSorted(arr, SIZE))
    {
        cout << "Массив отсортирован по возрастанию." << endl;
    }
    else
    {
        cout << "Массив не отсортирован по возрастанию." << endl;
    }

    return 0;
}
