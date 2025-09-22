#include<iostream>
using namespace std;

int gcd(int a,int b)
{
// if(a==0)
//     {
//         return b;
//     }else 
//     if(b==0)
//     {
//         return a;
//     }else if(a==b)
//     {
//         return a;
//     }else if(a>b)
//     {
//         return gcd(a-b,b);
//     }else{
//         return gcd(a,b-a);
//     }

int result = min(a,b);
while (result >0)
{
    if(a%result == 0 && b % result ==0)
    {
        break;
    }
    result--;
}

return result;
}

int main()
{
    int num1,num2;
    cout<<"Enter Number 1 : ";
    cin>>num1;

    cout<<"Enter Number 2 : ";
    cin>>num2;

    cout<<"GCD : "<<gcd(num1,num2);

    return 0;
}