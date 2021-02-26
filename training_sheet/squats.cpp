#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main() {
  int n;
  string inp;
  int lc = 0, uc = 0;

  cin >> n >> inp;

  for (char c : inp) {
    if (islower(c))
      lc++;
    else
      uc++;
  }

  int t = 0;
  if (lc < inp.size() / 2) {
    int d = inp.size() / 2 - lc;
    for (int i = 0; i < inp.size(); i++) {
      if (d == 0) break;
      if (isupper(inp[i])) {
        inp[i] = tolower(inp[i]);
        d--;
        t++;
      }
    }
    cout << t << endl;
    cout << inp << endl;
  } else if (uc < inp.size() / 2) {
    int d = inp.size() / 2 - uc;
    for (int i = 0; i < inp.size(); i++) {
      if (d == 0) break;
      if (islower(inp[i])) {
        inp[i] = toupper(inp[i]);
        d--;
        t++;
      }
    }
    cout << t << endl;
    cout << inp << endl;
  } else {
    cout << 0 << endl;
    cout << inp << endl;
  }

  return 0;
}