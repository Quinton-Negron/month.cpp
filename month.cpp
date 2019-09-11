//Quinton Negron
//This program uses if, else if, and else commands
//to determine how many days are in a particular month
#include <iostream>
using namespace std;
int main()
{
    //For this problem we need two variables for year and month
    int x, y;
    cout << "Enter Year: ";
    cin >> x;
    cout << "Enter month: ";
    cin >> y;
    {
        //for readability, the standard months go 
        //first with the last one being Feburary.
        //It is possible to go in the listed order, but with how 
        //awkward feburary is I thought this was better to do
        if (y == 1)
        {
            cout << "31 days";
        }
        else if (y == 3)
        {
            cout << "31 days";
        }
        else if (y == 4)
        {
            cout << "30 days";
        }
        else if (y == 5)
        {
            cout << "31 days";
        }
        else if (y == 6)
        {
            cout << "30 days";
        }
        else if (y == 7)
        {
            cout << "31 days";
        }
        else if (y == 8)
        //August was weird. For the longest time I thought the months interchanged 
        //between 31 and less. However, July and August both share 31 days. 
        //Looking at the diagram provided,the knuckle trick suddenly made sense.
        {
            cout << "31 days";
        }
        else if (y == 9)
        {
            cout << "30 days";
        }
        else if (y == 10)
        {
            cout << "31 days";
        }
        else if (y == 11)
        {
            cout << "30 days";
        }
        else if (y == 12)
        {
            cout << "31 days";
        }
        else if (y == 2)
        {
            /*Here we have a seperate if/else for feburary because of leap years
            This is where the year part of the first lines of code were for.
            Without it, then we only list 28 days, instead of both 29 days and 28 days
            Although it rarely comes up, we still have to factor in leap years
            */
            if (x%400 == 0)
            {
                cout << "29 days";
            }
            else if (x%100 == 0)
            {
                cout << "28 days";
            }
            else if (x%4 == 0)
            {
                cout << "29 days";
            }
            else
            {
                cout << "28 days";
            }

        }
    }
return 0;
}