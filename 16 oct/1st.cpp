#include<iostream>
using namespace std;
int main(){
    int pin=1234,pina;
    cout<<"enter pin";
    cin>>pina;
    if(pin==pina){
        cout<<"collect your cash";
    }
    else{
        cout<<"wrong password,try again \n";
        cout<<"plzz reenter the password \n";
        cin>>pina;
        if(pin==pina){
            cout<<"collect your cash";
        }
        else{
            cout<<"wrong password try again";
        }
         cout<<"plzz reenter the password \n";
        cin>>pina;
        if(pin==pina){
            cout<<"collect your cash";
        }
        else{
            cout<<"blocked";
        }
    }
}