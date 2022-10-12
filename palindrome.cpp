/*
Author: Jason Cariolano
Check if string is Palindrome
*/
#include <iostream>
#include <stack>
using namespace std;
bool isPalindrome(string str);
int main()
{
    string str;
    cout << "Enter a String in lowercase : ";
    cin>>str;
    if (isPalindrome(str))
    {
        cout << str << " is a Palindrome" << endl;
    }
    else
    {
        cout << str << " is NOT a Palindrome" << endl;
    }
    return 0;
}

// Function returns true if string is a palindrome
bool isPalindrome(string str)
{
   int length = str.size();
   
   stack<char> st;
   
   int i;
   
    
   
   for (i = 0; i < length; i++)
   {
        if (isalnum(str[i])) //only alphanumeric characters are considered 
            st.push(str[i]);
        
   }
   
   char ch;
   
   for (i = 0; i < length; i++)
   {
   
        ch = st.top();
        st.pop();
        
    
    if (ch != str[i])
        return false;
    else{
        return true;
    }
   i++;
   }
   return 0;
}
