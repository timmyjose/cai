#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, s, e;
  int t = 0, d;

  vector<int> v;
  v.push_back(0);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    t += d;
    v.push_back(t);
  }

  cin >> s >> e;
  int d1 = abs(v[s-1] - v[e-1]);
  cout << min(d1, t - d1) << endl;

  return 0;
}