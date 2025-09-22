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

    int freq[100] = {0};

    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) 
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = -1;
            }
        }
        freq[i] = count;
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] != -1) {
            cout << arr[i] << " occurs " << freq[i] << " times" << endl;
        }
    }

    return 0;
}
