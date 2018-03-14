#include <iostream>
#include <cmath>

using namespace std;
int main(){
  float num1,num2,num3,num4;
  cout<<"ingrese los 3 numeros:\n";cin>>num1>>num2>>num3;
  cout<<"ingrese un cuarto numero:";cin>>num4;
  
  if(num1==num4){
    cout<<"si coincide";
  }
  else if(num2==num4){
      cout<<"si coincide";
  }
      else if (num3==num4){
          cout<<"si coincide";
      }
          else
            cout<<"no coincide";
          
        
      
    
   

  return 0;
}
