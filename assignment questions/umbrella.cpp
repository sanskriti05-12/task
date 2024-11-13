// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"enter the number =";
    cin>>number;
    if(number==1||3||5||7||8||10||12)
    {
    cout<<"31 days";
    }
   else if(number==4||6||9||11){
       cout<<"30 days";
   }
   else if(number==2)
   {
    cout<<"28\29 days";
   }
   else{
    cout<<"no days";
   }
    return 0;
}