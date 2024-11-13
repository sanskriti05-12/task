#include<iostream>
using namespace std;
int main(){
 float percentage,total,
 E=70,
 H=50,
 M=40;
 total=E+H+M;
 cout<<"total="<<total;

 percentage=total/300*100;
 cout<<" \npercentage="<<percentage;

 if(percentage>=90&& percentage<=100){
 cout<<"grade A";}
else if(percentage>=80&& percentage<=90){
 cout<<"grade B";}
 else if(percentage>=70&& percentage<=80){
 cout<<"grade C";}
 else if(percentage <=70){
 cout<<" \n fail";
 }
 else{
    cout<<"invalid";
 }
 
 }
 

