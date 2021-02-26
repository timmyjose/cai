#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  string inp;
  vector<string> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> inp;
    v.push_back(inp);
  }

  long t = 0L;
  for (int i = 0; i < n; i++) {
    int rc = 0;
    for (char c : v[i]) {
      if (c == 'C')
        rc++;
    }
    t += rc * (rc - 1) / 2;
  }

  for (int i = 0; i < n; i++) {
    int cc = 0;
    for (int j = 0; j < n; j++) {
      if (v[j][i] == 'C')
        cc++;
    }
    t += cc * (cc - 1) / 2;
  }

  cout << t << endl;

  return 0;
}