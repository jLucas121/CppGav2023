// program number: p11
// Your name: James Smith
// Date Started - Date Finished: 02/06/23
// Description:Determine if User can vote or not

//Parameters:
//User can vote if user IS a citizen AND User is >= 18 AND is registered to vote



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()

{
    //Declare Varibales
    string Registered;
    string Citizen;
    int votingAge;



    //Voting Age input
    cout << "How old are you? ";
    cin >> votingAge;


    //Citizen input
    cout << "Are you an US Citizen: ";
    cin >> Citizen;


    //Registered input
    cout << "Are you registered to vote: ";
    cin >> Registered;


    //Validate input
     if ( votingAge >= 18 && Citizen =="yes" && Registered =="yes")
    {
        cout << "Congratulations you can vote.\n";
    }
    else
    {
        if ( votingAge < 18 )
            cout << "You must be over 18 to vote.\n";
            if (Citizen != "yes")
            cout << "You must be a citizen to vote. \n";
                if (Registered!= "yes")
                cout << "You must be registered to vote. \n";
    }
    return 0;
}


/*
====OUTPUT====

How old are you? 20
Are you an US Citizen: yes
Are you registered to vote: yes
Congratulations you can vote.

Process returned 0 (0x0)   execution time : 7.403 s

How old are you? 20
Are you an US Citizen: yes
Are you registered to vote: no
You must be registered to vote.

Process returned 0 (0x0)   execution time : 3.264 s

How old are you? 20
Are you an US Citizen: no
Are you registered to vote: no
You must be a citizen to vote.
You must be registered to vote.

Process returned 0 (0x0)   execution time : 6.166 s

How old are you? 17
Are you an US Citizen: no
Are you registered to vote: no
You must be over 18 to vote.
You must be a citizen to vote.
You must be registered to vote.

Process returned 0 (0x0)   execution time : 4.355 s



*/
