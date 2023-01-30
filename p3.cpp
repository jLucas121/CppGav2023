// program number: p3
// Your name: James Smith
// Date Started - Date Finished: 01/30/23
// Description: examples of Variables, Input, and Output; COUT / CIN

//OUTPUT : COUT <<
//INPUT : CIN >>



#include <iostream> //enables functionality of cout/cin
using namespace std; // needed for cout/cin

int main()

{
    //declare variables
    double weight; // can store eight bytes, can be a decimal
//  ^^type   ^var name
    float height; //decimals allowed
    int age; //no decimals, whole numbers only

    //initialize variables
    weight = 170.54; // sets var weight to 170.54
    height = 5.9; //sets var height to 5.9

    //output :prompt user to enter age
    cout<<"please enter your age as a whole number:";

    //input : user types something on the keyboard and hits enter

    cin>> age; //initializes var age to whatever user has entered

    //output again :show what user has entered and value of other variables

    cout<< "weight = "<< weight << "\n" << "height = "<< height << "\n";
    cout<<"the entered age was: " << age << "\n";
    cout.setf(ios::fixed); // specifies fixed point notation
    cout.setf(ios::showpoint); // specifies fixed point notation
    cout.precision(1); // specify that ONE decimal place will be shown
    cout<< "the weight with 1 decimal is " << weight <<"\n";

    return 0; //ends program
/*
====OUTPUT====
please enter your age as a whole number:28
weight = 170.54
height = 5.9
the entered age was: 28
the weight with 1 decimal is 170.5

Process returned 0 (0x0)   execution time : 1.712 s
Press any key to continue.
*\














}
