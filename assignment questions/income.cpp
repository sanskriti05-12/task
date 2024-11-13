#include <iostream>
using namespace std;

int main() {
    int income;
    cout<<"enter the  income =";
    cin>> income;
    if( income>=100000){
        cout<<"no need to pay the tax";
    } 
    
    else if( income>100000&&  income<=500000){
        cout<<"pay 10% tax";
    }
    else if( income>500000&&  income<=1000000){
        cout<<"pay 20% tax";
    }
    else if( income >1000000){
        cout<<"pay 40% tax";
    }
    else{
        cout<<"invalid income";
    }
    
    
}