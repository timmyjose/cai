#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, d, s = 0, c = 0;
  vector<int> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    v.push_back(d);
    s += d;
  }

  for (auto e : v) {
    if ((s - e) % 2 == 0)
      c++;
  }

  cout << c << endl;

  return 0;
}