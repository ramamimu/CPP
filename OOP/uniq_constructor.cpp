#include <bits/stdc++.h>

using namespace std;

class MyClass {
 public:
  MyClass(int a) : var(a)
  { }
  void printInfo() {
   cout << var<<endl;
   cout << this->var<<endl;
   cout << (*this).var<<endl; 
  }
 private:
  int var;
};

int main()
{
  MyClass first(4);
  first.printInfo();
  return 0;
}