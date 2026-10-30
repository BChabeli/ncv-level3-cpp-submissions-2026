#include <iostream>
#include <string>


using namespace std;
void calcSum(int num1, int num2);

int main()
{
    int n1 = 22, n2 = 12;
    calcSum(n1, n2);          // arguments
}

void calcSum(int num1, int num2)   // parameters
{
    cout << num1 + num2;
}
