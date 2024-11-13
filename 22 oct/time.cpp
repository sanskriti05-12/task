#include <iostream>
using namespace std;
int main(){
    int time;
    cout<<"enter your time =";
    cin>>time;
    if(time<12 ){
        cout<<"am";
    }
    else if(time>12 && time<=24){
        cout<<"pm";
    }
    else{
        cout<<"invalid time";
    }
}
    
