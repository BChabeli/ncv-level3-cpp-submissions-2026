
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int calcSum(int num1, int num2);
int calcDifference(int num1, int num2);
int calcProduct(int num1, int num2);
double calcQuotient(int num1, int num2);


int calcSum(int num1, int num2)
{
    return num1 + num2;
}

int calcDifference(int num1, int num2)
{
    return num1 - num2;
}

int calcProduct(int num1, int num2)
{
    return num1 * num2;
}


double calcQuotient(int num1, int num2)
{
    return (double)num1 / num2;
}


int main()
{
    int num1, num2;
    char operation;


    srand(time(0));

    num1 = rand() % 50 + 1;
    num2 = rand() % 50 + 1;


    cout << "First number: " << num1 << endl;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Switch statement
    switch (operation)
    {
        case '+':
            cout << num1 << " + " << num2 << " = "
                 << calcSum(num1, num2) << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = "
                 << calcDifference(num1, num2) << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = "
                 << calcProduct(num1, num2) << endl;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = "
                 << calcQuotient(num1, num2) << endl;
            break;

        default:
            cout << "Invalid math operation!" << endl;
    }

    _getch();
    return 0;
}
