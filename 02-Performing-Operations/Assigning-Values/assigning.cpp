#include <iostream>
using namespace std;

int main() {
  int a,b;

  cout << "Assign values: ";
  cout << "a= " << (a = 8) << " ";
  cout << "b= " << (b = 4);

  cout << endl << "Add & assign: ";
  cout << "a += b b(8 += 4) a = " << (a += b);
  cout << endl << "Subtract & assign: ";
  cout << " a -= b(12 -= 4) a = " << (a -= b);
  cout << endl << "Multiply & assign: ";
  cout << "a *= b(6 *= 9) a = " << (a *= b);
  cout << endl << "Divid & assign: ";
  cout << "a /= (32 /= 4) = " << ( a /= b);
  cout << endl << "Modulus assign: ";
  cout << " a %= b(8 %= 4) a = " << (a %= b);
 
  return 0;
}