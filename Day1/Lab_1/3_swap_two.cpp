#include <iostream>
using namespace std;

int main() 
{
    int a = 10, b= 30;
    int temp; //for temparary store;

    //Before swapping two numbers
    cout<<"---- Before swapping ----"<<endl;
    cout<<"Value of a = "<<a<<" & \n"<<"Value of b = "<<b<<endl;

    //swapt two numbers
    temp = a;
    a = b;
    b = temp;

    //after swapping two numbers
    cout<<"---- Before swapping ----"<<endl;
    cout<<"Value of a = "<<a<<" & \n"<<"Value of b = "<<b<<endl;

    return 0;
}