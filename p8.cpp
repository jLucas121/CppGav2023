// program number: p8
// Your name: James Smith
// Date Started - Date Finished: 02/06/23
// Description: Compute Persons Height and return message to user

#include <iostream>
using namespace std;

int main()

{
    int Height; //Declaring Variable "Height"
    int Feet; // Declaring Variable "Feet"
    int Inches; // Declaring Variable "Inches"

    cout << "Please enter your height as follows:" <<endl;
    cout << "Please enter feet:";
    cin >> Feet;
    cout << "Please enter inches:";
    cin >> Inches;
    Height = (Feet * 12) + Inches;
    cout << "Your height is ";
    cout << Feet;
    cout << " Feet + ";
    cout << Inches;
    cout << " Inches = ";
    cout << Height;
    cout << " Inches" <<endl;

    if (Height < 60) // if user is less than 60 inches in  height
    {
        cout << "You are Short!";
    }
    else if (Height > 70) // if user is over 70 inches in height
    {
        cout << "You are tall!";
    }
    else if ((Height > 60) && (Height < 70)) // if user is between 60 and 70 inches in height
    {
        cout <<"You're avg, bud";
    }

    return 0; // program end

}

/*

====OUTPUT====
Please enter your height as follows:
Please enter feet:6
Please enter inches:1
Your height is 6 Feet + 1 Inches = 73 Inches
You are tall!
Process returned 0 (0x0)   execution time : 3.073 s
Press any key to continue.

Please enter your height as follows:
Please enter feet:4
Please enter inches:2
Your height is 4 Feet + 2 Inches = 50 Inches
You are Short!
Process returned 0 (0x0)   execution time : 2.806 s
Press any key to continue.

Please enter your height as follows:
Please enter feet:5
Please enter inches:4
Your height is 5 Feet + 4 Inches = 64 Inches
You're avg, bud
Process returned 0 (0x0)   execution time : 2.070 s
Press any key to continue.

*/
