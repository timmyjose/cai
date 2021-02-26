#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x, y, z;
  vector<vector<int>> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x >> y >> z;
    vector<int> vv;
    vv.push_back(x);
    vv.push_back(y);
    vv.push_back(z);
    v.push_back(vv);
  }

  long xs = 0L, ys = 0L, zs = 0L;
  for (int i = 0; i < n; i++) {
    xs += v[i][0];
    ys += v[i][1];
    zs += v[i][2];
  }

  if (xs == 0 && ys == 0 && zs == 0)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}