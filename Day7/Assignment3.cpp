#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    set<string> ArrayOfCity;
    int ch;
    string city;

    do{
        cout<<"\n1.ADD City. \n2.Display all City.\n3.Search City.\n0.Exit"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"\nEnter a city Name = ";
            cin>>city;
            ArrayOfCity.insert(city);
            cout<<"\nInserted Successfully!...";
            break;

        case 2:
            cout<<"\nAll Cities in Set : "<<endl;
            for(string i:ArrayOfCity)
            {
                cout<<"City : "<<i<<endl;
            }
            break;

        case 3:
            cout<<"\nSearch City : ";
            cin>>city;
             for(string i:ArrayOfCity)
            {
                if(i == city)
                {
                    cout<<"Searched City : "<<i<<endl;    
                }
            }
            break;

        case 0:
            break;
        
        default:
            cout<<"\n Enter a valid choice!.."<<endl;
            break;
        }

    }while(ch!=0);
    
}