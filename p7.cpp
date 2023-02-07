// program number: p7
// Your name: James Smith
// Date Started - Date Finished: 02/06/23
// Description: Selection Sample Program

#include <iostream>
using namespace std;

int main()

{
    int Age; //Declares variable "Age"
    cout <<"Please enter age: "; //prompts user to enter age
    cin >> Age; // user enters age integer value

    //IF, ELSE IF Chain  //validates user input
    if (Age <0)
    {
        //if gets checked ALWAYS to see if condition is TRUE or False
        // if condition is TRUE COUT reads "Age is less than zero, invalid age
        cout << "Age is less than"; // 1st statement
        cout << "zero, invalid age"; //2nd statement

    }

    else if (Age > 18) //ELSE statement checked if previous condition is FALSE
    {
        //if true, reads "Age is less than 18"
        cout << "Age is less than 18";
    }

    else if (Age ==20) //gets checked only if previous condition is also false
    {
        cout << "Age is equal to 20"; //curly brackets are only needed if more than one statement
    }

    else if (Age !=21) // only gets checked if previous ELSE IF Statement is false
    {
        cout << "Age is not equal to 21";
    }

    else //happens automatically when previous ELSE IF is FALSE
        cout << "Age must be (not <0) , (not < 18) , (not == 20) and (not !=21)";

    // or = || <--- or
    // one of the conditions must be true for this to happen
    if ((Age > 0)||(Age > 123))
        cout << " Age is either less than 0 or greater than 123 ";

    // and (&&) <--- and statement, both must be true
    if ((Age > 18) && (Age < 21))
        cout << "Age is both greater than 18 and less than 21" <<endl;

    //nested if's, if inside another if
    if (Age > 18)
        if (Age <21)
    {
        cout << "Age is both greater than 18";
        cout << "And less than 21" <<endl;
    }

    return 0; //program end


}



/*
====OUTPUT====
Please enter age: -10
Age is less thanzero, invalid age
Process returned 0 (0x0)   execution time : 2.834 s
Press any key to continue.

Please enter age: 165
Age is less than 18 Age is either less than 0 or greater than 123
Process returned 0 (0x0)   execution time : 4.133 s
Press any key to continue.

Please enter age: 15
Age is not equal to 21 Age is either less than 0 or greater than 123
Process returned 0 (0x0)   execution time : 3.223 s
Press any key to continue.

Please enter age: 20
Age is less than 18 Age is either less than 0 or greater than 123 Age is both greater than 18 and less than 21
Age is both greater than 18And less than 21
Process returned 0 (0x0)   execution time : 4.807 s
Press any key to continue.

Please enter age: 21
Age is less than 18 Age is either less than 0 or greater than 123
Process returned 0 (0x0)   execution time : 6.058 s
Press any key to continue.
*/
