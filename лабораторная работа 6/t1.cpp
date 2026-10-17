// Базовый уровень
#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Установка локализации для корректного отображения кириллицы
    setlocale(LC_ALL, "Russian");

    const int SIZE = 10; // Размер массива - константа, известная на этапе компиляции
    int arr[SIZE];

    // --- 1. ЗАПОЛНЕНИЕ МАССИВА С КЛАВИАТУРЫ ---
    cout << "Введите " << SIZE << " целых чисел:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "arr[" << i << "] = ";
        // Защита от ввода неверных данных (букв или символов)
        while (!(cin >> arr[i])) {
            cout << "Ошибка ввода! Введите целое число: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // --- 2. ВЫВОД МАССИВА НА ЭКРАН ---
    cout << "\nВведённый массив:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // --- 3. ПОИСК ПЕРВОГО НУЛЕВОГО ЭЛЕМЕНТА ---
    int zeroIndex = -1; // -1 означает, что элемент ещё не найден
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == 0) {
            zeroIndex = i; // Сохраняем индекс найденного нуля
            break;         // Прерываем цикл при первом же нахождении
        }
    }

    // --- 4. ВЫВОД РЕЗУЛЬТАТА ---
    cout << "\nРезультат:" << endl;
    if (zeroIndex != -1) {
        cout << "Индекс первого нулевого элемента: " << zeroIndex << endl;
    } else {
        cout << "Нулевые элементы не найдены: " << zeroIndex << endl;
    }

    return 0;
}
