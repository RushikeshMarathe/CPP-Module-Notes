#include<iostream>
using namespace std;

int main()
{
    int num;

    //accept number from user;
    cout<<"\n Enter a number to check divisible by 5 and 7. : ";
    cin>>num;

    if(num % 5 == 0)
    {
        cout<<"\nNumber is divisible by 5."<<endl;
    }else if(num % 7 == 0){
        cout<<"Number is divisible by 7.";
    }else{
        cout<<"Number is not divisible by 5 and 7";
    }

    return 0;
}