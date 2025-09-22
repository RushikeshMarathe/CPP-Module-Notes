#include<iostream>
using namespace std;

bool isPrime(int num)
{
    if(num ==1)
    {
        return false;
    }

    if(num==2 || num ==3)
    {
        return true;
    }

    for(int i=2;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int num;
    cout<<"Enter a number to check prime : ";
    cin>>num;

    if(isPrime(num))
    {
        cout<<"Number is Prime!...";
    }else{
        cout<<"Number is not Prime!...";
    }
}