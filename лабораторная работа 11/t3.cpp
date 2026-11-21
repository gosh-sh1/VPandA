//Варииант 14
//Повышенный уровень

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int number = 123456;

    // Создаём универсальный указатель void*
    void* ptr = &number;

    cout << "Значение переменной: " << number << endl;

    // Выводим адрес переменной
    cout << "Адрес переменной: " << ptr << endl;

    // Нельзя выполнять арифметику непосредственно с void*
    // ptr++; // Ошибка компиляции

    // Приводим void* к char* для побайтового доступа
    char* bytePtr = static_cast<char*>(ptr);

    cout << "\nПобайтовый доступ к памяти:" << endl;

    // Проходим по каждому байту переменной
    for (int i = 0; i < sizeof(number); i++)
    {
        cout << "Байт " << i + 1 << ": "
            << static_cast<int>(
                static_cast<unsigned char>(*(bytePtr + i))
                );

        cout << ", адрес: " << static_cast<void*>(bytePtr + i) << endl;
    }

    cout << "\nРазмер переменной: "
        << sizeof(number) << " байт" << endl;

    return 0;
}
