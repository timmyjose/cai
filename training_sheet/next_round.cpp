#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, k, d;
  vector<int> v;

  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> d;
    v.push_back(d);
  }

  sort(v.begin(), v.end(), greater<int>());

  int c = 0;
  for (int e : v) {
    if (e > 0 && e >= v[k-1]) 
      c++;
  }

  cout << c << endl;

  return 0;
}