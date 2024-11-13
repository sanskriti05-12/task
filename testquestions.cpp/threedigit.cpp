#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"enter the number =";
    cin>>number;
    if(number>=100 && number<=999){
        cout<<"its a three digit number";
    }
    else{
        cout<<"its not a three digit number";
    }
    
   
    return 0;
}