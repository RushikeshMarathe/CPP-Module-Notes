#include<iostream>
using namespace std;

int greatestOfThree(int a,int b,int c)
{

    if(a==b==c)
    {
        return a;
    }

    if(a>b && a>c)
    {
        return a;
    }else if(b>a && b>c)
    {
        return b;
    }else{
        return c;
    }
}

int main()
{
    int a,b,c;

    cout<<"Enter three number : ";
    cin>>a>>b>>c;

    cout<<"Greatest Number : "<<greatestOfThree(a,b,c);
}