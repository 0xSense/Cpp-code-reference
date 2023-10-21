#include<iostream>
using namespace std;

int main() {
  int num = 1 + 4 * 3;
  cout << endl << "Default Operator: " << num << endl;

  num = (1 + 4)* 3;
  cout << "Forced order: " << num << endl << endl;

  num = 7 - (4 + 2);
  cout << "Forced direction: " << num << endl;
  return 0;
}
