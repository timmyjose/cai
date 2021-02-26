#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, d;
  vector<int> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    v.push_back(d);
  }

  int mn = 9999, mx;
  for (int i = 1; i < n - 1; i++) {
    mx = -9999;
    for (int j = 0; j < n - 1; j++) {
      if (j == i) 
        mx = max(mx, v[j+1] - v[j-1]);
      else
        mx = max(mx, v[j+1] - v[j]);
    }
    mn = min(mn, mx);
  }

  cout << mn << endl;

  return 0;
}