#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, k;
  int f, t;

  cin >> n >> k >> f >> t;

  int mx;

  if (t > k)
    mx = f - t + k;
  else
    mx = f;

  for (int i = 0; i < n - 1; i++) {
    cin >> f >> t;
    mx = max(mx, t > k ? f - t + k : f);
  }

  cout << mx << endl;

  return 0;
}