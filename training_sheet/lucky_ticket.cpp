#include <iostream>
#include <string>

using namespace std;

bool lucky(const string& n) {
  for (auto d : n) {
    if (d != '4' && d != '7') 
      return false;
  }

  return true;
}

int main() {
  int n;
  string inp;

  cin >> n >> inp;

  if (!lucky(inp)) {
    cout << "NO\n";
  } else {
    int ls = 0, rs = 0;

    for (int i = 0; i < n/2; i++) 
      ls += inp[i] - '0';

    for (int j = n/2; j < n; j++) 
      rs += inp[j] - '0';

    if (ls != rs)
      cout << "NO\n";
    else
      cout << "YES\n";
  }

  return 0;
}