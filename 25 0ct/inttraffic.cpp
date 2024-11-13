// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int lightnumber;
    cout<<"enter the light number =1.red/2.green/3.orange \n";
    cin>>lightnumber;
    if(lightnumber==1)
    {
    cout<<"stop";
    }
   else if(lightnumber=2){
       cout<<"go";
   }
    else if(lightnumber=3){
       cout<<"slow";
   }
    else {
       cout<<"invalid number";
   }
    return 0;
}