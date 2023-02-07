// program number: p10
// Your name: James Smith
// Date Started - Date Finished: 02/06/23
// Description: Calculate area of rectangle given the width

//Algorithm:
//INPUT: Ask the user to enter float variables Width and Hight of a rectangle.
//PROCESSING: Compute the Area and Perimeter of the rectangle.
//OUTPUT: Show the Area and Perimeter of the rectangle rounded to 1 decimal.

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    //Initializing variables
    float Height;
    float Width;
    float Area;
    float Perimeter;

    //User input
    cout << "Please enter Height of Rectangle: ";
    cin >> Height;

    if (Height <= 0) // Validate Height
     {
        cout << "Invalid Input: Height must be > 0" <<endl;
        return 0;
    }

    cout << "Please enter Width of Rectangle: ";
    cin >> Width;

    if (Width <= 0) //Validate Width
    {
        cout <<"Invalid Input: Both Width and Height must be > 0" <<endl;
        return 0;
    }



    //Calculations
    Area = Width * Height;
    Perimeter = 2* (Height + Width);

    //output info from calculations

    cout << "Area = ";
    cout << fixed << setprecision(1) << Area <<endl;
    cout << "Perimeter = ";
    cout << fixed << setprecision(1) << Perimeter <<endl;

    return 0;

}


/*
====OUTPUT====

Please enter Height of Rectangle: 3.11
Please enter Width of Rectangle: 4.2
Area = 13.1
Perimeter = 14.6

Process returned 0 (0x0)   execution time : 3.314 s

Please enter Height of Rectangle: -1
Invalid Input: Height must be > 0

Process returned 0 (0x0)   execution time : 2.489 s

Please enter Height of Rectangle: 3.11
Please enter Width of Rectangle: -4.2
Invalid Input: Both Width and Height must be > 0

Process returned 0 (0x0)   execution time : 5.883 s
*/
