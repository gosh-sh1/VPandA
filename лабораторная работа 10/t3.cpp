// Вариант 14
// Повышенный уровень

#include <iostream>
#include <clocale>

using namespace std;

const int SIZE = 100;

// Функция обмена двух элементов через ссылки
void swapInt(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Сортировка пузырьком с подсчётом сравнений и обменов
void bubbleSort(int arr[], int size, int& comparisons,
    int& swaps, int& errorCode)
{
    comparisons = 0;
    swaps = 0;
    errorCode = 0;

    if (size <= 0 || size > SIZE)
    {
        errorCode = 1;
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            comparisons++;

            if (arr[j] > arr[j + 1])
            {
                swapInt(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
}

// Передача параметра по значению
void changeByValue(int x)
{
    x = 100;
}

// Передача параметра по ссылке
void changeByReference(int& x)
{
    x = 100;
}

// Передача параметра по указателю
void changeByPointer(int* x)
{
    if (x != nullptr)
    {
        *x = 100;
    }
}

// Функция возвращает ссылку на элемент массива
int& getElement(int arr[], int index)
{
    return arr[index];
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int arr[SIZE];
    int n;
    int comparisons, swaps;
    int errorCode;

    cout << "Введите размер массива (от 1 до 100): ";
    cin >> n;

    while (cin.fail() || n < 1 || n > SIZE)
    {
        cin.clear();
        cin.ignore(10000, '\n');

        cout << "Некорректный ввод. Введите размер массива от 1 до 100: ";
        cin >> n;
    }

    // Ввод элементов массива
    for (int i = 0; i < n; i++)
    {
        cout << "Введите элемент [" << i << "]: ";
        cin >> arr[i];

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');

            cout << "Некорректный ввод. Введите целое число: ";
            cin >> arr[i];
        }
    }

    // Демонстрация передачи параметров
    int x = 5;

    cout << "\nДемонстрация передачи параметров:" << endl;

    changeByValue(x);
    cout << "После передачи по значению: " << x << endl;

    changeByReference(x);
    cout << "После передачи по ссылке: " << x << endl;

    changeByPointer(&x);
    cout << "После передачи по указателю: " << x << endl;

    // Демонстрация возврата ссылки на элемент массива
    if (n > 0)
    {
        getElement(arr, 0) = getElement(arr, 0);
    }

    // Вывод исходного массива
    cout << "\nИсходный массив: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Выполнение сортировки
    bubbleSort(arr, n, comparisons, swaps, errorCode);

    if (errorCode != 0)
    {
        cout << "\nОшибка сортировки!" << endl;
        return 1;
    }

    // Вывод отсортированного массива
    cout << "\n\nОтсортированный массив: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Вывод результатов
    cout << "\n\nКоличество сравнений: " << comparisons << endl;
    cout << "Количество обменов: " << swaps << endl;
    cout << "Код ошибки: " << errorCode << endl;

    return 0;
}
