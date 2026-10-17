// Повышенный уровень
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int SIZE = 20;
    int arr[SIZE];

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(nullptr)));

    // --- 1. ЗАПОЛНЕНИЕ МАССИВА СЛУЧАЙНЫМИ ЧИСЛАМИ [0..100] ---
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 101;
    }

    // --- 2. ВЫВОД ИСХОДНОГО МАССИВА ---
    cout << "Исходный массив (размер " << SIZE << "):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << setw(4) << arr[i];
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    // --- 3. ПОИСК САМОЙ ДЛИННОЙ ВОЗРАСТАЮЩЕЙ ПОСЛЕДОВАТЕЛЬНОСТИ ---
    int maxLength = 1;       // Длина самой длинной найденной последовательности
    int maxStartIndex = 0;   // Начальный индекс самой длинной последовательности

    int currentLength = 1;     // Длина текущей возрастающей последовательности
    int currentStartIndex = 0; // Начальный индекс текущей последовательности

    for (int i = 1; i < SIZE; ++i) {
        // Проверяем условие возрастания (каждый следующий элемент больше предыдущего)
        if (arr[i] > arr[i - 1]) {
            currentLength++; // Увеличиваем длину текущей последовательности
        } else {
            // Если возрастание прекратилось, проверяем, была ли текущая последовательность длиннее предыдущей максимальной
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = currentStartIndex;
            }
            // Сбрасываем параметры для поиска новой последовательности с текущего элемента
            currentLength = 1;
            currentStartIndex = i;
        }
    }

    // Финальная проверка после завершения цикла (если самая длинная последовательность заканчивается на последнем элементе массива)
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = currentStartIndex;
    }

    // --- 4. ВЫВОД РЕЗУЛЬТАТОВ АНАЛИЗА ---
    cout << "Результаты анализа:" << endl;
    cout << "Максимальная длина возрастающей последовательности: " << maxLength << endl;
    cout << "Начальный индекс: " << maxStartIndex << endl;
    cout << "Элементы последовательности: ";
    for (int i = maxStartIndex; i < maxStartIndex + maxLength; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
