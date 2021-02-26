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

  sort(v.begin(), v.end());

  int c = 0;
  for (int i = 1; i < n - 1; i++) {
    if (v[i] > v[0] && v[i] < v[n-1])
      c++;
  }

  cout << c << endl;

  return 0;
}