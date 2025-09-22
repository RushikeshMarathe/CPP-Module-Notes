#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {5,6,1,3};

    for(int i=0;i<4-1;i++)
    {

        for( int j = 0;j<4-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
        
    }


    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<", ";
    }

    return 0;
}