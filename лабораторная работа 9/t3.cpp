// Повышенный уровень

#include <iostream>
#include <string>
#include <clocale>

using namespace std;

// Прототипы функций
string inputText();
void printText(string text);
string reverseText(string text);
string replaceSubstring(string text, string oldPart, string newPart);
int countWords(string text);
void printMenu();

int main()
{
    setlocale(LC_ALL, "Russian");

    string text = "";
    int choice;

    do
    {
        printMenu();
        cin >> choice;

        while (cin.fail() || choice < 0 || choice > 5)
        {
            cin.clear();
            cin.ignore(10000, '\n');

            cout << "Некорректный ввод. Выберите пункт от 0 до 5: ";
            cin >> choice;
        }

        cin.ignore(10000, '\n');

        switch (choice)
        {
            case 1:
            {
                text = inputText();
                break;
            }

            case 2:
            {
                printText(text);
                break;
            }

            case 3:
            {
                text = reverseText(text);
                cout << "Строка перевёрнута." << endl;
                break;
            }

            case 4:
            {
                string oldPart, newPart;

                cout << "Введите подстроку для замены: ";
                getline(cin, oldPart);

                while (oldPart.empty())
                {
                    cout << "Подстрока не должна быть пустой. Повторите ввод: ";
                    getline(cin, oldPart);
                }

                cout << "Введите новую подстроку: ";
                getline(cin, newPart);

                text = replaceSubstring(text, oldPart, newPart);

                cout << "Замена выполнена." << endl;
                break;
            }

            case 5:
            {
                cout << "Количество слов: " << countWords(text) << endl;
                break;
            }

            case 0:
            {
                cout << "Выход из программы." << endl;
                break;
            }
        }

    } while (choice != 0);

    return 0;
}

// Функция ввода строки
string inputText()
{
    string text;

    cout << "Введите текст: ";
    getline(cin, text);

    return text;
}

// Функция вывода строки
void printText(string text)
{
    if (text.empty())
    {
        cout << "Строка пустая." << endl;
    }
    else
    {
        cout << "Текст: " << text << endl;
    }
}

// Функция переворота строки
string reverseText(string text)
{
    int length = text.length();

    for (int i = 0; i < length / 2; i++)
    {
        char temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }

    return text;
}

// Функция замены подстроки
string replaceSubstring(string text, string oldPart, string newPart)
{
    int position = 0;

    while ((position = text.find(oldPart, position)) != string::npos)
    {
        text.replace(position, oldPart.length(), newPart);
        position += newPart.length();
    }

    return text;
}

// Функция подсчёта слов
int countWords(string text)
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && text[i] != '\t' && text[i] != '\n')
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    return count;
}

// Функция вывода меню
void printMenu()
{
    cout << "\n===== ТЕКСТОВЫЙ РЕДАКТОР =====" << endl;
    cout << "1. Ввести строку" << endl;
    cout << "2. Вывести строку" << endl;
    cout << "3. Перевернуть строку" << endl;
    cout << "4. Заменить подстроку" << endl;
    cout << "5. Подсчитать количество слов" << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите действие: ";
}
