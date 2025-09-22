#include<iostream>
using namespace std;

int main()
{
    char character;
    cout<<"\n Enter a character [a-z] to check Vowel/Consonant : ";
    cin>>character;

    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        cout<<"\n Character is Vowel."<<endl;
    }else{
        cout<<"Character is Consonant.";
    }

    return 0;
}