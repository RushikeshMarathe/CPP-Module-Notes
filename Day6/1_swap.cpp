#include<iostream>
using namespace std;


template <class C>
void swapFunc(C& a, C& b){
    C temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a,b;
    //char a,char b;
    //double a, double b;
 

    cout<<"Enter Number 1 : ";
    cin>>a;

    cout<<"\n Enter Number 2 : ";
    cin>>b;


    cout<<"\n Before swap value of a = "<<a<<" & Value of B = "<<b;
    swapFunc(a,b);
    cout<<"\n After swap value of a = "<<a<<" & Value of B = "<<b;

    return 0;
}