// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string light;
    cout<<"enter the light =";
    cin>>light;
    if(light=="red")
    {
    cout<<"stop";
    }
   else if(light="orange"){
       cout<<"slow";
   }
    else if(light="green"){
       cout<<"go";
   }
    else {
       cout<<"light invalid";
   }
    return 0;
}