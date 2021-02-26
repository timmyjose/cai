#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool palindrome(const string& s) {
  for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
    if (s[i] != s[j])
      return false;
  }

  return true;
}

vector<string> subsequences(const string& s) {
  vector<string> v;
  size_t len = s.size();

  for (size_t i = 1; i <= (1 << len) - 1; i++) {
    string ss = "";
    for (size_t j = 0; j < len; j++) {
      if (i & (1 << j))
        ss += s[j];
    }
    if (find(v.begin(), v.end(), ss) == v.end() && palindrome(ss))
      v.push_back(ss);
  }

  return v;
}

int main() {
  string inp;

  cin >> inp;
  auto v = subsequences(inp);
  sort(v.begin(), v.end(), [](string& x, string&y) {
      size_t xlen = x.size(), ylen = y.size();

      for (size_t i = 0; i < min(xlen, ylen); i++) {
      if (x[i] > y[i]) 
      return true;
      else if (x[i] < y[i])
      return false;
      }

      if (xlen > ylen)
      return true;
      else
      return false;
      });

    cout << v[0] << endl;

  return 0;
}