#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

int mark = 0;
int PASS_MARK = 0;

if (mark >= PASS_MARK)
{
    if (attendance >= MIN_ATTENDANCE)
    {
        if (poeDone == 'Y' || poeDone == 'y')
            cout << "Admitted";
        else
            cout << "PoE incomplete";
    }
    else
        cout << "Attendance too low";
}
else
    cout << "Year mark too low";

    return 0;
}
