#include<iostream>

using namespace std ;

int main(){
int size;
    cout<<"Enter the how many elements you want to add :";
    cin>>size;
    int arr[size];
cout<<"Enter element in array :"<<endl;
    for(int i=0 ; i<size ;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>> arr[i];
    }

    cout<<"Display the array element "<<endl ;

    for(int i=0 ; i<size ;i++){
        cout<<arr[i]<<" " ;
    }
}
