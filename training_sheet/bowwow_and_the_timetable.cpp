#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
  string inp;
  int lpos = -1, oc = 0;

  cin >> inp;
  for (int i = 0; i < inp.size(); i++) {
    if (inp[i] == '1') {
      if (lpos == -1)
        lpos = inp.size() - i - 1;
      oc++;
    }
  }

  int c = 0, s = 0;
  while (true) {
    if (s > lpos) 
      break;
    else if (s == lpos) {
      if (oc > 1) c++;
      break;
    } else {
      c++;
      s += 2;
    }
  }

  cout << c << endl;

  return 0;
}