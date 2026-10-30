#include <iostream>
#include <string>


using namespace std;
int main()
{
    char gender;

    cout<<"Enter gender"<<endl;
    cin >>  gender;

    if (gender=='f')
    {
        cout<<"Welcome Ms"<<endl;
    }
    else if(gender=='m'){
         cout<<"Welcome Mr"<<endl;
    }
    //se
       //out<<"Enter the correct gender code"<<endl;

    return 0;
}
