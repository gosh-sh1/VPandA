// Повышенный уровень
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(static_cast<unsigned>(time(nullptr)));

    int mainChoice = -1;
    int bestScore = -1;
    
    // Главный цикл программы
    while (mainChoice != 0)
    {
        // Вывод главного меню
        cout << "1. Новая игра" << endl;
        cout << "2. Правила игры" << endl;
        cout << "3. Рекорды" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите пункт меню: ";
        cin >> mainChoice;
        
        // Проверка корректности ввода
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Некорректный ввод. Введите число от 0 до 3: ";
            cin >> mainChoice;
        }
        
        // Обработка выбранного пункта меню
        switch (mainChoice)
        {
            case 1:
            {
                int difficulty;

                cout << "\n--- ВЫБОР УРОВНЯ СЛОЖНОСТИ ---" << endl;
                cout << "1. Легкий (1-10)" << endl;
                cout << "2. Средний (1-50)" << endl;
                cout << "3. Сложный (1-100)" << endl;
                cout << "Выберите сложность: ";
                cin >> difficulty;
                
                // Проверка корректности ввода
                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Некорректный ввод. Введите число от 1 до 3: ";
                    cin >> difficulty;
                }

                int maxRange;
                
                // Определение диапазона в зависимости от сложности
                switch (difficulty)
                {
                    case 1:
                        maxRange = 10;
                        break;

                    case 2:
                        maxRange = 50;
                        break;

                    case 3:
                        maxRange = 100;
                        break;

                    default:
                        cout << "Неверный уровень сложности." << endl;
                        maxRange = 10;
                        break;
                }
                
                // Генерация случайного загаданного числа
                int secretNumber = rand() % maxRange + 1;
                
                int userGuess = 0;
                int attempts = 0;

                cout << "\nЯ загадал число от 1 до " << maxRange << "." << endl;
                
                // Цикл продолжается, пока игрок не угадает число
                while (userGuess != secretNumber)
                {
                    cout << "Введите число: ";
                    cin >> userGuess;
                    
                    // Проверка корректности введённого числа
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        cout << "Некорректный ввод. Введите целое число: ";
                        cin >> userGuess;
                    }

                    attempts++;
                    
                    // Проверка введённого числа
                    if (userGuess > secretNumber)
                    {
                        cout << "Меньше!" << endl;
                    }
                    else if (userGuess < secretNumber)
                    {
                        cout << "Больше!" << endl;
                    }
                    else
                    {
                        cout << "Поздравляем! Вы угадали число!" << endl;
                        cout << "Количество попыток: " << attempts << endl;

                        if (bestScore == -1 || attempts < bestScore)
                        {
                            bestScore = attempts;
                            cout << "Новый рекорд!" << endl;
                        }
                    }
                }

                break;
            }

            case 2:
            {
                cout << "\n--- ПРАВИЛА ИГРЫ ---" << endl;
                cout << "Компьютер загадывает случайное число." << endl;
                cout << "Вам необходимо угадать это число." << endl;
                cout << "После каждой попытки программа сообщает," << endl;
                cout << "больше или меньше загаданное число." << endl;
                cout << "Рекордом считается минимальное количество попыток." << endl;

                break;
            }

            case 3:
            {
                cout << "\n--- РЕКОРДЫ ---" << endl;

                if (bestScore == -1)
                {
                    cout << "Рекордов пока нет." << endl;
                }
                else
                {
                    cout << "Лучший результат: " << bestScore << " попыток." << endl;
                }

                break;
            }

            case 0:
            {
                cout << "Выход из программы. До свидания!" << endl;
                break;
            }
            
            // Обработка неизвестного пункта меню
            default:
            {
                cout << "Ошибка: такого пункта меню нет." << endl;
                break;
            }
        }
    }

    return 0;
}
