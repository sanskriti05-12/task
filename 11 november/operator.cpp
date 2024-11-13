#include<iostream>
using namespace std;
int main(){
    int number1,number2;
    char character;
    cout<<"enter the number1";
    cin>>number1;
     cout<<"enter the number2";
    cin>>number2;
     cout<<"enter the character";
    cin>>character;
    switch(character){
        case '+':
        cout<<number1+number2;
        break;
         case '-':
        cout<<number1-number2;
        break;
         case '/':
        cout<<number1/number2;
        break;
         case '*':
        cout<<number1*number2;
        break;
        default:
        cout<<"invalid input";
        break;
    }

    
}