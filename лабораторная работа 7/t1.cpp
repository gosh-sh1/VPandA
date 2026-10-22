// Вариант 14
// Базовый уровень
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const int ROWS = 5;
    const int COLS = 3;

    int matrix[ROWS][COLS];
    int sum = 0;

    srand(static_cast<unsigned>(time(0)));

    // Заполнение матрицы случайными числами от 1 до 50
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = 1 + rand() % 50;
        }
    }

    // Вычисление суммы третьего столбца
    for (int i = 0; i < ROWS; i++)
    {
        sum += matrix[i][2];
    }

    cout << "\nЭлементы третьего столбца:" << endl;

    for (int i = 0; i < ROWS; i++)
    {
        cout << matrix[i][2] << " ";
    }

    cout << "\nСумма элементов третьего столбца : " << sum << endl;

    return 0;
}
