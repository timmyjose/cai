#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, d;
  vector<vector<int>> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    vector<int> vv;
    for (int j = 0 ; j < n; j++) {
      cin >> d;
      vv.push_back(d);
    }
    v.push_back(vv);
  }

  vector<int> g;
  for (int i = 0; i < n; i++) {
    bool good = true;
    for (int j = 0; j < n; j++) {
      if (i == j ) continue;
      if (v[i][j] == 1 || v[i][j] == 3) {
        good = false;
        break;
      }
    }

    if (good) 
      g.push_back(i + 1);
  }

  cout << g.size() << endl;
  for (auto e : g)
    cout << e << " ";
  cout << endl;

  return 0;
}