// program number: p5
// Your name: James Smith
// Date Started - Date Finished: 01/30/23
// Description: program to take user character input then outputs user input as shape

//Write a program that asks for a character INPUT from the keyboard and then
//OUTPUTS a large block letter "C" composed of that character.

#include <iostream> //enables functionality of cout/cin
using namespace std;

int main()
{
    //initialize variables to be used
    char L;

    cout << "please enter a character to be used: " << endl;//asks user for input
    cin >> L ; //assigns user character to variable
    cout << "character entered was: "<< L << endl;//shows user entered variable
    cout << endl;
    cout << endl;
    cout << "******************************************************************"<<endl;
    cout << endl;
    cout << "         " << L << " " << L << " " << L <<endl;
    cout << "       " << L << "       " << L <<endl;
    cout << "     "  << L <<endl;
    cout << "     "  << L <<endl;
    cout << "     "  << L <<endl;
    cout << "       " << L << "       " << L <<endl;
    cout << "         " << L << " " << L << " " << L <<endl;
    cout <<endl;
    cout << "******************************************************************"<<endl;
    cout << " Computer Science is cool stuff!"<<endl;

    return 0;
}
/*
please enter a character to be used:
D
character entered was: D


******************************************************************

         D D D
       D       D
     D
     D
     D
       D       D
         D D D

******************************************************************
 Computer Science is cool stuff!

Process returned 0 (0x0)   execution time : 1.951 s
Press any key to continue.

*\
