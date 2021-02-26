#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main() {
  int n, s;
  vector<tuple<int, int, int>> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    v.push_back(make_tuple(0, s, i));
  }

  sort(v.begin(), v.end(), [](auto x, auto y) {
      return get<1>(x) > get<1>(y);
      });

  int cs = 1, cv, cc;
  int i = 0;
  while (i < n) {
    cc = 1;
    cv = get<1>(v[i]);

    for (int j = i+1; j < n; j++) {
      if (get<1>(v[j]) == cv) 
        cc++;
      else
        break;
    }

    for (int k = 0; k < cc; k++) 
      get<0>(v[i+k]) = cs;
    i += cc;

    cs += cc;
  }

  sort(v.begin(), v.end(), [](auto x, auto y) {
      return get<2>(x) < get<2>(y);
      });

  for (auto e : v)
    cout << get<0>(e) << " ";
  cout << endl;
  
  return 0;
}