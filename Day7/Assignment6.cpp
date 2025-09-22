#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Product {
public:
    int prdid, qty;
    double price;
    string name;

    Product() {}
    Product(int id, string n, int q, double p) {
        prdid = id;
        name = n;
        qty = q;
        price = p;
    }

    void display() {
        cout << "ID: " << prdid
             << " | Name: " << name
             << " | Qty: " << qty
             << " | Price: " << price << endl;
    }
};

void addProduct() {
    ofstream fout("shop.txt", ios::app);
    Product p;
    cout << "Enter ID Name Qty Price: ";
    cin >> p.prdid >> p.name >> p.qty >> p.price;
    fout << p.prdid << " " << p.name << " " << p.qty << " " << p.price << endl;
    fout.close();
    cout << "Product Added!\n";
}

void displayProducts() {
    ifstream fin("shop.txt");
    Product p;
    while (fin >> p.prdid >> p.name >> p.qty >> p.price) {
        p.display();
    }
    fin.close();
}

void searchProduct() {
    ifstream fin("shop.txt");
    int id, found = 0;
    cout << "Enter Product ID to search: ";
    cin >> id;
    Product p;
    while (fin >> p.prdid >> p.name >> p.qty >> p.price) {
        if (p.prdid == id) {
            p.display();
            found = 1;
            break;
        }
    }
    if (!found) cout << "Product not found!\n";
    fin.close();
}

void updateProduct() {
    ifstream fin("shop.txt");
    ofstream fout("temp.txt");
    int id, found = 0;
    cout << "Enter Product ID to update: ";
    cin >> id;
    Product p;
    while (fin >> p.prdid >> p.name >> p.qty >> p.price) {
        if (p.prdid == id) {
            cout << "Enter new Name Qty Price: ";
            cin >> p.name >> p.qty >> p.price;
            found = 1;
        }
        fout << p.prdid << " " << p.name << " " << p.qty << " " << p.price << endl;
    }
    fin.close();
    fout.close();
    remove("shop.txt");
    rename("temp.txt", "shop.txt");
    if (found) cout << "Product Updated!\n";
    else cout << "Product not found!\n";
}

void deleteProduct() {
    ifstream fin("shop.txt");
    ofstream fout("temp.txt");
    int id, found = 0;
    cout << "Enter Product ID to delete: ";
    cin >> id;
    Product p;
    while (fin >> p.prdid >> p.name >> p.qty >> p.price) {
        if (p.prdid == id) {
            found = 1;
            continue; // skip writing this product
        }
        fout << p.prdid << " " << p.name << " " << p.qty << " " << p.price << endl;
    }
    fin.close();
    fout.close();
    remove("shop.txt");
    rename("temp.txt", "shop.txt");
    if (found) cout << "Product Deleted!\n";
    else cout << "Product not found!\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Shop Menu ---\n";
        cout << "1. Add Product\n2. Display Products\n3. Search Product\n";
        cout << "4. Update Product\n5. Delete Product\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addProduct(); break;
            case 2: displayProducts(); break;
            case 3: searchProduct(); break;
            case 4: updateProduct(); break;
            case 5: deleteProduct(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
