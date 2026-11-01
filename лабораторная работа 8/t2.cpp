// Средний уровень

#include <iostream>
#include <string>
#include <sstream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string text;
    string word;
    string result;

    cout << "Введите строку: ";
    getline(cin, text);

    stringstream ss(text);

    while (ss >> word)
    {
        if (result.empty())
        {
            result = word;
        }
        else
        {
            result = word + " " + result;
        }
    }

    cout << "Результат: " << result << endl;

    return 0;
}
