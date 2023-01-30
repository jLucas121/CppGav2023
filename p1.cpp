// program number: p1
// Your name: James Smith
// Date Started - Date Finished: 01/30/23
// Description: shows examples of output in c++

#include <iostream> //enables functionality of cout/cin
using namespace std; // needed for cout/cin

int main() // this shows the start of the program, program is placed inside of curly braces{}

{
    cout << "hello"; //everything within double quotes will show as is
    cout << "\n";  // \n denotes a new line, like pressing enter
    cout << "human" << "\n";

    //variables are named storage locations for numbers, strings and characters
    // string is anything enclosed in quotes

    string myname = "Lucas";
    //^type    ^declared variable
    cout << "your name is:" << myname << "\n";

    //integer is a whole number with only a zero after the decimal
    int wholeNum = 42.0;
       //^type    ^declared variable
    cout << "the number stored within variable: wholeNum is:" << wholeNum << "\n";

    //float or double is a number where the decimal part of the number is NOT zero
    float myFloat = 42.42;
    cout << "the number stored in variable: myFloat is:" << myFloat << "\n";

    return 0; //denotes program end

}

/* ====OUTPUT====
hello
human
your name is:Lucas
the number stored within variable: wholeNum is:42
the number stored in variable: myFloat is:42.42

Process returned 0 (0x0)   execution time : 0.017 s
Press any key to continue.
*\




