#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n, d;
  vector<int> a, b, c;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;

    if (d == 1) 
      a.push_back(i+1);
    else if (d == 2) 
      b.push_back(i+1);
    else 
      c.push_back(i+1);
  }

  int t = min(min(a.size(), b.size()), c.size());
  cout << t << endl;

  if (t != 0) {
    for (int i = 0; i < t; i++) {
      cout << a[i] << " " << b[i] <<  " " << c[i] << endl;
    }
  }

  return 0;
}