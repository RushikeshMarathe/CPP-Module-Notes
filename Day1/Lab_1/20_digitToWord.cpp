#include<iostream>
using namespace std;

int main()
{
    int digit;
    cout<<"Enter a Signle digit Number to convert in words : ";
    cin>>digit;

    switch (digit)
    {
    case 1:
        cout<<"\nOne";
        break;

    case 2:
        cout<<"\nTwo";
        break;
    
    case 3:
        cout<<"\nThree";
        break;

    case 4:
    cout<<"\nFour";
        break;

    case 5:
    cout<<"\nFive";
        break;
    
    case 6:
        cout<<"\nSix";
        break;

    case 7:
        cout<<"\nSeven";
        break;

    case 8:
        cout<<"\nEight";
        break;

    case 9:
        cout<<"\nNine";
        break;

    default:
        cout<<"Enter a valid choice!...";
    }
}