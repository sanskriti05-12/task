#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    switch(number/12){
        case 0:
        cout<<"am";
        break;
        case 1:
        cout<<"pm";
        break;
        default:
        cout<<"ii";
        break;

    }
}