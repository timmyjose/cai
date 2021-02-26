#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, d, t = 0;
  vector<int> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    t += d;
    v.push_back(d);
  }

  sort(v.begin(), v.end(), [](int x, int y) { return x > y; });

  int c = 0, s = 0;
  for (int e : v) {
   s += e;
   c++;
   if (s > t-s)  break;
  }

  cout << c << endl;

  return 0;
}