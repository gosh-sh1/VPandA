//Средний уровень
#include <iostream>

using namespace std;

int main()
{
    int width = 0, height = 0;
    int perimeter = 0, area = 0;

    cout << "Enter width and height: ";

    cin >> width >> height;

    perimeter = 2 * (width + height);
    area = width * height;

    cout << " P = " << perimeter << " S = " << area << endl;

    return 0;
}