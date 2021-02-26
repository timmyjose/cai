#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  vector<pair<int, int>> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int h, a;
    cin >> h >> a;
    v.push_back(make_pair(h, a));
  }

  int s = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == n) continue;

      if (v[i].first == v[j].second)
        s++;
    }
  }

  cout << s << endl;

  return 0;
}