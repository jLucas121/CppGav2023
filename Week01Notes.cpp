// program number:
// Your name: James Smith
// Date Started - Date Finished: 01/30/23
// Description: What is the program supposed to do

// ^^^ these 4 lines of comments are worth 30% of your grade

// COMMENT, anything that starts with //
// comments are not considered part of your program/code
// comments are just explanation for your code
#include <iostream>
using namespace std;
int main()
{
    // OUTPUT = information comes OUT of the program
    cout << "Hello" << endl;
    //              ^^^^^^^ INSERT A NEW LINE
    // cout << is how we show output in C++
    // DIFFERENT TYPES OF INFORMATION = "DATA TYPES"
    // Whole Numbers, Decimal Numbers, Characters, Text
    // Whole Num = Integer
    // Decimal Num = Float, Double
    // Characters are anything in ' ' (single quotes)
    // Text is anything in " " (double quotes)
    // VARIABLES = words we make up to refer to places in memory where information is stored

    // Declaring variables = reserving these words as variable names and of specific data type

// DATA_TYPE    VARIABLE_NAME
    int          age; // integer       4 bytes = -2,147,483,648 to 2,147,483,647
    float        weight; // decimal    4 bytes = 3.4E +/- 38 (7 digits)
    double       E;     // decimal     8 bytes = 15 digits = 1.7E +/- 38
    char         Letter; // character  1 byte = -128 to 127
    string       Text;  // String
    string       firstName;
    // Rules for variable names:
    // 1) Can't start with a number
    // 2) Can't have spaces
    // 3) No special characters:!@#$%^&* ... only underscore _ is allowed
    // 4) Can't use reserved words: cout, char, int, float, double
    // 5) Use meaningful variable names
    cout << "age = "          << age << endl; // age = 32767
    //      ^^^^^^^^ LABEL       ^^^ content stored in the variable
    // INITIALIZE THE VARIABLES (because values in them will be "garbage"
    age = 9;
    cout << "age = " << age << endl;
    weight = 10.5;
    E = 1.234566;
    Letter = 'A';
    Text = "Hello World!!";

    //input cout pushes info, cin takes in input
    cout<<"enter a new value for age:";
            //^^^^^^^^^ this is called a prompt, tells user what to enter
    cin >> age; //input using cin
    cout<<"This is the new value for age:" << age << endl;

    //bit = smallest piece of info, 0 (off/false) or 1 (on/true) .
    //BIT(binary)      Decimal
    // _
    //0                 0
    //1                 1
    //00                0
    //01                1
    //10                2
    //11                3
    // _  _  _  _  _ _ _ _ = 8 bits = 1 byte
    //128 64 32 16 8 4 2 1
    //1    1  1 1 1  1  1 1 = 128+ 64+ 32+ 16+ 8+ 4+ 2+ 1 = 255
    //

    //p4 hint




}
