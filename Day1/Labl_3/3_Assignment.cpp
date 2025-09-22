#include<iostream>
using namespace std;

int main()
{
     int num;
     int sumEven =0,sumOdd =0;

    cout<<"Enter the number find sum of even and odd from 1 : ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            sumEven+=i;
        }else{
            sumOdd+=i;
        }
    }

    cout<<"\nSum of Even : "<<sumEven;
    cout<<"\nSum of Odd : "<<sumOdd;
}