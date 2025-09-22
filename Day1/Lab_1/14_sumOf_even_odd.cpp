#include<iostream>
using namespace std;

int sumOfEven(int n){
    int result=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            result+=i;
        }
    }
    return result;
}

int sumOfOdd(int n){
    int result=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            result+=i;
        }
    }
    return result;
}

int main()
{
    int num;
    cout<<"Enter a number till you want to get sum of Even and Odd : ";
    cin>>num;

    cout<<"Sum of Even between 1 to "<<num<<" : "<<sumOfEven(num);
    cout<<"\nSum of ODD between 1 to "<<num<<" : "<<sumOfOdd(num);

}