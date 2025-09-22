#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class application{
    private:
        vector<int> Array;

    public:
        void add(int n){
            this->Array.push_back(n);
        }

        void show(){
            cout<<"\nValues of Vectors."<<endl;
            for(int i:Array){
                cout<<i<<", ";
            }
        }

        void search(int n){
            for(int i:Array){
                if(i == n){
                    cout<<"Value is Present = "<<i<<endl;
                }
            }
        }

        void sortVector(){
            sort(Array.begin(),Array.end());
        }

        void reverseVector(){
            reverse(Array.begin(),Array.end());
        }

        void clear(){
            Array.clear();
        }
        
};



int main(){
    int ch;
    int n;
    application aObj;

    do{
        cout<<"\n1:add \n2:show all \n3:search \n4:sort\n 5:reverse \n6:clear"<<endl;
        cout<<"Enter you choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"\nEnter a element to add : ";
            cin>>n;
            aObj.add(n);
            break;

        case 2:
            aObj.show();
            break;

        case 3:
            int s;
            cout<<"\nEnter a element to search : ";
            cin>>s;
            aObj.search(s);
            break;

        case 4:
            aObj.sortVector();
            cout<<"\nVector sorted successfully!..."<<endl;
            break;

        case 5:
            aObj.reverseVector();
            cout<<"\nVector reversed successfully!..."<<endl;
            break;

        case 6:
            aObj.clear();
            cout<<"\nVector cleared successfully!..."<<endl;
            break;
        
        default:
            cout<<"\nEnter valid choice!..";
            break;
        }

    }while(ch!=0);
}