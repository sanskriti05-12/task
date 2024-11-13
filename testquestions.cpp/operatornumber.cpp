// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    int a=2,
    b=5;
    char ch;
    cout<<"enter the character=";
    cin>>ch;
    if(ch=='+'){
        cout<<a+b;
    }
    else if(ch=='-'){
        cout<<a-b;
    }
     else if(ch=='*'){
        cout<<a*b;
    }
   
    else if(ch=='/'){
        cout<<a/b;
    }
   
    else if(ch=='%'){
        cout<<a%b;
    }
   else{
       cout<<"invalid character";
   }
   
    
 	return 0;
} 
//  8.wap to accept two numbers and operator and give the answer accordingly  
    
    
