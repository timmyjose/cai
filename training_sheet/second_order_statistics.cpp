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

  int e = v[0];
  bool found = false;
  for (int i = 1; i < v.size(); i++) {
    if (e != v[i]) {
      e = v[i];
      found = true;
      break;
    }
  }

  if (found)
    cout << e << endl;
  else
    cout << "NO" << endl;

  return 0;
}