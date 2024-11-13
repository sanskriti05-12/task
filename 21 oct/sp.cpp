// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   
    int sp,cp,profit,loss,bill;
    cout<<"enter sp";
    cin>>sp;
     cout<<"enter cp";
    cin>>cp;
    if(sp>cp){
        cout<<"profit";
        profit=sp-cp;
        cout<<profit;
    }
    else if(cp>sp){
        cout<<"loss";
        loss=cp-sp;
        cout<<loss;
    }
    else if(sp==cp){
        cout<<"no profit,no loss";
    }
    else{
    cout<<"invalid";
    }
     bill=sp+sp*15/100;
    cout<<"total"<< bill;

    
    return 0;
}