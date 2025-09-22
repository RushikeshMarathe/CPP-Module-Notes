#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number to get its factorial : ";
    cin>>num;

    for(int i=0;i<num-1;i++)
    {
        if(num %i == 0){
            cout<<"\nFactorial of num : "<<i;
        }
    }
}