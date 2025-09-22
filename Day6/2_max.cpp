#include<iostream>
using namespace std;

template <class T>
T MaxOfTwo(T& a,T& b)
{
    if(a>b)cl
    {
        return a;
    }else{
        return b;
    }
}

int main()
{
    int a,b;

    
    cout<<"Enter Number 1 : ";
    cin>>a;

    cout<<"\n Enter Number 2 : ";
    cin>>b;

    cout<<"\n Maximum of Two Numbers = "<<MaxOfTwo(a,b);

    return 0;
}