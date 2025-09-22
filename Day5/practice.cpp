#include<iostream>
using namespace std;


enum day{
    Mon =0,
    Tue = 1,
    Wed =3
};

int main()
{
    //normal data
    // short data = 30;
    // int newData = 100;

    //pointer data
    // short *ptr = &data;
    // data = 111;

    // *ptr++;

   /*
    assigning pointer a new address
    cout<<"VAlue of ptr : "<<ptr<<endl;
    cout<<"value at ptr : "<<*ptr<<endl;


    Note :- ⚠️ This is tricky.

    Operator precedence says:

    *ptr++   →   *(ptr++)


    That means:

    ptr++ increments the pointer (ptr now points to the next memory location of type short).

    The * applies to the old value of ptr (but since result is unused, it’s effectively just pointer increment).

    So after this line:

    ptr no longer points to data.

    It points to the next short-sized location after data.

    */

    /*To Increment value at ptr use below syntax*/
    // Two ways to increment it one with syntax and one with pre-increment precedence
    
    /*
    (*ptr)++;
    ++*ptr;
    cout<<"\n Value at ptr => "<<*ptr;
    */

    
    // *++ptr;
    // cout<<"\n Value at ptr => "<<*ptr;

    // *ptr = *ptr + *ptr;
    // cout<<"\n Value at ptr => "<<*ptr;

    //pointer pointing to const variable
    //pointer value can be change but not value which its pointing
    /*
    const int a = 3;
    int b=22;
    const int *ptr = &a;

    cout<<"Value of Ptr : "<<ptr<<endl;
    cout<<"Value at ptr : "<<*ptr<<endl;

    ptr = &b;

     cout<<"Value of Ptr : "<<ptr<<endl;
    cout<<"Value at ptr : "<<*ptr<<endl;
    */


    //const pointer
    /*
    int a = 30;
    int b = 50;
    int *const ptr = &a;   //const pointer always needed initializer

     cout<<"Value of Ptr : "<<ptr<<endl;
    cout<<"Value at ptr : "<<*ptr<<endl;

    // ptr = &b; //it can't change its value [pointing address] because its const
    *ptr = 50; // but it can change value which it pointing

     cout<<"Value of Ptr : "<<ptr<<endl;
    cout<<"Value at ptr : "<<*ptr<<endl;

    */


    //const pointer to const value
    /*
    const int a= 30;
    const int *const ptr=&a;

     cout<<"Value of Ptr : "<<ptr<<endl;
    cout<<"Value at ptr : "<<*ptr<<endl;

    //ptr = &b; //it cant point/address to new location
   // *ptr = 50; //also it cant reassign a new value to this

    cout<<"Value of Ptr : "<<ptr<<endl;
    cout<<"Value at ptr : "<<*ptr<<endl;
*/







// ********* New Operator *********
/*
int *intPtr;

intPtr = new int[5];
cout<<"Value of intPtr = "<<intPtr<<endl;
cout<<"Value at ptr = "<<*intPtr;

cout<<"Value of intPtr = "<<intPtr[1]<<endl;
cout<<"Value at ptr = "<<*intPtr;

*/



//*****Enum ******/
/*
int ch;
cout<<"1.mon\n2.tue.\n3.wed\n4exit"<<endl;
cin>>ch;

day today = day(ch);

// cout<<Mon;

switch (today)
{
case 1:
    cout<<"Mon"<<endl;
    break;

case 2:
    cout<<"Tue"<<endl;
    break;

case 3:
    cout<<"Wed"<<endl;
    break;

case 4:
    break;

default:
    break;
}
*/




    return 0;
}