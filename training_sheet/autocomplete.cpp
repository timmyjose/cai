#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string inp, s;
  int n;
  vector<string> v;

  cin >> inp >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    v.push_back(s);
  }

  sort(v.begin(), v.end(), [](const string& x, const string& y) {
      size_t xlen = x.size();
      size_t ylen = y.size();

      for (int i = 0; i < min(xlen, ylen); i++) {
        if (x[i] < y[i]) 
          return true;
        else if (x[i] > y[i])
          return false;
      }

      if (xlen < ylen) 
        return true;
      else
        return false;
      });

  for (string s : v) {
    if (s.substr(0, inp.size()) == inp) {
      cout << s << endl;
      return 0;
    }
  }

  cout << inp << endl;

  return 0;
}