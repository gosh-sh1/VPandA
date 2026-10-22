// Вариант 14
// Средний уровень
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const int N = 6;

    int matrix[N][N];
    int sumDiagonal = 0;
    int sumAbove = 0;
    int sumTotal = 0;

    srand(static_cast<unsigned>(time(0)));

    // Заполнение матрицы случайными числами от 1 до 50
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = 1 + rand() % 50;
        }
    }

    // Сумма главной диагонали и элементов выше неё
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sumDiagonal += matrix[i][j];
            }
            else if (j > i)
            {
                sumAbove += matrix[i][j];
            }
        }
    }

    sumTotal = sumDiagonal + sumAbove;

    cout << "\nСумма главной диагонали: " << sumDiagonal << endl;

    cout << "Сумма элементов выше главной диагонали: " << sumAbove << endl;

    cout << "Общая сумма: " << sumTotal << endl;

    return 0;
}
