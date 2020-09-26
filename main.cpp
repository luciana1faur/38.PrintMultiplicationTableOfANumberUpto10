#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b;

  cout << "Print the multiplication table of a number upto 10: " << endl;
  cout << "-----------------------------------" << endl;

  cout << "Introduceti numarul (de la 1 la 10): ";
  cin >> a;
  
  for(b = 1; b <= 10; b++){

    cout << a << " x " << b << " = " << a * b << endl;

  }
return 0;

}