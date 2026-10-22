// Вариант 14
// Повышенный уровень
#include <iostream>
#include <iomanip>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const int N = 6;

    int matrix[N][N];
    int temp = 0;

    // Ввод матрицы с проверкой корректности данных
    cout << "Введите элементы матрицы " << N << "x" << N
        << " от 1 до 100:" << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            while (true)
            {
                cout << "Элемент [" << i << "][" << j << "]: ";

                cin >> matrix[i][j];

                // Проверка правильности ввода целого числа
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(10000, '\n');

                    cout << "Ошибка! Введите целое число."
                        << endl;
                }
                else if (matrix[i][j] < 1 ||
                    matrix[i][j] > 100)
                {
                    cout << "Ошибка! Число должно быть от 1 до 100."
                        << endl;
                }
                else
                {
                    break;
                }
            }
        }
    }

    // Сортировка каждой строки методом пузырька
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            for (int k = 0; k < N - 1 - j; k++)
            {
                if (matrix[i][k] > matrix[i][k + 1])
                {
                    temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }

    // Вывод отсортированной матрицы
    cout << "\nМатрица после сортировки строк по возрастанию:"
        << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(5) << matrix[i][j];
        }

        cout << endl;
    }

    return 0;
}
