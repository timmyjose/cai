#include <iostream>
#include <string>

using namespace std;

int main() {
  string inp;
  int s = 0;
  char c = 'a';

  cin >> inp;
  for (size_t i = 0; i < inp.size(); i++) {
    int d = abs(c - inp[i]);
    s += min(d, 26 - d);
    c = inp[i];
  }

  cout << s << endl;

  return 0;
}