#include<iostream>
using namespace std;

int main(){
    int pizzaQuantity=0;
    double totalBill =0;
    int choice;
    bool exit = false;

    do{
    cout<<"\n1.Regular Pizza\n2.Small Pizza\n3.Large Pizza\n4.XL-Pizza\n5.Pay Bill\n0.Exit";
    cout<<"Select Pizza :";
    cin>>choice;
    

    switch (choice)
    {
    case 1:
        pizzaQuantity+=1;
        totalBill += 50;
        cout<<"Regular Pizza added to cart!...";
        break;

    case 2:
        pizzaQuantity+=1;
        totalBill += 100;
        cout<<"Small Pizza added to cart!...";
        break;

    case 3:
        pizzaQuantity+=1;
        totalBill += 150;
        cout<<"Large Pizza added to cart!...";
        break;

    case 4:
        pizzaQuantity+=1;
        totalBill += 200;
        cout<<"XL-Pizza added to cart!...";
        break;

    case 5:
        cout<<"\n------Bill Amount-------";
        cout<<"\nTotal Amount : "<<totalBill;
        break;

    case 0:
        break;
    
    default:
        cout<<"\nInvalid choice!...";
    }

    }while(choice!=0);



}