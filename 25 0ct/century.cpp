// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"enter the century =";
    cin>>year;
    if(year%400==0)
    {
    cout<<"century";
    }
   else{
       cout<<"not century";
   }
    return 0;
}