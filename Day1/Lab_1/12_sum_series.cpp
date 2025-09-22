#include<iostream>
using namespace std;

int main(){
    int num;
    int result=0;
    cout<<"Enter number to get sum of series : ";
    cin>>num;

    while(num>0){
        result +=num;
        num--;
    }
    cout<<"Sum of Series : "<<result;
}