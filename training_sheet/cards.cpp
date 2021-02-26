#include <iostream>
#include  <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, d;
  vector<pair<int, int>> v;

  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> d;
    v.push_back(make_pair(i, d));
  }

  sort(v.begin(), v.end(), [](auto a, auto b) {
      return a.second < b.second;
      });

  for (int i = 0; i < n/2; i++) {
    cout << v[i].first << " " << v[n-i-1].first << endl;
  }

  return 0;
}