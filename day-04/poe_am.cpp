#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace std;

void getNumbers(double &num1, double &num2);
void calcSum(double num1, double num2);
void calcDifference(double num1, double num2);
void calcProduct(double num1, double num2);
void calcQuotient(double num1, double num2);

int main()
{
    double num1, num2;

    getNumbers(num1, num2);

    calcSum(num1, num2);
    calcDifference(num1, num2);
    calcProduct(num1, num2);
    calcQuotient(num1, num2);

    return 0;
}

void getNumbers(double &num1, double &num2)
{
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
}

void calcSum(double num1, double num2)
{
    cout << "Sum: " << num1 + num2 << endl;
}

void calcDifference(double num1, double num2)
{
    cout << "Difference: " << num1 - num2 << endl;
}

void calcProduct(double num1, double num2)
{
    cout << "Product: " << num1 * num2 << endl;
}


void calcQuotient(double num1, double num2)
{
    if (num2 != 0)
    {
        cout << "Quotient: " << num1 / num2 << endl;
    }
    else
    {
        cout << "Cannot divide by zero!" << endl;
    }
}





