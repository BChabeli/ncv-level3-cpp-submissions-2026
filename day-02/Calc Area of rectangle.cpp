#include <iostream>

using namespace std;

int main(){

//Declare and assign
float length, breadth, area, perimeter = 0;

cout << "Please enter the length of the rectangle: ";
cin >> length;
cout << "Please enter the breadth of the rectangle: ";
cin >> breadth;

//Calculate the area and perimeter

area = length * breadth;
perimeter = (length + breadth) * 2;

//Display the output
cout << "The area of the rectangle is: " << area << endl;
cout << "The perimeter of the rectangle is: " << perimeter << endl;

return 0;
}
