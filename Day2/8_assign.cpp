#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cout<<"Element "<<i<<" : ";
        cin >> arr[i];
    }

    int largest = 0, second = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == 0)
        cout << "No second largest element";
    else
        cout << "Second largest: " << second;

    return 0;
}
