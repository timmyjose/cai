#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  string inp;
  set<int> s;

  getline(cin, inp);
  for (char c : inp) {
    if (c >= 'a' && c <= 'z') 
      s.insert(c);
  }

  cout << s.size() << endl;

  return 0;
}