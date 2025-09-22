#include<iostream>
using namespace std;

int main()
{
    int n;
    char character;

    cout<<"\nprogram to accept a character, an integer n and display the next n characters";
    cout<<"\nEnter a integer : ";
    cin>>n;

    cout<<"\nEnter a character : ";
    cin>>character;


    for(int i=character;i<=n;i++)
    {
        char nextChar = character + i;
        cout<<nextChar<<", ";
        cout<<99;
    }
}