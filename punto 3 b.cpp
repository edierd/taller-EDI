#include <iostream>
using namespace std;
 
int main(){
  int a=1, num=0;
  
  while(a <= 100){
    num = num + a;
    a++;
  }
  
  cout << "La suma de los números es: " << num << endl;
}
