// program number: p4
// Your name: James Smith
// Date Started - Date Finished: 01/30/23
// Description: C++ program that reads in two decimal numbers then outputs their sum and product

//sum is rounded to 1 decimal digit
//product is rounded to 2 decimal digits

//Write a C++ program that reads in two decimal numbers and then outputs their sum and product.

//OUTPUT : COUT <<
//INPUT : CIN >>



#include <iostream> //enables functionality of cout/cin
#include <iomanip>
using namespace std;
//=====FUNCTIONS INCLUDED IN iomanip ========
//resetiosflags: It clears the specified ios_base flags.

//setiosflags: It will set the ios_base flags.

//setbase: It will change the base which is needed as per the said base.

//setfill: It will fill with the character specified.

//setprecision: It will change the precision of any floating-point number.

//setw: It helps in changing the width of the next input or output field.

//get_money: It will segregate money value.

//put_money: It will format and generate an output which will be a monetary value.

//get_time: It will segregate the date or time value which will be sent in a specified format.

//put_time: It will format the date or time which will be providing as per the specified format.



int main()

{
    //initializes variables to be used
    float num1;
    float num2;
    float num1_num2;
    float num1_times_num2;

    //user enters variables assigned
    cout <<"please enter num1: ";
    cin >> num1;
    cout<<"please enter num2: ";
    cin >> num2;

    //shows numbers rounded to one and two decimal places
    cout << fixed << setprecision(1)<< num1 << "\n";//returns num1 rounded to the first decimal place
    cout << fixed << setprecision(2)<< num2 << "\n";//returns num2 rounded to the second decimal place

    //math of program
    num1_num2 = num1 += num2;//adds num1 and num2 together
    cout<< fixed << setprecision(1)<< "sum of num1 and num2 is : " <<num1_num2<<endl;
    //shows sum of num1 and num2 to one decimal place


    num1_times_num2 = num1 * num2;//multiples num1 and num2 together
    cout<< fixed << setprecision(2)<<"the product of num1 and num2 is : "<<num1_times_num2<<endl;
    //shows product of num1 and num2 to two decimal places


    return 0; //ends program

}
/*
====OUTPUT====
please enter num1: 42.88
please enter num2: 42.42
42.9
42.42
sum of num1 and num2 is : 85.3
the product of num1 and num2 is : 3618.43

Process returned 0 (0x0)   execution time : 5.834 s
Press any key to continue.
*\



