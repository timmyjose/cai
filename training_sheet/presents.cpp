#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, d;
  vector<pair<int, int>> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    v.push_back(make_pair(d, i+1));
  }

  sort(v.begin(), v.end(), [](const auto& x, const auto& y) {
      return x.first < y.first;
      });

  for (auto p : v)
    cout << p.second << " ";
  cout << endl;

  return 0;
}