// program number: p9
// Your name: James Smith
// Date Started - Date Finished: 02/06/23
// Description: Program that asks for users grade as percent and returns letter grade

#include <iostream>
using namespace std;

int main()
{
    int Grade;

    cout << "Please enter your grade as a percent:"; //User enters their grade as percent
    cin >> Grade;

    if (Grade < 60) // Grade is a F
    {
        cout << "You have an F";
    }

    else if ((Grade >= 60)&&(Grade < 70)) // Grade is a D
    {
        cout << "You have an D";
    }

     else if ((Grade >= 70)&&(Grade < 80)) // Grade is a C
    {
        cout << "You have an C";
    }

     else if ((Grade >= 80)&&(Grade < 90)) // Grade is a B
    {
        cout << "You have an B";
    }

         else if (Grade >= 90) // Grade is a B
    {
        cout << "You have an A";
    }
    return 0;
}

/*
====OUTPUT====

Please enter your grade as a percent:50
You have an F
Process returned 0 (0x0)   execution time : 13.100 s
Press any key to continue.

Please enter your grade as a percent:62
You have an D
Process returned 0 (0x0)   execution time : 3.479 s
Press any key to continue.

Please enter your grade as a percent:75
You have an C
Process returned 0 (0x0)   execution time : 2.485 s
Press any key to continue.

Please enter your grade as a percent:88
You have an B
Process returned 0 (0x0)   execution time : 2.598 s
Press any key to continue.

Please enter your grade as a percent:98
You have an A
Process returned 0 (0x0)   execution time : 1.884 s
Press any key to continue.

*/
