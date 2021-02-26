#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x, y, d;
  vector<int> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    v.push_back(d);
  }

  cin >> x >> y;
  
  int ls, rs;
  for (int pos = 0; pos < n; pos++) {
    ls = rs = 0;
    
    for (int j = 0; j < pos; j++)
      ls += v[j];

    for (int j = pos; j < n; j++)
      rs += v[j];

    if (ls >=x && ls <= y && rs >= x && rs <= y) {
      cout << pos + 1 << endl;
      return 0;
    }
  }

  cout << 0 << endl;

  return 0;
}