//Повышенный уровень
#include <iostream>

using namespace std;

int main()
{
    float weight = 0, height = 0;
    float bmi = 0;

    cout << "Enter weight and height: ";

    cin >> weight >> height;

    bmi = weight / (height * height);

    cout << " BMI = " << bmi << endl;

    return 0;
}