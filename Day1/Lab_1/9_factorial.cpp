#include<iostream>
using namespace std;

int findFactorial(int n)
{
    if(n>0)
    {
        return n*findFactorial(n-1);
    }else{
        return 1;
    }
}

int main(){
    int numToFindFactorial;
    cout<<"Enter a number to find factorial of : ";
    cin>>numToFindFactorial;

    cout<<"Factorial of given Number : "<<findFactorial(numToFindFactorial);

}