/*
Author: Jason Cariolano
Date: 6/20/21
Description:Class named DayOfYear that takes an integer
representing a day of the year and translates
it to a string consisting of the month followed
by day of the month.
*/

#include <iostream>

using namespace std;



class DayOfYear
{

private:
    // three instance variables for day of the year, month, and day of the month.
    int dayofyear, daymonth;
    string month;
    // static member array variables
    static int monthdays[12];
    static string monthNames[12];


public:
    // constructor -- takes int parameter
    DayOfYear(int dayofyear)
    {
        // assigns the instance variable dayofyear to the value of the argument dayofyear that was passed in
        this->dayofyear=dayofyear;
    }

    // Function to find the month and day from a given integer day of the year --
    // accesses static member variables to help translate variables into month-day format.
    void findMonthAndDay()
    {
        // set index to 0
        int i = 0;
        // loop through array containing integers that represent the number of days in each month
        int day = dayofyear;
        while( day > monthdays[i])
        {
            // If the user input integer is greater than the number of days in a certain month,
            // then subtract the number of days in that month from the user input.
            // Increment the month until the user input is less than the number of days in the month at index i.
            day -= monthdays[i];
            i++;
        }

        // Translate into month-day format using static member array containing strings of month names
        month=monthNames[i];
        daymonth=day;
    }

    // Declare print() as a friend of this class -- allowing access to private class members
    friend void print(DayOfYear day);
};


// Define static member variables outside of class
int DayOfYear::monthdays[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string DayOfYear::monthNames[12]= { "January", "February", "March", "April", "May", "June", "July",
                                    "August", "September", "October", "November", "December"};


/*friend function print() that takes an
object of type DayOfYear as parameter and
prints the day in the monthñday format.*/
void print(DayOfYear day)
{
    // calls member function and outputs month and day
    day.findMonthAndDay();
    cout << "Day " << day.dayofyear << " would be " << day.month << " " << day.daymonth << endl;

};


// Main function -- takes input from user, validates input, then calls print() if input is valid.
// If input is not valid it will display an error message to the user and call the main function again.
int main()
{
    int dayofyear;
    cout<<"Enter an integer between 1 and 365 for day of year ";
    cin>>dayofyear;

    if(dayofyear <= 365 && dayofyear >=1 )
    {
        print(dayofyear);
    }
    else
    {
        cout << "Error! Value must be between 1 and 365. Try again."<<endl;
        cout <<"\n";
        main();
    }


    return 0;
}

