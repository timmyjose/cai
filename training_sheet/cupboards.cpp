#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, l, r;
  int lzc = 0, loc = 0, rzc = 0, roc = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> l >> r;

    if (l) loc++; else lzc++;
    if (r) roc++; else rzc++;
  }

  cout << min(loc, lzc) + min(roc, rzc) << endl;

  return 0;
}