// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"enter any number";
//     cin>>number;
//     (number%7==0&&number%11==0)?cout<<number<<"divisible":cout<<number<<"not divisible";
// }
// divisible by both 11 an 7
// #question2 WAP to divisible by 11 or 7
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter any number";
    cin>>number;
    (number%7==0||number%11==0)?cout<<number<<"divisible":cout<<number<<"not divisible";
}