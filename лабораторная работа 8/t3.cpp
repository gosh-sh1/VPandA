// Повышенный уровень

#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string email;

    cout << "Введите email: ";
    getline(cin, email);

    int atPosition = email.find('@');
    int dotPosition = email.find('.', atPosition);

    if (email.empty())
    {
        cout << "Email некорректен." << endl;
    }
    else if (email.find(' ') != string::npos)
    {
        cout << "Email некорректен." << endl;
    }
    else if (atPosition == string::npos)
    {
        cout << "Email некорректен." << endl;
    }
    else if (dotPosition == string::npos)
    {
        cout << "Email некорректен." << endl;
    }
    else
    {
        cout << "Email корректен." << endl;
    }

    return 0;
}
