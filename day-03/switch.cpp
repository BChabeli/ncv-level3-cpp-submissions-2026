#include <iostream>
#include <string>


using namespace std;
int main()
{

    char gender;
    cout<<"Enter gender"<<endl;
    cin >>  gender;
    switch(gender)
    {
    case 'f':
      cout<<"Welcome Ms"<<endl;

    break;

    case 'm':
cout<<"Welcome Mr"<<endl;
    break;
        default:
        cout<<"Invalid code"<<endl;
    }

    return 0;
}
