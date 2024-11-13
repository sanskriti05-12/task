// 9.wap to check the cititizens age if it senior or not with the gender
// gender=male/female
// age
// if age is above 60 then only the citizen is senior.
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    string gender;
    int age;
    cout<<"enter the gender 1.male/2.female";
    cin>>gender;
    (gender=="male" || gender==" female");
        cout<<"allowed for citizen \n";
         cout<<"enter the age=";
    cin>>age;
        
    
    if(age>60){
        cout<<"senior citizen";
        
    }
    
    else{
        cout<<"not senior citizen";
    }
}

