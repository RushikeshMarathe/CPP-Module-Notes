#include<iostream>
using namespace std;

bool isPrime(int n){
     if(n ==1 || n == 0)
    {
        return true;
    }


    for(int i=2;i<n;i++)
    {
        if(n %i ==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    cout<<"Enter the number till you want to print prime numbers : ";
    cin>>n;
    cout<<"---Prime Numbers---";
    for(int i=2;i<n;i++){
        if(isPrime(i))
        {
            cout<<i<<", ";
        }
    }

   
}