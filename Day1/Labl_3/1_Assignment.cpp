#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int sum=0;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the array element at "<<i<<" : ";
        cin>>arr[i];
    }

   int ch;
   int max = arr[0];
   int min = arr[0];

    do{
        cout<<"\n1.sum of array element.\n2.average of array element.\n3.max number of array.\n4.min number of array.\n0.exit.";
        cout<<"\nEnter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
           
            for(int i=0;i<size;i++)
            {
                sum += arr[i];
            }
            cout<<"Sum of array elements : "<<sum;
            break;

        case 2:
            cout<<"Sum of array elements : "<<(sum)/size;
            break;

        case 3:
            for(int i=1;i<size;i++)
            {
                if(arr[i]>max)
                {
                    max = arr[i];
                    cout<<"\nmax : "<<max;
                }
            }
            cout<<"max of array elements : "<<max;
            break;

        case 4:
            for(int i=0;i<size;i++)
            {
                if(arr[i]<min)
                {
                    min = arr[i];
                }
            }
            cout<<"min of array elements : "<<min;
            break;

        case 0:
            break;
        
        default:
            cout<<"enter valid choice!..";
        }
    }while(ch!=0);
}