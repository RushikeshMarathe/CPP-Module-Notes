#include<iostream>
using namespace std;

int main()
{
    int num;
    int fact=1;

    cout<<"Enter a number to count factorial of given numbeer : ";
    cin>>num;

    while(num>0)
    {
        fact *= num;
        --num;
    }

    cout<<"Factorial of number : "<<fact;


}