#include <iostream>
#include <string>

using namespace std;

int main() {
  int l, n;

  cin >> l >> n;
  string allowed = "";
  string password = "";

  for (int i = 0; i < n; i++) {
    allowed += (char)('a' + i);
  }

  for (int i = 0; i < l; i++) {
    password += allowed[i % n];
  }

  cout << password << endl;

  return 0;
}