#include <iostream>
#include <string>


using namespace std;
int main()
{
    int number;
    int sum;
    int avg;

    for(int i = 1; i <= 5; i++)
    {

        cout<<"Enter a number  : "<<i<< endl;

        cin>> number;
        if(number >= 1 && number <= 50)
           {
               sum+=number;
               avg = sum /5;
           } else

        cout<<"Number entered is invalid" <<endl;

           }
           cout<<"Your total is " << sum << endl;


    //number +=number;

    cout<<"Your average is " << avg << endl;

    return 0;
}

