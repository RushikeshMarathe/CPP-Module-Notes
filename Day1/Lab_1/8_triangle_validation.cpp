#include<iostream>
using namespace std;

bool isTriangleIsValid(int a,int b,int c ){
    if((a+b > c) && (b+c > a) && (a+c >b))    
        return true;
    else
        return false;
}

int main(){

    int a,b,c;
    cout<<"Enter angles of traingle (angle angle angle) : ";
    cin>>a>>b>>c;

    if(isTriangleIsValid(a,b,c))
        cout<<"Triangle is Valid!..";
    else
        cout<<"Triangle is not valid!..";


}