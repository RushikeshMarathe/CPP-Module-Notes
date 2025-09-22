#include<iostream>

using namespace std ;

int main(){
int size;
int sum=0,average;
    cout<<"Enter the how many elements you want to add :";
    cin>>size;
    int arr[size];
cout<<"Enter element in array :"<<endl;
    for(int i=0 ; i<size ;i++){
        cout<<"Marks "<<i+1<<" : ";
        cin>> arr[i];
    }

    cout<<"Display the array element "<<endl ;

    for(int i=0 ; i<size ;i++){
        sum+=arr[i];
    }
            cout<<"Sum of Marks is "<<sum;
            cout<<"\nAverage of Marks is "<<sum/size;

}
