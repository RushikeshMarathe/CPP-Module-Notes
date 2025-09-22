#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    bool flag = true;

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the array element at "<<i<<" : ";
        cin>>arr[i];
    }

   int ch;
   int numToSearch=0;

    do{
        cout<<"\n1.search element.\n0.exit.";
        cout<<"\nEnter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
           cout<<"Enter number to search : ";
           cin>>numToSearch;
            for(int i=0;i<size;i++)
            {
                if(arr[i] == numToSearch)
                {
                    cout<<"\nNumber is found at index "<<i;
                    flag = true;
                    break;
                }else{
                    flag = false;
                }
            }

            if(flag!=true)
            {
                cout<<"\nNumber is not found";
            }

        case 0:
            break;
        
        default:
            cout<<"enter valid choice!..";
        }
    }while(ch!=0);
}