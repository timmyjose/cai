#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  string inp;

  vector<int> v(26, 0);

  cin >> n >> inp;
  for (char c : inp) {
    if (c >= 'a' && c <= 'z')
      v[c - 'a']++;
    else
      v[c - 'a' + 32]++;
  }

  bool f = true;
  for (int d : v) {
    if (d == 0) {
      f = false;
      break;
    }
  }

  if (f) 
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}