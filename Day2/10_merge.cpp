#include<iostream>

using namespace std ;

void mergeArray(int arr1[] , int arr2[] , int arr[]){
    int j=0;
    for(int i= 0 ; i< 5 ; i++){

        arr[j]=arr1[i];
        j++;


    }

    for(int i= 0 ; i< 5 ; i++){

        arr[j]=arr2[i];
        j++;


    }

}

int main(){
    int arr1[5];
    int arr2[5];

    int arr[10];
    cout<<"\t \t Enter value in  arr1 "<<endl ;

    for(int i=0 ; i<5 ;i++){
        cin >> arr1[i];
    }

    cout<<"\t \t Enter value in  arr2 "<<endl ;

    for(int i=0 ; i<5 ;i++){
        cin >> arr2[i];
    }

    mergeArray(arr1 , arr2 , arr);

    cout<<"\t \t Display the Merge of array  "<<endl ;

    for(int i=0 ; i<10 ;i++){
        cout<<arr[i]<<"  " ;
    }

    return 0 ;
}
