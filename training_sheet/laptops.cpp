#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, p, q;
  vector<pair<int, int>> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p >> q;
    v.push_back(make_pair(p, q));
  }

  sort(v.begin(), v.end(), [](const auto& e1, const auto& e2) {
      if (e1.first < e2.first)
      return true;
      else if (e1.first == e2.first) {
      if (e1.second > e2.second) 
      return true;
      }
      return false;
      });

  for (int i = 0; i < v.size() - 1; i++) {
    if (v[i].first < v[i+1].first && v[i].second > v[i+1].second) {
      cout << "Happy Alex\n";
      return 0;
    }
  }

  cout << "Poor Alex\n";

  return 0;
}