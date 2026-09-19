#include <iostream>
using namespace std;

int main()
{
    // Task: Find the areas of two circles and the ring

    // Declaration of variables
    double R1, R2;
    double S1, S2, S3;
    double pi = 3.14;

    // Start of the task
    cout << "Task: Find the areas of two circles and the ring" << endl;

    // Input of the radii
    cout << "Enter outer radius R1: ";
    cin >> R1;

    cout << "Enter inner radius R2: ";
    cin >> R2;

    // Calculate the area of the first circle
    S1 = pi * R1 * R1;

    // Calculate the area of the second circle
    S2 = pi * R2 * R2;

    // Calculate the area of the ring
    S3 = S1 - S2;

    // Output the results
    cout << "Area of the first circle S1: " << S1 << endl;
    cout << "Area of the second circle S2: " << S2 << endl;
    cout << "Area of the ring S3: " << S3 << endl;

    return 0;
}