#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"\n Enter how much series from 1 you want to print prime : ";
    cin>>n;
    cout<<2<<" is a Prime Number."<<endl;
    cout<<3<<" is a Prime Number."<<endl;
    for(int i=2;i<=n;i++)
    {
      for(int j=2;j<= i/2;i++)
      {
        if(i % j != 0)
        {
            if(j= i/1)
            {
                cout<<i<<" is a Prime Number."<<endl;
            }
        }
      }
    }

    return 0;
}