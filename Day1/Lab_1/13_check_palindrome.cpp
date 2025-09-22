//13_check_palindrome.cpp

#include<iostream>
using namespace std;

int main()
{
    int num ,original_copy,reverse=0;

    cout<<"Enter a Number to check palindrome : ";
    cin>>num;

    while(num>0){

            reverse =reverse*10 +  (num %10);
            num = num /10;
    }
 

    if(original_copy == reverse)
    {
        cout<<"Number is palindrome!..";
    }else{
        cout<<"Number is not palindrome!..";
    }


}