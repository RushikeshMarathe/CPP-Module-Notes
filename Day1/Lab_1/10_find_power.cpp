#include<iostream>
using namespace std;



int main()
{
    int m,n;
    cout<<"---Find power of number----";
    cout<<"Enter a number and its power (m Power n) : ";
    cin>>m>>n;
    int result=1;
    for(int i=0;i<n;i++)
        {
            result *= m;
        }
    cout<<"power of "<<m<<" is : "<<result;
}