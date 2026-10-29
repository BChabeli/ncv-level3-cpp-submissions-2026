#include <iostream>
#include <string>


using namespace std;
int main()
{
    int number;
    int sum;
    int avg;
    int counter = 1;

    while(counter <= 5)
    {

        cout<<"Enter a number  : "<< counter <<endl;
        cin>> number;
        if(number >= 1 && number <= 50)
        {
               sum+=number;
               avg = sum /5;

            counter++;

        }
        else
             cout<<"Number entered is invalid" <<endl;

    }
    cout<<"Your total is " << sum << endl;
    cout<<"Your average is " << avg << endl;
}
