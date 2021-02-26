#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, d;
  int ec = 0, oc = 0;
  vector<pair<int, int>> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    v.push_back(make_pair(i+1, d));
    if (d % 2 == 0) ec++; else oc++;
  }

  if (ec == 1) {
    for (auto e : v) {
      if (e.second % 2 == 0)
        cout << e.first << endl;
    }
  } else {
    for (auto e : v) {
      if (e.second % 2 == 1)
        cout << e.first << endl;
    }
  }

  return 0;
}