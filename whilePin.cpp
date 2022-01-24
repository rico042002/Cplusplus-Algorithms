#include <iostream>
using namespace std;

int main() {
  
  int pin = 0;
  int tries = 0;
  
  cout << "BANK OF CODECADEMY\n";
  
  cout << "Enter your PIN: ";
  cin >> pin;

  tries++;

  while (pin != 1234 && tries < 3) {
    
    cout << "Enter your PIN: ";
    cin >> pin;
    tries++;
    
  }
  
  if (pin == 1234) {
    
    cout << "PIN accepted!\n";
    cout << "You now have access.\n"; 
    
  }
  
}