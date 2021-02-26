#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  vector<int> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    v.push_back(d);
  }

  int m, p, c;
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> p >> c;

    if (p == 1) {
      v[p] += v[p-1] - c;
      v[p-1] = 0;
    } else if (p == n) {
      v[p-2] += c-1;
      v[p-1] = 0;
    } else {
      v[p] += v[p-1] - c;
      v[p-2] += c-1;
      v[p-1] = 0;
    }
  }

  for (auto e : v)
    cout << e << endl;

  return 0;
}