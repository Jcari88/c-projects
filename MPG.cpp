/*
Author: Jason Cariolano
Date: March 23, 2021
File Name: MPG
File Location:
*/
#include <iostream>

using namespace std;

int main() 
{

    double capacity, miles, average; 

    cout << "Enter number of gallons the car can hold: "  ;
    cin >> capacity;

    cout << "Enter number of miles that can be driven on a full tank: ";
    cin >> miles;

    average = miles/capacity; 

    cout << "The car's MPG is: " << average << endl ;
    return 0;
    
  
  
}




