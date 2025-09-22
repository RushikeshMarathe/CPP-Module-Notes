#include<iostream>

using namespace std ;

int main(){
int max,min,size;
    cout<<"Enter the how many elements you want to add :";
    cin>>size;
    int arr[size];
cout<<"Enter element in array :"<<endl;
    for(int i=0 ; i<size ;i++){
        cout<<"Marks "<<i+1<<" : ";
        cin>> arr[i];
    }
    max =min =arr[0];

    cout<<"Display the array element "<<endl ;

    for(int i=1 ; i<size ;i++){
        if(arr[i]>max)
            max=arr[i];

        if(arr[i]<min)
            min=arr[i];
    }
            cout<<"\nMax of array "<<max;
            cout<<"\nMin of array "<<min;

}
