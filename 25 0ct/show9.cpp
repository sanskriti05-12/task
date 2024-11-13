// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int number1,number2;
    cout<<"enter the two number =";
    cin>>number1>>number2;
    if(number1+number2==9||
    number1*number2==9||
    number1%number2==9||
    number1-number2==9||
    number1/number2==9)
    {
    cout<<"valid";
    }
   else{
       cout<<"invalid";
   }
    return 0;
}