#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cout<<"Element "<<i+1<<": ";
        cin >> arr[i];
    }

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}
