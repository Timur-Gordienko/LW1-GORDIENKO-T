#include <iostream>
using namespace std;
//begin10
int main()
{
    // Завдання: знайти площі двох кругів і кільця

    // Оголошення змінних
    double R1, R2;
    double S1, S2, S3;
    double pi = 3.14;

    // Початок завдання
    cout << "Task: Find the areas of two circles and the ring" << endl;

    // Введення радіусів
    cout << "Enter outer radius R1: ";
    cin >> R1;

    cout << "Enter inner radius R2: ";
    cin >> R2;

    // Обчислити площу першого кола
    S1 = pi * R1 * R1;

    // Обчислити площу другого кола
    S2 = pi * R2 * R2;

    // Обчислити площу кільця
    S3 = S1 - S2;

    // Вивести результати
    cout << "Area of the first circle S1: " << S1 << endl;
    cout << "Area of the second circle S2: " << S2 << endl;
    cout << "Area of the ring S3: " << S3 << endl;

    return 0;
}
