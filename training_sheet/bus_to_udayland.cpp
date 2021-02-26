#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  string inp;
  vector<string> v;
  bool p = false;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> inp;
    for (int i = 0; i < inp.size() - 1; i++) {
      if (!p && inp[i] == 'O' && inp[i+1] == 'O') {
        p = true;
        inp[i] = '+';
        inp[i+1] = '+';
      }
    }
    v.push_back(inp);
  }

  if (p) {
    cout << "YES" << endl;
    for (auto e : v) 
      cout << e << endl;
  } else
    cout << "NO" << endl;

  return 0;
}