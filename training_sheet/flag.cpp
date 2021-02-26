#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, m;
  string s;
  vector<string> v;

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> s;
    v.push_back(s);
  }

  for (auto r : v) {
    char c = r[0];
    for (int i = 1; i < m; i++) {
      if (r[i] != c) {
        cout << "NO\n";
        return 0;
      }
    }
  }

  char c = v[0][0];
  for (int i = 1; i < n; i++) {
    if (v[i][0] == c) {
      cout << "NO\n";
      return 0;
    }
    c = v[i][0];
  }

  cout << "YES\n";

  return 0;
}