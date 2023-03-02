#include <iostream>
using namespace std;

int main(){
  float c;
  cout << "Enter temperature in Celsius\n"; 
  cin >> c;
  float f = (c*1.8)+32;
  cout << "Temperature in Fahrenheit: " << f; 
  return 0;
}
