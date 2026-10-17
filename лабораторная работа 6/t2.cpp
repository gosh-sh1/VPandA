// Средний уровень
#include <iostream>
#include <iomanip>
#include <cstdlib> // Для rand(), srand()
#include <ctime>   // Для time()

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int SIZE = 20;
    int arr[SIZE];

    // Инициализация генератора случайных чисел текущим временем
    srand(static_cast<unsigned int>(time(nullptr)));

    // --- 1. ЗАПОЛНЕНИЕ МАССИВА СЛУЧАЙНЫМИ ЧИСЛАМИ ОТ -50 ДО 50 ---
    // Формула для диапазона [min..max]: min + rand() % (max - min + 1)
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = -50 + rand() % 101;
    }

    // --- 2. ФОРМАТИРОВАННЫЙ ВЫВОД МАССИВА ---
    cout << "Сгенерированный массив (размер " << SIZE << "):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << setw(5) << arr[i];
        if ((i + 1) % 10 == 0) {
            cout << endl; // Перенос строки каждые 10 элементов
        }
    }
    cout << endl;

    // --- 3. ПОИСК И ПОДСЧЁТ ЛОКАЛЬНЫХ МИНИМУМОВ ---
    int localMinCount = 0;
    cout << "Локальные минимумы в массиве:" << endl;

    for (int i = 0; i < SIZE; ++i) {
        bool isLocalMin = false;

        if (i == 0) {
            // Первый элемент имеет только одного правого соседа
            if (arr[0] < arr[1]) {
                isLocalMin = true;
            }
        } 
        else if (i == SIZE - 1) {
            // Последний элемент имеет только одного левого соседа
            if (arr[SIZE - 1] < arr[SIZE - 2]) {
                isLocalMin = true;
            }
        } 
        else {
            // Внутренние элементы проверяются по двум соседям (слева и справа)
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
                isLocalMin = true;
            }
        }

        // Если условие локального минимума выполнено — фиксируем его
        if (isLocalMin) {
            localMinCount++;
            cout << "  Индекс " << setw(2) << i << ": значение = " << arr[i] << endl;
        }
    }

    // --- 4. ВЫВОД ИТОГОВОГО КОЛИЧЕСТВА ---
    cout << "\nВсего локальных минимумов: " << localMinCount << endl;

    return 0;
}
