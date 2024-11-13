#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"enter the choice 1.international 2.domestic";
    cin>>choice;
    switch(choice){
            case 1:
        cout<<"destination 1.us 2.uk";
        cin >>choice;
        switch(choice){
            case 1:
            cout<<"us prize 200";
            break;
            case 2:
            cout<<"uk prize 300";
            break;
            default:
            cout<<"io";
            break;
        }
        break;
         case 2:
        cout<<"destination 1.bhopal 2.jabalpur";
        cin >>choice;
        switch(choice){
            case 1:
            cout<<"bhopal prize 200";
            break;
            case 2:
            cout<<"jabalpur prize 300";
            break;
            default:
            cout<<"io";
            break;
        }
        break;
        default:
        cout<<"ii";
        break;
    }

    }
    