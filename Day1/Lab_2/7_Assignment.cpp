#include<iostream>
using namespace std;
#define PI 3.14

int main(){

    int ch;

    do{
        cout<<"\n1.compte area of circle\n2.compute area of triangle\n3.compute area of triangle\n0.exit.";
        cin>>ch;

        switch(ch)
        {
            case 1:
                double r;
                cout<<"\nEnter the radius of circle : ";
                cin>>r;

                cout<<"\nArea of Circle = "<<PI*(r*r);

                break;

            case 2:
                double length,width;
                cout<<"\nEnter the lenght and width of rectangle : ";
                cin>>length>>width;
                cout<<"\nArea of Rectangle : "<<length * width;
                break;


            case 3:
                double base,height;
                cout<<"\nEnter the base and height of triangle :";
                cin>>base>>height;
                cout<<"\nArea of Triangle : "<<(height*base)/2;
                break;

            case 0:
                break;

            default:
                cout<<"Enter a valid choice!...";


        }
    }while(ch!=0);
}