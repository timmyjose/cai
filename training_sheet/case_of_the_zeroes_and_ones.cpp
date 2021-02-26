#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int n;
  string inp;
  int z = 0, o = 0;

  cin >> n >> inp;
  for (char c : inp) {
    if (c == '0')
      z++;
    else
      o++;
  }

  cout << inp.size() - min(z, o) * 2 << endl;

  return 0;
}