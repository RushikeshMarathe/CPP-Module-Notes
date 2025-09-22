#include<iostream>
using namespace std;

int main()
{
    int num;

    //accept number from user;
    cout<<"\n Enter a number to check if it is Even or Odd : ";
    cin>>num;

    if(num % 2 == 0)
    {
        cout<<"\nNumber is Even."<<endl;
    }else{
        cout<<"Number is Odd";
    }

    return 0;
}