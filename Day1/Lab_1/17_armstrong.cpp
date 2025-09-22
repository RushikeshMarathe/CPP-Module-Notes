#include<iostream>
#include<cmath>
using namespace std;


int findArmstrong(int num){
     int res=0;
     int count =0;
     int copyNum = num;
    while(num>0){
        count= count+1;
        num = num/10;
    }

int temp;

while(copyNum >0){
        temp = copyNum%10;
        res += pow(temp,count) ;
    
        copyNum = copyNum/10;

    }
    return res;
}
    


int main(){
    int num;
    cout<<"Enter a number to find armstrong or not : ";
    cin>>num;

    
    if(num == findArmstrong(num))
    {
        cout<<"Number is Armstrong!...";
    }else{
        cout<<"\nNumber is not Armstrong!...";
    }
}