#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;
    string filename1 = "file1.txt";
    string filename2 = "file2.txt";
    string line;

    cout << "1. Write to file\n";
    cout << "2. Read from file\n";
    cout << "3. Copy file\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();  

    if (choice == 1) {
        ofstream fout(filename1);
        cout << "Enter text (type END to stop):\n";
        while (true) {
            getline(cin, line);
            if (line == "END") break;
            fout << line << endl;
        }
        fout.close();
        cout << "Data written to " << filename1;
    } 
    
    else if (choice == 2) {
        ifstream fin(filename1);
        while (getline(fin, line)) {
            cout << line << endl;
        }
        fin.close();
    } 
    
    else if (choice == 3) {
        ifstream fin(filename1);
        ofstream fout(filename2);
        while (getline(fin, line)) {
            fout << line << endl;
        }
        fin.close();
        fout.close();
        cout << "Data copied to " << filename2;
    } 
    
    else {
        cout << "Invalid choice";
    }

    return 0;
}
