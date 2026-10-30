
#include <iostream>
#include <conio.h>
using namespace std;

// Function prototypes
void getNumbers(int numbers[]);
int countEven(int numbers[]);
void displayOdd(int numbers[]);
void sortNumbers(int numbers[]);
void displaySorted(int numbers[]);

// Function to enter 5 numbers
void getNumbers(int numbers[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
}

// Function to count even numbers
int countEven(int numbers[])
{
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

// Function to display odd numbers
void displayOdd(int numbers[])
{
    cout << "Odd numbers: ";

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;
}

// Function to sort numbers in ascending order
void sortNumbers(int numbers[])
{
    int temp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

// Function to display sorted numbers
void displaySorted(int numbers[])
{
    cout << "Sorted numbers: ";

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
}

// Main function
int main()
{
    // Declare array
    int numbers[5];

    // Call functions
    getNumbers(numbers);

    cout << "Number of even numbers: "
         << countEven(numbers) << endl;

    displayOdd(numbers);

    sortNumbers(numbers);

    displaySorted(numbers);

    _getch();
    return 0;
}
