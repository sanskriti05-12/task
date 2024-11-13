// write a program to character is alphabet or not
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"enter the character=";
    cin>>ch;
    if((ch>='a'&& ch<='z')|| (ch>='A'&& ch<='Z'))
    cout<<"character is alphabet";
    else{
        cout<<"character is not alphabet";
    }
    
    return 0;
}