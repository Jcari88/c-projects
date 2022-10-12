/*
Author: Jason Cariolano
Doubles.cpp
Pointers
*/

#include <iostream>

using namespace std;

void addThree(int *ptr)
{
    *ptr=*ptr+3;
}

int main()
{
    int numDoubles;
    cout<<"Enter number of doubles:";
    cin>>numDoubles;

    double *ptr=new double[numDoubles];
    
    //enter a double into each array entry
    for(int i=0; i<numDoubles; i++)
    {
        cout<<"Enter the value of double: ";
        cin>>ptr[i];
    }
    
    double sum;
    //calculate the average
    for(int i=0; i<numDoubles; i++)
    {
        sum+=ptr[i];
    }
    
    cout<<"Average of doubles = "<<(sum/numDoubles)<<endl;

    //delete the memory allocated to the array
    delete[] ptr;
    
    
    //2 
    //Define an int variable and give it a value
    int num=5;
    
    addThree(&num);
    
    cout << "num (5) incremented by 3 = " <<num<< endl;
    
    return 0;
    
}


