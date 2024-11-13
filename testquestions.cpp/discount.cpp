// 6.wap to give discount on the marked price on below mentioned condition
// 1.if cp =1000 and mp=2000 then 10% discount allowed
// 2.if cp =2000 and mp=4000 then 20% discount allowed
// 3.if cp =3000 and mp=6000 then 30% discount allowed
// 4.if cp =4000 and mp=8000 then 40% discount allowed
// calculate the selling price according to the conditions.
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    int sp,cp,mp,sp2;
    cout<<"enter the cp=";
    cin>>cp;
    cout<<"enter the mp=";
    cin>>mp;
  if ( cp ==1000 && mp==2000){
   cout<<"10% discount allowed";
   sp=2000-2000*10%100;
   cout<<sp;
  }
  else if ( cp ==2000 && mp==4000){
   cout<<"20% discount allowed";
   sp=4000*20%100;
   cout<<sp;
  }
  else if ( cp ==4000 && mp==8000){
   cout<<"40% discount allowed";
   sp=8000-40%100;
   cout<<sp;
  }
  else if ( cp ==3000 && mp==6000){
   cout<<"30% discount allowed";
   sp=6000-30%100;
   cout<<sp;
  }
  else{
      cout<<"invalid cp,mp";
  }
    
   
   
    
 	return 0;
}    
    
    
