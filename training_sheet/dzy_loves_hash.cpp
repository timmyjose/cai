#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  int p, n, d;
  unordered_set<int> s;

  cin >> p >> n;
  for (int i = 0; i < n; i++) {
    cin >> d;
    if (s.find(d % p) == s.end()) {
      s.insert(d % p);
    } else {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
