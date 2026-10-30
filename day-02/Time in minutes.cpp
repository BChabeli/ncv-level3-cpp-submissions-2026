#include <iostream>
#include <string>

using namespace std;

int main(){

//Declare and assign
int time = 0;
int hours = 0;
int minutes = 0;
cout << "Please enter the time in minutes: ";
cin >> time;

//Calculate the hours and minutes

hours = time / 60;
minutes = time % 60;

//Display the output
cout << hours << "Hours\t";
cout << minutes << "Minutes" << endl;

return 0;
}
