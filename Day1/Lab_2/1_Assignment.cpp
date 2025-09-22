#include<iostream>
using namespace std;

int main()
{
    int result=0;
    int num;
    
    do{
        cout<<"\nFor adding positive number";
        cout<<"\nTo exit enter negative number";
        cout<<"\nEnter a number :";
        cin>>num;
        if(num>0)
            result += num;
    }while(num>0);

    cout<<"\nSum of the entered number : "<<result;

}