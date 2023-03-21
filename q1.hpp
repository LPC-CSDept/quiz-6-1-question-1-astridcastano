#include <iostream>
#include <iomanip>

using namespace std;

void swapTwoValues(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapTwoValues(float f1, float f2)
{
    float temp = f1;
    f1 = f2;
    f2 = temp;
}

void getinput(int& num1, int& num2)
{
    cout << "Enter two integer values: ";
    cin >> num1 >> num2;
}

void getinput(float& fnum1, float& fnum2)
{
    cout << "Enter two float values: ";
    cin >> fnum1 >> fnum2;
}


