// program number: p12
// Your name: James Smith
// Date Started - Date Finished: 02/06/23
// Description: User enters various coins, program outputs value in cents

//Parameters:
//User can enter # of quarters, dimes, nickels
//Outputs total monetary value in cents
//Validate input, must be positive

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    //declare variables
    int quarter;
    int dime;
    int nickel;
    int numQuarters;
    int numDimes;
    int numNickels;
    int totalCents;

    //user input
    cout << "Please enter number of quarters: ";
    cin >> numQuarters;

    cout << "Please enter number of dimes: ";
    cin >> numDimes;

    cout << "Please enter number of nickels: ";
    cin >> numNickels;



    //Calculations
    quarter = (25 * numQuarters);
    dime = (10 * numDimes);
    nickel = (5 * numNickels);
    totalCents = (quarter + dime + nickel );

    if (quarter >= 0 && dime >= 0 && nickel >= 0 )
    {
        cout << "You have ";
        cout << quarter;
        cout << " in Quarters, ";

        cout << "  ";
        cout << dime;
        cout << " in Dimes, ";

        cout << "  ";
        cout << nickel;
        cout << " in Nickels, ";


        cout <<"Which totals: ";
        cout << totalCents;
        cout << "cents";
    }
        else
        {
            cout << "all values must be positive";
        }



    return 0; //ends program
}

/*
====OUTPUT====

Please enter number of quarters: 2
Please enter number of dimes: 3
Please enter number of nickels: 1
You have 50 in Quarters,   30 in Dimes,   5 in Nickels, Which totals: 85cents
Process returned 0 (0x0)   execution time : 2.594 s

Please enter number of quarters: -2
Please enter number of dimes: 3
Please enter number of nickels: 1
all values must be positive
Process returned 0 (0x0)   execution time : 6.448 s



*/
