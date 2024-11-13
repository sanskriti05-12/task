// 7.wap to check the triangle is isocles equilateral or scalene 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    int side1,side2 , side3;
    cout<<"enter the sides=";
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2== side3){
        cout<<"equilateral triangle";
    }
   else if(side1 == side2 || side2 == side3 || side1 == side3)
    {
  		cout << "\nThis is an Isosceles Triangle";
	}
  	else{
    	cout << "\nThis is a Scalene Triangle";
  	}
		
 	return 0;
}    
    
    
