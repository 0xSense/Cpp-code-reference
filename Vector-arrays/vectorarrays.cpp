#include <vector>
#include <iostream>
using namespace std;

int main() {
  vector <int> vec(3, 100);

  cout << "Vector Size: " << vec.size() << endl;
  cout << "Is Empty?: " << vec.empty() << endl;
  cout << "first Element: " <<vec.at(0) << endl;

  vec.pop_back(); // remove final element
  cout << "Vector size: " << vec.size() << endl;
  cout << "final element: " << vec.back() << endl;
  
  vec.clear(); // remove all elements.
  cout << "Vector size: " << vec.size() << endl;

  vec.push_back(200); // add an element
  cout << "Vector Size: " << vec.size() << endl;
  cout << "First Element: " << vec.front() << endl;
  return 0;  
}

