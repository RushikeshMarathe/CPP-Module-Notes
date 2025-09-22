#include<iostream>
using namespace std;

template <class arr>
arr arraySum(arr marks[],int elements){
    arr totalOfArray=0;
    for(int i=0;i<elements;i++)
    {
        totalOfArray = totalOfArray + marks[i];
    }

    return totalOfArray;
}

int main()
{
    int marks[5]={30,20,40,20,10};
    int elements = sizeof(marks) / sizeof(marks[0]);
    cout<<"\n Total of Array : "<<arraySum(marks,elements);
    return 0;
}